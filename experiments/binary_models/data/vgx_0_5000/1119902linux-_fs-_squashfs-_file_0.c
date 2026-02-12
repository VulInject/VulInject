void squashfs_copy_cache(struct page *page, struct squashfs_cache_entry *buffer,
int bytes, int offset)
{
struct inode *inode = page->mapping->host;
struct squashfs_sb_info *msblk = inode->i_sb->s_fs_info;
int i, mask = (1 << (msblk->block_log - PAGE_SHIFT)) - 1;
int start_index = page->index & ~mask, end_index = start_index | mask;


for (i = start_index; i <= end_index && bytes > 0; i++,
bytes -= PAGE_SIZE, offset += PAGE_SIZE) {
struct page *push_page;
int avail = buffer ? min_t(int, bytes, PAGE_SIZE) : 0;

TRACE("bytes %d, i %d, available_bytes %d\n", bytes, i, avail);

push_page = (i == page->index) ? page :
grab_cache_page_nowait(page->mapping, i);

if (!push_page)
continue;

if (PageUptodate(push_page))
goto skip_page;

squashfs_fill_page(push_page, buffer, offset, avail);
skip_page:
unlock_page(push_page);
if (i != page->index)
put_page(push_page);
}
}