static void read_block(long ioaddr, int length, unsigned char *p, int data_mode)
{
if (data_mode <= 3) { 
outb(Ctrl_LNibRead, ioaddr + PAR_CONTROL);
outb(length == 8  ?  RdAddr | HNib | MAR  :  RdAddr | MAR,
ioaddr + PAR_DATA);
if (data_mode <= 1) { 
do { *p++ = read_byte_mode0(ioaddr); } while (--length > 0);
} else { 
do { *p++ = read_byte_mode2(ioaddr); } while (--length > 0);
}
} else if (data_mode <= 5) {
do { *p++ = read_byte_mode4(ioaddr); } while (--length > 0);
} else {
do { *p++ = read_byte_mode6(ioaddr); } while (--length > 0);
}

outb(EOC+HNib+MAR, ioaddr + PAR_DATA);
outb(Ctrl_SelData, ioaddr + PAR_CONTROL);
}