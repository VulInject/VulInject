static void
usbwcm_miocack(queue_t *q, mblk_t *mp, int rval)
{
struct iocblk	*iocbp = (struct iocblk *)mp->b_rptr;

mp->b_datap->db_type = M_IOCACK;
mp->b_wptr = mp->b_rptr + sizeof (struct iocblk);

iocbp->ioc_error = 0;
iocbp->ioc_count = 0;
iocbp->ioc_rval = rval;

if (mp->b_cont != NULL) {
freemsg(mp->b_cont);
mp->b_cont = NULL;
}

qreply(q, mp);
}