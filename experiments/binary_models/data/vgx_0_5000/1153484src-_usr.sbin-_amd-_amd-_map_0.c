static int
unmount_node(am_node *mp)
{
mntfs *mf = mp->am_mnt;
int error;

if ((mf->mf_flags & MFF_ERROR) || mf->mf_refc > 1) {

if (mf->mf_flags & MFF_ERROR)
dlog("No-op unmount of error node %s", mf->mf_info);
error = 0;
} else {
dlog("Unmounting %s (%s)", mf->mf_mount, mf->mf_info);
error = (*mf->mf_ops->umount_fs)(mp);
}

if (error) {
errno = error; 
dlog("%s: unmount: %m", mf->mf_mount);
}

return error;
}