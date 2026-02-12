static void isac_empty_fifo(struct isac *isac, int count)
{


u_char *ptr;

DBG(DBG_IRQ, "count %d", count);

if ((isac->rcvidx + count) >= MAX_DFRAME_LEN_L1) {
DBG(DBG_WARN, "overrun %d", isac->rcvidx + count);
isac->write_isac(isac, ISAC_CMDR, ISAC_CMDR_RMC);
isac->rcvidx = 0;
return;
}
ptr = isac->rcvbuf + isac->rcvidx;
isac->rcvidx += count;
isac->read_isac_fifo(isac, ptr, count);
isac->write_isac(isac, ISAC_CMDR, ISAC_CMDR_RMC);
DBG_PACKET(DBG_RFIFO, ptr, count);
}