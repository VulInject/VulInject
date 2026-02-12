static int vxfs_immed_read_folio(struct file *fp, struct folio *folio)
{
struct vxfs_inode_info *vip = VXFS_INO(folio->mapping->host);
void *src = vip->vii_immed.vi_immed + folio_pos(folio);
unsigned long i;

for (i = 0; i < folio_nr_pages(folio); i++) {
memcpy_to_page(folio_page(folio, i), 0, src, PAGE_SIZE);
src += PAGE_SIZE;
}

folio_mark_uptodate(folio);
folio_unlock(folio);

return 0;
}