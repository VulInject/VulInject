void
mac_ndd_ioctl(mac_impl_t *mip, queue_t *wq, mblk_t *mp)
{
IOCP    iocp;
int	cmd, err, rval;

iocp = (IOCP)mp->b_rptr;
if (iocp->ioc_count == 0 || mp->b_cont == NULL) {
err = EINVAL;
goto done;
}

cmd = iocp->ioc_cmd;

if (cmd == ND_SET) {
err = mac_ndd_set_ioctl(mip, mp, iocp->ioc_count, &rval);
} else if (cmd == ND_GET) {
err = mac_ndd_get_ioctl(mip, mp, iocp->ioc_count, &rval);
}
done:
if (err == 0)
miocack(wq, mp, msgdsize(mp->b_cont), rval);
else
miocnak(wq, mp, 0, err);
}