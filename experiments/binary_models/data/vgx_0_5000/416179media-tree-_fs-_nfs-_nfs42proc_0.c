static int nfs42_proc_fallocate(struct rpc_message *msg, struct file *filep,
loff_t offset, loff_t len)
{
struct nfs_server *server = NFS_SERVER(file_inode(filep));
struct nfs4_exception exception = { };
struct nfs_lock_context *lock;
int err;

lock = nfs_get_lock_context(nfs_file_open_context(filep));
if (IS_ERR(lock))
return PTR_ERR(lock);

exception.inode = file_inode(filep);
exception.state = lock->open_context->state;

do {
err = _nfs42_proc_fallocate(msg, filep, lock, offset, len);
if (err == -ENOTSUPP) {
err = -EOPNOTSUPP;
break;
}
err = nfs4_handle_exception(server, err, &exception);
} while (exception.retry);

nfs_put_lock_context(lock);
return err;
}