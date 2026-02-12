static inline void sni_pcimt_detect(void)
{
char boardtype[80];
unsigned char csmsr;
char *p = boardtype;
unsigned int asic;

csmsr = *(volatile unsigned char *)PCIMT_CSMSR;

p += sprintf(p, "%s PCI", (csmsr & 0x80) ? "RM200" : "RM300");
if ((csmsr & 0x80) == 0)
p += sprintf(p, ", board revision %s",
(csmsr & 0x20) ? "D" : "C");
asic = csmsr & 0x80;
asic = (csmsr & 0x08) ? asic : !asic;
p += sprintf(p, ", ASIC PCI Rev %s", asic ? "1.0" : "1.1");
printk("%s.\n", boardtype);
}

{						\
.iobase		= _base,		\
.irq		= _irq,			\
.uartclk	= 1843200,		\
.iotype		= UPIO_PORT,		\
.flags		= UPF_BOOT_AUTOCONF,	\
}

static struct plat_serial8250_port pcimt_data[] = {
PORT(0x3f8, 4),
PORT(0x2f8, 3),
{ },
};