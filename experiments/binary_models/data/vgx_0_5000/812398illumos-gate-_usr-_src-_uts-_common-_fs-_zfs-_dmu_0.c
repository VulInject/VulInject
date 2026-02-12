int
dmu_xuio_add(xuio_t *xuio, arc_buf_t *abuf, offset_t off, size_t n)
{
struct iovec *iov;
uio_t *uio = &xuio->xu_uio;
dmu_xuio_t *priv = XUIO_XUZC_PRIV(xuio);
int i = priv->next++;

ASSERT(i < priv->cnt);
ASSERT(off + n <= arc_buf_lsize(abuf));
iov = uio->uio_iov + i;
iov->iov_base = (char *)abuf->b_data + off;
iov->iov_len = n;
priv->bufs[i] = abuf;
return (0);
}