static int unmap_memblk(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
{
int start_page, end_page, mpage, pg;
struct list_head *p;
struct snd_emu10k1_memblk *q;


p = blk->mapped_link.prev;
if (p != &emu->mapped_link_head) {
q = get_emu10k1_memblk(p, mapped_link);
start_page = q->mapped_page + q->pages;
} else {
start_page = 1;
}
p = blk->mapped_link.next;
if (p != &emu->mapped_link_head) {
q = get_emu10k1_memblk(p, mapped_link);
end_page = q->mapped_page;
} else {
end_page = (emu->address_mode ? MAX_ALIGN_PAGES1 : MAX_ALIGN_PAGES0);
}


list_del(&blk->mapped_link);
list_del(&blk->mapped_order_link);

mpage = blk->mapped_page;
for (pg = blk->first_page; pg <= blk->last_page; pg++) {
set_silent_ptb(emu, mpage);
mpage++;
}
blk->mapped_page = -1;
return end_page - start_page; 
}