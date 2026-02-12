static unsigned char ttyio_in(struct spk_synth *in_synth, int timeout)
{
struct tty_struct *tty = in_synth->dev;
struct spk_ldisc_data *ldisc_data = tty->disc_data;
char rv;

if (!timeout) {
if (!try_wait_for_completion(&ldisc_data->completion))
return 0xff;
} else if (wait_for_completion_timeout(&ldisc_data->completion,
usecs_to_jiffies(timeout)) == 0) {
pr_warn("spk_ttyio: timeout (%d)  while waiting for input\n",
timeout);
return 0xff;
}

rv = ldisc_data->buf;

mb();
ldisc_data->buf_free = true;

tty_flip_buffer_push(tty->port);

return rv;
}