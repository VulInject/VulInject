static int update_extent_range(handle_t *handle, struct inode *inode,
ext4_fsblk_t pblock, struct migrate_struct *lb)
{
int retval;

if (lb->first_pblock &&
(lb->last_pblock+1 == pblock) &&
(lb->last_block+1 == lb->curr_block)) {
lb->last_pblock = pblock;
lb->last_block = lb->curr_block;
lb->curr_block++;
return 0;
}

retval = finish_range(handle, inode, lb);
lb->first_pblock = lb->last_pblock = pblock;
lb->first_block = lb->last_block = lb->curr_block;
lb->curr_block++;
return retval;
}