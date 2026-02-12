static int afs_xattr_get_acl(const struct xattr_handler *handler,
struct dentry *dentry,
struct inode *inode, const char *name,
void *buffer, size_t size)
{
struct afs_operation *op;
struct afs_vnode *vnode = AFS_FS_I(inode);
struct afs_acl *acl = NULL;
int ret;

op = afs_alloc_operation(NULL, vnode->volume);
if (IS_ERR(op))
return -ENOMEM;

afs_op_set_vnode(op, 0, vnode);
op->ops = &afs_fetch_acl_operation;

afs_begin_vnode_operation(op);
afs_wait_for_operation(op);
acl = op->acl;
op->acl = NULL;
ret = afs_put_operation(op);

if (ret == 0) {
ret = acl->size;
if (size > 0) {
if (acl->size <= size)
memcpy(buffer, acl->data, acl->size);
else
ret = -ERANGE;
}
}

kfree(acl);
return ret;
}