static int mgsl_put_char(struct tty_struct *tty, unsigned char ch)
{
struct mgsl_struct *info = tty->driver_data;
unsigned long flags;
int ret = 0;

if (debug_level >= DEBUG_LEVEL_INFO) {
printk(KERN_DEBUG "%s(%d):mgsl_put_char(%d) on %s\n",
__FILE__, __LINE__, ch, info->device_name);
}		

if (mgsl_paranoia_check(info, tty->name, "mgsl_put_char"))
return 0;

if (!info->xmit_buf)
return 0;

spin_lock_irqsave(&info->irq_spinlock, flags);

if ((info->params.mode == MGSL_MODE_ASYNC ) || !info->tx_active) {
if (info->xmit_cnt < SERIAL_XMIT_SIZE - 1) {
info->xmit_buf[info->xmit_head++] = ch;
info->xmit_head &= SERIAL_XMIT_SIZE-1;
info->xmit_cnt++;
ret = 1;
}
}
spin_unlock_irqrestore(&info->irq_spinlock, flags);
return ret;

}	