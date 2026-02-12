void mem_map_fill(void)
{
int banks = VERSAL_MEM_MAP_USED;

versal_mem_map[banks].virt = 0xffe00000UL;
versal_mem_map[banks].phys = 0xffe00000UL;
versal_mem_map[banks].size = 0x00200000UL;
versal_mem_map[banks].attrs = PTE_BLOCK_MEMTYPE(MT_NORMAL) |
PTE_BLOCK_INNER_SHARE;
banks = banks + 1;

for (int i = 0; i < CONFIG_NR_DRAM_BANKS; i++) {

if (!gd->bd->bi_dram[i].size)
break;

if (gd->bd->bi_dram[i].start < 0x80000000UL ||
gd->bd->bi_dram[i].start > 0x100000000UL) {
printf("Ignore caches over %llx/%llx\n",
gd->bd->bi_dram[i].start,
gd->bd->bi_dram[i].size);
continue;
}
versal_mem_map[banks].virt = gd->bd->bi_dram[i].start;
versal_mem_map[banks].phys = gd->bd->bi_dram[i].start;
versal_mem_map[banks].size = gd->bd->bi_dram[i].size;
versal_mem_map[banks].attrs = PTE_BLOCK_MEMTYPE(MT_NORMAL) |
PTE_BLOCK_INNER_SHARE;
banks = banks + 1;
}
}