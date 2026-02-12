static void pop_tx_status(struct net_device *dev)
{
unsigned int ioaddr = dev->base_addr;
int i;


for (i = 32; i > 0; i--) {
u_char tx_status = inb(ioaddr + TxStatus);
if (!(tx_status & 0x84))
break;

if (tx_status & 0x30)
tc574_wait_for_completion(dev, TxReset);
if (tx_status & 0x38) {
pr_debug("%s: transmit error: status 0x%02x\n",
dev->name, tx_status);
outw(TxEnable, ioaddr + EL3_CMD);
dev->stats.tx_aborted_errors++;
}
outb(0x00, ioaddr + TxStatus); 
}
}