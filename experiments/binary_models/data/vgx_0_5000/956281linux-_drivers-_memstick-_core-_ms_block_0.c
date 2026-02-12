static int msb_erase_block(struct msb_data *msb, u16 pba)
{
int error, try;

if (msb->read_only)
return -EROFS;

dbg_verbose("erasing pba %d", pba);

for (try = 1; try < 3; try++) {
msb->regs.param.block_address = cpu_to_be16(pba);
msb->regs.param.page_address = 0;
msb->regs.param.cp = MEMSTICK_CP_BLOCK;
msb->command_value = MS_CMD_BLOCK_ERASE;
msb->command_need_oob = false;


error = msb_run_state_machine(msb, h_msb_send_command);
if (!error || msb_reset(msb, true))
break;
}

if (error) {
pr_err("erase failed, marking pba %d as bad", pba);
msb_mark_bad(msb, pba);
}

dbg_verbose("erase success, marking pba %d as unused", pba);
msb_mark_block_unused(msb, pba);
__set_bit(pba, msb->erased_blocks_bitmap);
return error;
}