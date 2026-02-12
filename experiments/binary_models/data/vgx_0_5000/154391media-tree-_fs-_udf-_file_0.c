static void __udf_adinicb_readpage(struct page *page)
{
struct inode *inode = page->mapping->host;
char *kaddr;
struct udf_inode_info *iinfo = UDF_I(inode);

kaddr = kmap_atomic(page);
memcpy(kaddr, iinfo->i_ext.i_data + iinfo->i_lenEAttr, inode->i_size);
memset(kaddr + inode->i_size, 0, PAGE_SIZE - inode->i_size);
flush_dcache_page(page);
SetPageUptodate(page);
kunmap_atomic(kaddr);
}