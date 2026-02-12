static void 
sis900_reset(struct nic *nic __unused)
{
int i = 0;
u32 status = TxRCMP | RxRCMP;

outl(0, ioaddr + ier);
outl(0, ioaddr + imr);
outl(0, ioaddr + rfcr);

outl(RxRESET | TxRESET | RESET | inl(ioaddr + cr), ioaddr + cr);


while (status && (i++ < 1000)) {
status ^= (inl(isr + ioaddr) & status);
}

if( (pci_revision == SIS635A_900_REV) || (pci_revision == SIS900B_900_REV) )
outl(PESEL | RND_CNT, ioaddr + cfg);
else
outl(PESEL, ioaddr + cfg);
}