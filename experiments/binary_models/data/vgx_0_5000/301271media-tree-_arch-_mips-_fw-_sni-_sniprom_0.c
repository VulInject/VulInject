static void __init sni_mem_init(void)
{
int i, memsize;
struct membank {
u32		size;
u32		base;
u32		size2;
u32		pad1;
u32		pad2;
} memconf[8];
int brd_type = *(unsigned char *)SNI_IDPROM_BRDTYPE;



memsize = *((unsigned char *) SNI_IDPROM_MEMSIZE) * 16;

pr_debug("IDProm memsize: %u MByte\n", memsize);


_prom_get_memconf(&memconf);

pr_debug("prom_get_mem_conf memory configuration:\n");
for (i = 0; i < 8 && memconf[i].size; i++) {
if (brd_type == SNI_BRD_PCI_TOWER ||
brd_type == SNI_BRD_PCI_TOWER_CPLUS) {
if (memconf[i].base >= 0x20000000 &&
memconf[i].base <  0x30000000)
memconf[i].base -= 0x20000000;
}
pr_debug("Bank%d: %08x @ %08x\n", i,
memconf[i].size, memconf[i].base);
add_memory_region(memconf[i].base, memconf[i].size,
BOOT_MEM_RAM);
}
}