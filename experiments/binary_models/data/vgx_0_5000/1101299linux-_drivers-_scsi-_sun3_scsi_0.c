static irqreturn_t scsi_sun3_intr(int irq, void *dev)
{
struct Scsi_Host *instance = dev;
unsigned short csr = dregs->csr;
int handled = 0;

dregs->csr &= ~CSR_DMA_ENABLE;

if(csr & ~CSR_GOOD) {
if (csr & CSR_DMA_BUSERR)
shost_printk(KERN_ERR, instance, "bus error in DMA\n");
if (csr & CSR_DMA_CONFLICT)
shost_printk(KERN_ERR, instance, "DMA conflict\n");
handled = 1;
}

if(csr & (CSR_SDB_INT | CSR_DMA_INT)) {
NCR5380_intr(irq, dev);
handled = 1;
}

return IRQ_RETVAL(handled);
}