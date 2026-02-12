static int dma_ioc0_region_create(struct ps3_dma_region *r)
{
int result;
u64 bus_addr;

INIT_LIST_HEAD(&r->chunk_list.head);
spin_lock_init(&r->chunk_list.lock);

result = lv1_allocate_io_segment(0,
r->len,
r->page_size,
&bus_addr);
r->bus_addr = bus_addr;
if (result) {
DBG("%s:%d: lv1_allocate_io_segment failed: %s\n",
__func__, __LINE__, ps3_result(result));
r->len = r->bus_addr = 0;
}
DBG("%s: len=%#lx, pg=%d, bus=%#lx\n", __func__,
r->len, r->page_size, r->bus_addr);
return result;
}