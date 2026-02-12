static void
vnet_m_ioctl(void *arg, queue_t *q, mblk_t *mp)
{
struct iocblk	*iocp;
vnet_t		*vnetp;

iocp = (struct iocblk *)(uintptr_t)mp->b_rptr;
iocp->ioc_error = 0;
vnetp = (vnet_t *)arg;

if (vnetp == NULL) {
miocnak(q, mp, 0, EINVAL);
return;
}

switch (iocp->ioc_cmd) {

case VNET_FORCE_LINK_DOWN:
case VNET_FORCE_LINK_UP:
vnet_force_link_state(vnetp, q, mp);
break;

default:
iocp->ioc_error = EINVAL;
miocnak(q, mp, 0, iocp->ioc_error);
break;

}
}