static int vmw_cmdbuf_space_inline(struct vmw_cmdbuf_man *man,
struct vmw_cmdbuf_header *header,
int size)
{
struct vmw_cmdbuf_dheader *dheader;
SVGACBHeader *cb_hdr;

if (WARN_ON_ONCE(size > VMW_CMDBUF_INLINE_SIZE))
return -ENOMEM;

dheader = dma_pool_zalloc(man->dheaders, GFP_KERNEL,
&header->handle);
if (!dheader)
return -ENOMEM;

header->inline_space = true;
header->size = VMW_CMDBUF_INLINE_SIZE;
cb_hdr = &dheader->cb_header;
header->cb_header = cb_hdr;
header->cmd = dheader->cmd;
cb_hdr->status = SVGA_CB_STATUS_NONE;
cb_hdr->flags = SVGA_CB_FLAG_NONE;
cb_hdr->ptr.pa = (u64)header->handle +
(u64)offsetof(struct vmw_cmdbuf_dheader, cmd);

return 0;
}