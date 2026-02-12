static void ppc440_pcix_update_pom(PPC440PCIXState *s, int idx)
{
MemoryRegion *mem = &s->pom[idx].mr;
MemoryRegion *address_space_mem = get_system_memory();
char *name;
uint32_t size;


ppc440_pcix_clear_region(address_space_mem, mem);

if (!(s->pom[idx].sa & 1)) {

return;
}

name = g_strdup_printf("PCI Outbound Window %d", idx);
size = ~(s->pom[idx].sa & 0xfffffffe) + 1;
if (!size) {
size = 0xffffffff;
}
memory_region_init_alias(mem, OBJECT(s), name, &s->busmem,
s->pom[idx].pcia, size);
memory_region_add_subregion(address_space_mem, s->pom[idx].la, mem);
g_free(name);

trace_ppc440_pcix_update_pom(idx, size, s->pom[idx].la, s->pom[idx].pcia);
}