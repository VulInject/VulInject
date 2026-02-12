static void scan_timeout(unsigned long data)
{
struct floppy_state *fs = (struct floppy_state *) data;
struct swim3 __iomem *sw = fs->swim3;
unsigned long flags;

swim3_dbg("* scan timeout, state=%d\n", fs->state);

spin_lock_irqsave(&swim3_lock, flags);
fs->timeout_pending = 0;
out_8(&sw->control_bic, DO_ACTION | WRITE_SECTORS);
out_8(&sw->select, RELAX);
out_8(&sw->intr_enable, 0);
fs->cur_cyl = -1;
if (fs->retries > 5) {
swim3_end_request(fs, -EIO, 0);
fs->state = idle;
start_request(fs);
} else {
fs->state = jogging;
act(fs);
}
spin_unlock_irqrestore(&swim3_lock, flags);
}