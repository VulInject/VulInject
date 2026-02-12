static int allocate_timestamps_buffers(struct hl_fpriv *hpriv, struct hl_mem_in *args, u64 *handle)
{
struct hl_mem_mgr *mmg = &hpriv->mem_mgr;
struct hl_mmap_mem_buf *buf;

if (args->num_of_elements > TS_MAX_ELEMENTS_NUM) {
dev_err(mmg->dev, "Num of elements exceeds Max allowed number (0x%x > 0x%x)\n",
args->num_of_elements, TS_MAX_ELEMENTS_NUM);
return -EINVAL;
}

buf = hl_mmap_mem_buf_alloc(mmg, &hl_ts_behavior, GFP_KERNEL, &args->num_of_elements);
if (!buf)
return -ENOMEM;

*handle = buf->handle;

return 0;
}