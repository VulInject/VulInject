static int
artpec6_crypto_setup_out_descr_short(struct artpec6_crypto_req_common *common,
void *dst, unsigned int len, bool eop)
{
struct artpec6_crypto_dma_descriptors *dma = common->dma;
struct pdma_descr *d;

if (dma->out_cnt >= PDMA_DESCR_COUNT ||
fault_inject_dma_descr()) {
pr_err("No free OUT DMA descriptors available!\n");
return -ENOSPC;
} else if (len > 7 || len < 1) {
return -EINVAL;
}
d = &dma->out[dma->out_cnt++];
memset(d, 0, sizeof(*d));

d->ctrl.short_descr = 1;
d->ctrl.short_len = len;
d->ctrl.eop = eop;
memcpy(d->shrt.data, dst, len);
return 0;
}