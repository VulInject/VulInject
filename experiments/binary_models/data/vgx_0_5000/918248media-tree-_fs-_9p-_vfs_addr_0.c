static int v9fs_write_end(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
{
loff_t last_pos = pos + copied;
struct inode *inode = page->mapping->host;

p9_debug(P9_DEBUG_VFS, "filp %p, mapping %p\n", filp, mapping);

if (unlikely(copied < len && !PageUptodate(page))) {
copied = 0;
goto out;
}

if (last_pos > inode->i_size) {
inode_add_bytes(inode, last_pos - inode->i_size);
i_size_write(inode, last_pos);
}
set_page_dirty(page);
out:
unlock_page(page);
put_page(page);

return copied;
}