static void __init ip30_smp_setup(void)
{
int i;
int ncpu = 0;
struct mpconf *mpc;

init_cpu_possible(cpumask_of(0));


for (i = 0; i < MP_NCPU; i++) {
mpc = (struct mpconf *)MPCONF(i);
if (mpc->magic == MPCONF_MAGIC) {
set_cpu_possible(i, true);
__cpu_number_map[i] = ++ncpu;
__cpu_logical_map[ncpu] = i;
pr_info("IP30: Slot: %d, PrID: %.8x, PhyID: %d, VirtID: %d\n",
i, mpc->prid, mpc->physid, mpc->virtid);
}
}
pr_info("IP30: Detected %d CPU(s) present.\n", ncpu);


change_c0_config(CONF_CM_CMASK, CONF_CM_CACHABLE_COW);
}