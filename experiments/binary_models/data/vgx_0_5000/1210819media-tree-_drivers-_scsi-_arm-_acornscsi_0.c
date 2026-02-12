int acornscsi_bus_reset(struct scsi_cmnd *SCpnt)
{
AS_Host *host = (AS_Host *)SCpnt->device->host->hostdata;
struct scsi_cmnd *SCptr;

host->stats.resets += 1;

{
int asr, ssr;

asr = sbic_arm_read(host, SBIC_ASR);
ssr = sbic_arm_read(host, SBIC_SSR);

printk(KERN_WARNING "acornscsi_reset: ");
print_sbic_status(asr, ssr, host->scsi.phase);
acornscsi_dumplog(host, SCpnt->device->id);
}

acornscsi_dma_stop(host);


acornscsi_resetcard(host);

while ((SCptr = queue_remove(&host->queues.disconnected)) != NULL)
;

return SUCCESS;
}