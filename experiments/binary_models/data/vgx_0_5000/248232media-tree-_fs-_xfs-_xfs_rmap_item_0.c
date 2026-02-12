int
xfs_rui_copy_format(
struct xfs_log_iovec		*buf,
struct xfs_rui_log_format	*dst_rui_fmt)
{
struct xfs_rui_log_format	*src_rui_fmt;
uint				len;

src_rui_fmt = buf->i_addr;
len = xfs_rui_log_format_sizeof(src_rui_fmt->rui_nextents);

if (buf->i_len != len)
return -EFSCORRUPTED;

memcpy(dst_rui_fmt, src_rui_fmt, len);
return 0;
}