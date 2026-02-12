static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
{
struct gvp11_hostdata *hdata = shost_priv(instance);
struct WD33C93_hostdata *wh = &hdata->wh;
struct gvp11_scsiregs *regs = hdata->regs;


regs->SP_DMA = 1;

regs->CNTR = GVP11_DMAC_INT_ENABLE;


if (status && wh->dma_bounce_buffer) {
if (wh->dma_dir && SCpnt)
memcpy(SCpnt->SCp.ptr, wh->dma_bounce_buffer,
SCpnt->SCp.this_residual);

if (wh->dma_buffer_pool == BUF_SCSI_ALLOCED)
kfree(wh->dma_bounce_buffer);
else
amiga_chip_free(wh->dma_bounce_buffer);

wh->dma_bounce_buffer = NULL;
wh->dma_bounce_len = 0;
}
}