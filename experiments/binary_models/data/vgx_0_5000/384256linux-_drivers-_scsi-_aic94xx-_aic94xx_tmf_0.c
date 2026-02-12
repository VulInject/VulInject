static void asd_clear_nexus_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
{
struct tasklet_completion_status *tcs = ascb->uldd_task;
ASD_DPRINTK("%s: here\n", __func__);
if (!del_timer(&ascb->timer)) {
ASD_DPRINTK("%s: couldn't delete timer\n", __func__);
return;
}
ASD_DPRINTK("%s: opcode: 0x%x\n", __func__, dl->opcode);
tcs->dl_opcode = dl->opcode;
complete(ascb->completion);
asd_ascb_free(ascb);
}