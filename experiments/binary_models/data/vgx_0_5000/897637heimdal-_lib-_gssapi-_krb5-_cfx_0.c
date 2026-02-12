gss_iov_buffer_desc *
_gk_find_buffer(gss_iov_buffer_desc *iov, int iov_count, OM_uint32 type)
{
int i;
gss_iov_buffer_t iovp = GSS_C_NO_IOV_BUFFER;

if (iov == GSS_C_NO_IOV_BUFFER)
return GSS_C_NO_IOV_BUFFER;


for (i = 0; i < iov_count; i++) {
if (type == GSS_IOV_BUFFER_TYPE(iov[i].type)) {
if (iovp == GSS_C_NO_IOV_BUFFER)
iovp = &iov[i];
else
return GSS_C_NO_IOV_BUFFER;
}
}


if (iovp &&
iovp->buffer.length == 0 &&
type == GSS_IOV_BUFFER_TYPE_PADDING &&
(GSS_IOV_BUFFER_FLAGS(iovp->type) & GSS_IOV_BUFFER_FLAG_ALLOCATE) == 0)
iovp = NULL;

return iovp;
}