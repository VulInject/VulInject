static int omap_des_copy_sgs(struct omap_des_dev *dd)
{
void *buf_in, *buf_out;
int pages;

pages = dd->total >> PAGE_SHIFT;

if (dd->total & (PAGE_SIZE-1))
pages++;

BUG_ON(!pages);

buf_in = (void *)__get_free_pages(GFP_ATOMIC, pages);
buf_out = (void *)__get_free_pages(GFP_ATOMIC, pages);

if (!buf_in || !buf_out) {
pr_err("Couldn't allocated pages for unaligned cases.\n");
return -1;
}

dd->orig_out = dd->out_sg;

sg_copy_buf(buf_in, dd->in_sg, 0, dd->total, 0);

sg_init_table(&dd->in_sgl, 1);
sg_set_buf(&dd->in_sgl, buf_in, dd->total);
dd->in_sg = &dd->in_sgl;
dd->in_sg_len = 1;

sg_init_table(&dd->out_sgl, 1);
sg_set_buf(&dd->out_sgl, buf_out, dd->total);
dd->out_sg = &dd->out_sgl;
dd->out_sg_len = 1;

return 0;
}