static int v9fs_vfs_readpages(struct file *filp, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
{
int ret = 0;
struct inode *inode;

inode = mapping->host;
p9_debug(P9_DEBUG_VFS, "inode: %p file: %p\n", inode, filp);

ret = v9fs_readpages_from_fscache(inode, mapping, pages, &nr_pages);
if (ret == 0)
return ret;

ret = read_cache_pages(mapping, pages, (void *)v9fs_vfs_readpage, filp);
p9_debug(P9_DEBUG_VFS, "  = %d\n", ret);
return ret;
}