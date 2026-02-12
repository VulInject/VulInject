static int decode_fhs_status(struct xdr_stream *xdr, struct mountres *res)
{
unsigned int i;
u32 status;
__be32 *p;

p = xdr_inline_decode(xdr, 4);
if (unlikely(p == NULL))
return -EIO;
status = be32_to_cpup(p);

for (i = 0; i < ARRAY_SIZE(mnt3_errtbl); i++) {
if (mnt3_errtbl[i].status == status) {
res->errno = mnt3_errtbl[i].errno;
return 0;
}
}

dprintk("NFS: unrecognized MNT3 status code: %u\n", status);
res->errno = -EACCES;
return 0;
}