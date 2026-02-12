static int
av1394_fcp_copyin_block(iec61883_arq_t *arq, mblk_t *mp, struct uio *uiop)
{
int	len = arq->arq_len;
int	copylen;
int	ret = 0;

ASSERT((len > 0) && (len % IEEE1394_QUADLET == 0));


copylen = min(len, sizeof (arq->arq_data));
bcopy(&arq->arq_data.buf[0], mp->b_wptr, copylen);
mp->b_wptr += copylen;


copylen = len - copylen;
if (copylen > 0) {
ret = uiomove(mp->b_wptr, copylen, UIO_WRITE, uiop);
if (ret != 0) {
return (ret);
}
mp->b_wptr += copylen;
}
return (ret);
}