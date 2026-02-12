static void idefloppy_create_rw_cmd(ide_drive_t *drive,
struct ide_atapi_pc *pc, struct request *rq,
unsigned long sector)
{
struct ide_disk_obj *floppy = drive->driver_data;
int block = sector / floppy->bs_factor;
int blocks = blk_rq_sectors(rq) / floppy->bs_factor;
int cmd = rq_data_dir(rq);

ide_debug_log(IDE_DBG_FUNC, "block: %d, blocks: %d", block, blocks);

ide_init_pc(pc);
pc->c[0] = cmd == READ ? GPCMD_READ_10 : GPCMD_WRITE_10;
put_unaligned(cpu_to_be16(blocks), (unsigned short *)&pc->c[7]);
put_unaligned(cpu_to_be32(block), (unsigned int *) &pc->c[2]);

memcpy(scsi_req(rq)->cmd, pc->c, 12);

pc->rq = rq;
if (cmd == WRITE)
pc->flags |= PC_FLAG_WRITING;

pc->flags |= PC_FLAG_DMA_OK;
}