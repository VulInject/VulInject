static int __gfs2_jdata_writepage(struct page *page, struct writeback_control *wbc)
{
struct inode *inode = page->mapping->host;
struct gfs2_inode *ip = GFS2_I(inode);
struct gfs2_sbd *sdp = GFS2_SB(inode);

if (PageChecked(page)) {
ClearPageChecked(page);
if (!page_has_buffers(page)) {
create_empty_buffers(page, inode->i_sb->s_blocksize,
BIT(BH_Dirty)|BIT(BH_Uptodate));
}
gfs2_page_add_databufs(ip, page, 0, sdp->sd_vfs->s_blocksize-1);
}
return gfs2_write_full_page(page, gfs2_get_block_noalloc, wbc);
}