int nfs4_submount(struct fs_context *fc, struct nfs_server *server)
{
struct nfs_fs_context *ctx = nfs_fc2context(fc);
struct dentry *dentry = ctx->clone_data.dentry;
struct dentry *parent = dget_parent(dentry);
struct inode *dir = d_inode(parent);
struct rpc_clnt *client;
int ret;


client = nfs4_proc_lookup_mountpoint(dir, dentry, ctx->mntfh,
ctx->clone_data.fattr);
dput(parent);
if (IS_ERR(client))
return PTR_ERR(client);

ctx->selected_flavor = client->cl_auth->au_flavor;
if (ctx->clone_data.fattr->valid & NFS_ATTR_FATTR_V4_REFERRAL) {
ret = nfs_do_refmount(fc, client);
} else {
ret = nfs_do_submount(fc);
}

rpc_shutdown_client(client);
return ret;
}