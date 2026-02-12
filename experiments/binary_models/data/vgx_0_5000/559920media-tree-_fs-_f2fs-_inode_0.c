int update_inode_page(struct inode *inode)
{
struct f2fs_sb_info *sbi = F2FS_I_SB(inode);
struct page *node_page;
int ret = 0;
retry:
node_page = get_node_page(sbi, inode->i_ino);
if (IS_ERR(node_page)) {
int err = PTR_ERR(node_page);
if (err == -ENOMEM) {
cond_resched();
goto retry;
} else if (err != -ENOENT) {
f2fs_stop_checkpoint(sbi, false);
}
return 0;
}
ret = update_inode(inode, node_page);
f2fs_put_page(node_page, 1);
return ret;
}