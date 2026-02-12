static irqreturn_t vmci_interrupt(int irq, void *_dev)
{
struct vmci_guest_device *dev = _dev;



if (dev->exclusive_vectors) {
vmci_dispatch_dgs(dev);
} else {
unsigned int icr;


icr = vmci_read_reg(dev, VMCI_ICR_ADDR);
if (icr == 0 || icr == ~0)
return IRQ_NONE;

if (icr & VMCI_ICR_DATAGRAM) {
vmci_dispatch_dgs(dev);
icr &= ~VMCI_ICR_DATAGRAM;
}

if (icr & VMCI_ICR_NOTIFICATION) {
vmci_process_bitmap(dev);
icr &= ~VMCI_ICR_NOTIFICATION;
}


if (icr & VMCI_ICR_DMA_DATAGRAM) {
wake_up_all(&dev->inout_wq);
icr &= ~VMCI_ICR_DMA_DATAGRAM;
}

if (icr != 0)
dev_warn(dev->dev,
"Ignoring unknown interrupt cause (%d)\n",
icr);
}

return IRQ_HANDLED;
}