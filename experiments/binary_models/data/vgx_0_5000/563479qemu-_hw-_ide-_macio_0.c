static void ide_dbdma_start(const IDEDMA *dma, IDEState *s,
BlockCompletionFunc *cb)
{
MACIOIDEState *m = container_of(dma, MACIOIDEState, dma);

s->io_buffer_index = 0;
if (s->drive_kind == IDE_CD) {
s->io_buffer_size = s->packet_transfer_size;
} else {
s->io_buffer_size = s->nsector * BDRV_SECTOR_SIZE;
}

MACIO_DPRINTF("\n\n------------ IDE transfer\n");
MACIO_DPRINTF("buffer_size: %x   buffer_index: %x\n",
s->io_buffer_size, s->io_buffer_index);
MACIO_DPRINTF("lba: %x    size: %x\n", s->lba, s->io_buffer_size);
MACIO_DPRINTF("-------------------------\n");

m->dma_active = true;
DBDMA_kick(m->dbdma);
}