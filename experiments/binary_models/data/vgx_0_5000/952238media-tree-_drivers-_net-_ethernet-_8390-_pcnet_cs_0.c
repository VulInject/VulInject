static struct hw_info *get_ax88190(struct pcmcia_device *link)
{
struct net_device *dev = link->priv;
unsigned int ioaddr = dev->base_addr;
int i, j;


if (link->config_base != 0x03c0)
return NULL;

outb_p(0x01, ioaddr + EN0_DCFG);	
outb_p(0x00, ioaddr + EN0_RSARLO);	
outb_p(0x04, ioaddr + EN0_RSARHI);
outb_p(E8390_RREAD+E8390_START, ioaddr + E8390_CMD);

for (i = 0; i < 6; i += 2) {
j = inw(ioaddr + PCNET_DATAPORT);
dev->dev_addr[i] = j & 0xff;
dev->dev_addr[i+1] = j >> 8;
}
return NULL;
}