static void resync_tnc(unsigned long channel)
{
struct sixpack *sp = (struct sixpack *) channel;
static char resync_cmd = 0xe8;



sp->rx_count = 0;
sp->rx_count_cooked = 0;



sp->status = 1;
sp->status1 = 1;
sp->status2 = 0;



sp->led_state = 0x60;
sp->tty->ops->write(sp->tty, &sp->led_state, 1);
sp->tty->ops->write(sp->tty, &resync_cmd, 1);




del_timer(&sp->resync_t);
sp->resync_t.data	= (unsigned long) sp;
sp->resync_t.function	= resync_tnc;
sp->resync_t.expires	= jiffies + SIXP_RESYNC_TIMEOUT;
add_timer(&sp->resync_t);
}