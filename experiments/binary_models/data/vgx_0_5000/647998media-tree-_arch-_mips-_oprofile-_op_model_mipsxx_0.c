static void mipsxx_reg_setup(struct op_counter_config *ctr)
{
unsigned int counters = op_model_mipsxx_ops.num_counters;
int i;


for (i = 0; i < counters; i++) {
reg.control[i] = 0;
reg.counter[i] = 0;

if (!ctr[i].enabled)
continue;

reg.control[i] = M_PERFCTL_EVENT(ctr[i].event) |
MIPS_PERFCTRL_IE;
if (ctr[i].kernel)
reg.control[i] |= MIPS_PERFCTRL_K;
if (ctr[i].user)
reg.control[i] |= MIPS_PERFCTRL_U;
if (ctr[i].exl)
reg.control[i] |= MIPS_PERFCTRL_EXL;
if (boot_cpu_type() == CPU_XLR)
reg.control[i] |= XLR_PERFCTRL_ALLTHREADS;
reg.counter[i] = 0x80000000 - ctr[i].count;
}
}