ssize_t
xfs_vn_listxattr(
struct dentry	*dentry,
char		*data,
size_t		size)
{
struct xfs_attr_list_context context;
struct attrlist_cursor_kern cursor = { 0 };
struct inode	*inode = d_inode(dentry);
int		error;


memset(&context, 0, sizeof(context));
context.dp = XFS_I(inode);
context.cursor = &cursor;
context.resynch = 1;
context.alist = size ? data : NULL;
context.bufsize = size;
context.firstu = context.bufsize;
context.put_listent = xfs_xattr_put_listent;

error = xfs_attr_list_int(&context);
if (error)
return error;
if (context.count < 0)
return -ERANGE;

return context.count;
}