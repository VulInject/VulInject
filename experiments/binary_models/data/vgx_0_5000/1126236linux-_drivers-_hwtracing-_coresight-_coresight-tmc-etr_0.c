static void tmc_etr_sync_sg_buf(struct etr_buf *etr_buf, u64 rrp, u64 rwp)
{
long r_offset, w_offset;
struct etr_sg_table *etr_table = etr_buf->private;
struct tmc_sg_table *table = etr_table->sg_table;


r_offset = tmc_sg_get_data_page_offset(table, rrp);
if (r_offset < 0) {
dev_warn(table->dev,
"Unable to map RRP %llx to offset\n", rrp);
etr_buf->len = 0;
return;
}

w_offset = tmc_sg_get_data_page_offset(table, rwp);
if (w_offset < 0) {
dev_warn(table->dev,
"Unable to map RWP %llx to offset\n", rwp);
etr_buf->len = 0;
return;
}

etr_buf->offset = r_offset;
if (etr_buf->full)
etr_buf->len = etr_buf->size;
else
etr_buf->len = ((w_offset < r_offset) ? etr_buf->size : 0) +
w_offset - r_offset;
tmc_sg_table_sync_data_range(table, r_offset, etr_buf->len);
}