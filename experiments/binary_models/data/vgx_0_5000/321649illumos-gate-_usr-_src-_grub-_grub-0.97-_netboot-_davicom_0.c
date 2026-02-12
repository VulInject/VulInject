static void davicom_transmit(struct nic *nic, const char *d, unsigned int t,
unsigned int s, const char *p)
{
unsigned long to;

whereami("davicom_transmit\n");





memcpy(&txb[0], d, ETH_ALEN);	
memcpy(&txb[ETH_ALEN], nic->node_addr, ETH_ALEN); 
txb[ETH_ALEN*2] = (t >> 8) & 0xFF; 
txb[ETH_ALEN*2+1] = t & 0xFF;
memcpy(&txb[ETH_HLEN], p, s); 


txd[TxPtr].buf1sz   = ETH_HLEN+s;
txd[TxPtr].control  = 0x00000184;      
txd[TxPtr].status   = 0x80000000;      


outl(0, ioaddr + CSR1);

to = currticks() + TX_TIME_OUT;
while ((txd[TxPtr].status & 0x80000000) && (currticks() < to))
;

if (currticks() >= to) {
printf ("TX Timeout!\n");
}


TxPtr = (++TxPtr >= NTXD) ? 0:TxPtr;	

}