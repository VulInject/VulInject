static void pt_buffer_reset_offsets(struct pt_buffer *buf, unsigned long head)
{
struct topa_page *cur_tp;
struct topa_entry *te;
int pg;

if (buf->snapshot)
head &= (buf->nr_pages << PAGE_SHIFT) - 1;

if (!buf->single) {
pg = (head >> PAGE_SHIFT) & (buf->nr_pages - 1);
te = pt_topa_entry_for_page(buf, pg);

cur_tp = topa_entry_to_page(te);
buf->cur = &cur_tp->topa;
buf->cur_idx = te - TOPA_ENTRY(buf->cur, 0);
buf->output_off = head & (pt_buffer_region_size(buf) - 1);
} else {
buf->output_off = head;
}

local64_set(&buf->head, head);
local_set(&buf->data_size, 0);
}