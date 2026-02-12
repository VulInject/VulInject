static int ovl_check_whiteouts(const struct path *path, struct ovl_readdir_data *rdd)
{
int err;
struct ovl_cache_entry *p;
struct dentry *dentry, *dir = path->dentry;
const struct cred *old_cred;

old_cred = ovl_override_creds(rdd->dentry->d_sb);

err = down_write_killable(&dir->d_inode->i_rwsem);
if (!err) {
while (rdd->first_maybe_whiteout) {
p = rdd->first_maybe_whiteout;
rdd->first_maybe_whiteout = p->next_maybe_whiteout;
dentry = lookup_one(mnt_idmap(path->mnt), p->name, dir, p->len);
if (!IS_ERR(dentry)) {
p->is_whiteout = ovl_is_whiteout(dentry);
dput(dentry);
}
}
inode_unlock(dir->d_inode);
}
revert_creds(old_cred);

return err;
}