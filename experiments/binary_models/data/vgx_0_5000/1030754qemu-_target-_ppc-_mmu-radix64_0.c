static void ppc_radix64_set_rc(PowerPCCPU *cpu, MMUAccessType access_type,
uint64_t pte, hwaddr pte_addr, int *prot)
{
CPUState *cs = CPU(cpu);
uint64_t npte;

npte = pte | R_PTE_R; 

if (access_type == MMU_DATA_STORE) { 
npte |= R_PTE_C; 
} else {

*prot &= ~PAGE_WRITE;
}

if (pte ^ npte) { 
stq_phys(cs->as, pte_addr, npte);
}
}