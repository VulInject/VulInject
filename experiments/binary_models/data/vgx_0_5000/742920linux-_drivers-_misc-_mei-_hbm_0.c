static void mei_hbm_cl_dma_map_res(struct mei_device *dev,
struct hbm_client_dma_response *res)
{
struct mei_cl *cl;
struct mei_cl_cb *cb, *next;

cl = NULL;
list_for_each_entry_safe(cb, next, &dev->ctrl_rd_list, list) {
if (cb->fop_type != MEI_FOP_DMA_MAP)
continue;
if (!cb->cl->dma.buffer_id || cb->cl->dma_mapped)
continue;

cl = cb->cl;
break;
}
if (!cl)
return;

if (res->status) {
dev_err(dev->dev, "cl dma map failed %d\n", res->status);
cl->status = -EFAULT;
} else {
dev_dbg(dev->dev, "cl dma map succeeded\n");
cl->dma_mapped = 1;
cl->status = 0;
}
wake_up(&cl->wait);
}