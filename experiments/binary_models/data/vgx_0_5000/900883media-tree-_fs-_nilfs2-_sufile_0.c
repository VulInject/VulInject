int nilfs_sufile_set_alloc_range(struct inode *sufile, __u64 start, __u64 end)
{
struct nilfs_sufile_info *sui = NILFS_SUI(sufile);
__u64 nsegs;
int ret = -ERANGE;

down_write(&NILFS_MDT(sufile)->mi_sem);
nsegs = nilfs_sufile_get_nsegments(sufile);

if (start <= end && end < nsegs) {
sui->allocmin = start;
sui->allocmax = end;
ret = 0;
}
up_write(&NILFS_MDT(sufile)->mi_sem);
return ret;
}