int generic_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
{
struct inode *inode = mapping->host;
loff_t old_size = inode->i_size;
bool i_size_changed = false;

copied = block_write_end(file, mapping, pos, len, copied, page, fsdata);


if (pos + copied > inode->i_size) {
i_size_write(inode, pos + copied);
i_size_changed = true;
}

unlock_page(page);
put_page(page);

if (old_size < pos)
pagecache_isize_extended(inode, old_size, pos);

if (i_size_changed)
mark_inode_dirty(inode);
return copied;
}