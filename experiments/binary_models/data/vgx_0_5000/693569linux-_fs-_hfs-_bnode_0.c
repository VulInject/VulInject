void hfs_bnode_copy(struct hfs_bnode *dst_node, int dst,
struct hfs_bnode *src_node, int src, int len)
{
struct page *src_page, *dst_page;

hfs_dbg(BNODE_MOD, "copybytes: %u,%u,%u\n", dst, src, len);
if (!len)
return;
src += src_node->page_offset;
dst += dst_node->page_offset;
src_page = src_node->page[0];
dst_page = dst_node->page[0];

memcpy_page(dst_page, dst, src_page, src, len);
set_page_dirty(dst_page);
}