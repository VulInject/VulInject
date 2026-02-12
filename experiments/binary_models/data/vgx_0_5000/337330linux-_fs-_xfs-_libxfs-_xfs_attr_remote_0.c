int
xfs_attr_rmtval_remove(
struct xfs_attr_intent		*attr)
{
struct xfs_da_args		*args = attr->xattri_da_args;
int				error, done;


error = xfs_bunmapi(args->trans, args->dp, args->rmtblkno,
args->rmtblkcnt, XFS_BMAPI_ATTRFORK, 1, &done);
if (error)
return error;


if (!done) {
trace_xfs_attr_rmtval_remove_return(attr->xattri_dela_state,
args->dp);
return -EAGAIN;
}

args->rmtblkno = 0;
args->rmtblkcnt = 0;
return 0;
}