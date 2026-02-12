static int rapl_check_unit_core(struct rapl_package *rp, int cpu)
{
u64 msr_val;
u32 value;

if (rdmsrl_safe_on_cpu(cpu, MSR_RAPL_POWER_UNIT, &msr_val)) {
pr_err("Failed to read power unit MSR 0x%x on CPU %d, exit.\n",
MSR_RAPL_POWER_UNIT, cpu);
return -ENODEV;
}

value = (msr_val & ENERGY_UNIT_MASK) >> ENERGY_UNIT_OFFSET;
rp->energy_unit = ENERGY_UNIT_SCALE * 1000000 / (1 << value);

value = (msr_val & POWER_UNIT_MASK) >> POWER_UNIT_OFFSET;
rp->power_unit = 1000000 / (1 << value);

value = (msr_val & TIME_UNIT_MASK) >> TIME_UNIT_OFFSET;
rp->time_unit = 1000000 / (1 << value);

pr_debug("Core CPU package %d energy=%dpJ, time=%dus, power=%duW\n",
rp->id, rp->energy_unit, rp->time_unit, rp->power_unit);

return 0;
}