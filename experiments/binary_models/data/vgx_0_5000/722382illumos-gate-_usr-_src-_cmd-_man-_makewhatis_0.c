static void
process_section(char *section_dir)
{
struct dirent	**entries;
int		nentries;
struct page_info **pages;
int		npages = 0;
int		i;
ino_t		prev_inode = 0;


nentries = scandir(section_dir, &entries, NULL, alphasort);


pages = (struct page_info **)calloc(nentries,
sizeof (struct page_info *));
for (i = 0; i < nentries; i++) {
struct page_info *info = new_page_info(section_dir, entries[i]);
if (info != NULL)
pages[npages++] = info;
free(entries[i]);
}
free(entries);
qsort(pages, npages, sizeof (struct page_info *), pagesort);


for (i = 0; i < npages; i++) {
struct page_info *page = pages[i];
if (page->inode != prev_inode) {
prev_inode = page->inode;
process_page(page, section_dir);
}
free_page_info(page);
}
free(pages);
}