static void dma_stop(struct Scsi_Host *instance, struct scsi_cmnd *SCpnt,
int status)
{
struct ip22_hostdata *hdata = host_to_hostdata(instance);
struct hpc3_scsiregs *hregs;

if (!SCpnt)
return;

if (SCpnt->SCp.ptr == NULL || SCpnt->SCp.this_residual == 0)
return;

hregs = (struct hpc3_scsiregs *) SCpnt->device->host->base;

pr_debug("dma_stop: status<%d> ", status);


if (hdata->wh.dma_dir) {
hregs->ctrl |= HPC3_SCTRL_FLUSH;
while (hregs->ctrl & HPC3_SCTRL_ACTIVE)
barrier();
}
hregs->ctrl = 0;
dma_unmap_single(hdata->dev, SCpnt->SCp.dma_handle,
SCpnt->SCp.this_residual,
DMA_DIR(hdata->wh.dma_dir));

pr_debug("\n");
}