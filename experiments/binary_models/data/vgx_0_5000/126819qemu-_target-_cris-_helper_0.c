hwaddr cris_cpu_get_phys_page_debug(CPUState *cs, vaddr addr)
{
CRISCPU *cpu = CRIS_CPU(cs);
uint32_t phy = addr;
struct cris_mmu_result res;
int miss;

miss = cris_mmu_translate(&res, &cpu->env, addr, MMU_DATA_LOAD, 0, 1);

if (miss) {
miss = cris_mmu_translate(&res, &cpu->env, addr, MMU_INST_FETCH, 0, 1);
}

if (!miss) {
phy = res.phy;
}
D(fprintf(stderr, "%s %x -> %x\n", __func__, addr, phy));
return phy;
}