static void sti_hqvdp_init(struct sti_hqvdp *hqvdp)
{
int size;
dma_addr_t dma_addr;

hqvdp->vtg_nb.notifier_call = sti_hqvdp_vtg_cb;


size = NB_VDP_CMD * sizeof(struct sti_hqvdp_cmd);
hqvdp->hqvdp_cmd = dma_alloc_wc(hqvdp->dev, size,
&dma_addr,
GFP_KERNEL | GFP_DMA);
if (!hqvdp->hqvdp_cmd) {
DRM_ERROR("Failed to allocate memory for VDP cmd\n");
return;
}

hqvdp->hqvdp_cmd_paddr = (u32)dma_addr;
memset(hqvdp->hqvdp_cmd, 0, size);
}