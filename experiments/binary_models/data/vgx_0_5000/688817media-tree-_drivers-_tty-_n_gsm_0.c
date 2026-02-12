static int gsmld_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
{
struct gsm_config c;
struct gsm_mux *gsm = tty->disc_data;

switch (cmd) {
case GSMIOC_GETCONF:
memset(&c, 0, sizeof(c));
c.adaption = gsm->adaption;
c.encapsulation = gsm->encoding;
c.initiator = gsm->initiator;
c.t1 = gsm->t1;
c.t2 = gsm->t2;
c.t3 = 0;	
c.n2 = gsm->n2;
if (gsm->ftype == UIH)
c.i = 1;
else
c.i = 2;
pr_debug("Ftype %d i %d\n", gsm->ftype, c.i);
c.mru = gsm->mru;
c.mtu = gsm->mtu;
c.k = 0;
if (copy_to_user((void *)arg, &c, sizeof(c)))
return -EFAULT;
return 0;
case GSMIOC_SETCONF:
if (copy_from_user(&c, (void *)arg, sizeof(c)))
return -EFAULT;
return gsmld_config(tty, gsm, &c);
default:
return n_tty_ioctl_helper(tty, file, cmd, arg);
}
}