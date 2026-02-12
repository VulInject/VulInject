static void chcr_detach_device(struct uld_ctx *u_ctx)
{
struct chcr_dev *dev = &u_ctx->dev;

if (dev->state == CHCR_DETACH) {
pr_debug("Detached Event received for already detach device\n");
return;
}
dev->state = CHCR_DETACH;
if (atomic_read(&dev->inflight) != 0) {
schedule_delayed_work(&dev->detach_work, WQ_DETACH_TM);
wait_for_completion(&dev->detach_comp);
}


chcr_dev_move(u_ctx);
}