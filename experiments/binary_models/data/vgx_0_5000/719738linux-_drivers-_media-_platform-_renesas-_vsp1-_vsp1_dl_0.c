static struct vsp1_dl_list *vsp1_dl_list_alloc(struct vsp1_dl_manager *dlm)
{
struct vsp1_dl_list *dl;
size_t header_offset;

dl = kzalloc(sizeof(*dl), GFP_KERNEL);
if (!dl)
return NULL;

INIT_LIST_HEAD(&dl->bodies);
dl->dlm = dlm;


dl->body0 = vsp1_dl_body_get(dlm->pool);
if (!dl->body0) {
kfree(dl);
return NULL;
}

header_offset = dl->body0->max_entries * sizeof(*dl->body0->entries);

dl->header = ((void *)dl->body0->entries) + header_offset;
dl->dma = dl->body0->dma + header_offset;

memset(dl->header, 0, sizeof(*dl->header));
dl->header->lists[0].addr = dl->body0->dma;

return dl;
}