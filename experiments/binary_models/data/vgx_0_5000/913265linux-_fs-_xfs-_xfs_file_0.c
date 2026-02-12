static noinline ssize_t
xfs_file_dio_write_aligned(
struct xfs_inode	*ip,
struct kiocb		*iocb,
struct iov_iter		*from)
{
unsigned int		iolock = XFS_IOLOCK_SHARED;
ssize_t			ret;

ret = xfs_ilock_iocb(iocb, iolock);
if (ret)
return ret;
ret = xfs_file_write_checks(iocb, from, &iolock);
if (ret)
goto out_unlock;


if (iolock == XFS_IOLOCK_EXCL) {
xfs_ilock_demote(ip, XFS_IOLOCK_EXCL);
iolock = XFS_IOLOCK_SHARED;
}
trace_xfs_file_direct_write(iocb, from);
ret = iomap_dio_rw(iocb, from, &xfs_direct_write_iomap_ops,
&xfs_dio_write_ops, 0, NULL, 0);
out_unlock:
if (iolock)
xfs_iunlock(ip, iolock);
return ret;
}