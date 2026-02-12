static int ocfs2_inode_is_valid_to_delete(struct inode *inode)
{
int ret = 0;
struct ocfs2_inode_info *oi = OCFS2_I(inode);
struct ocfs2_super *osb = OCFS2_SB(inode->i_sb);

trace_ocfs2_inode_is_valid_to_delete(current, osb->dc_task,
(unsigned long long)oi->ip_blkno,
oi->ip_flags);


if (inode == osb->root_inode) {
mlog(ML_ERROR, "Skipping delete of root inode.\n");
goto bail;
}


if (current == osb->dc_task)
goto bail;

spin_lock(&oi->ip_lock);

if (oi->ip_flags & OCFS2_INODE_SYSTEM_FILE) {
mlog(ML_ERROR, "Skipping delete of system file %llu\n",
(unsigned long long)oi->ip_blkno);
goto bail_unlock;
}

ret = 1;
bail_unlock:
spin_unlock(&oi->ip_lock);
bail:
return ret;
}