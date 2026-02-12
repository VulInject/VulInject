void tsc_verify_tsc_adjust(bool resume)
{
struct tsc_adjust *adj = this_cpu_ptr(&tsc_adjust);
s64 curval;

if (!boot_cpu_has(X86_FEATURE_TSC_ADJUST))
return;


if (!resume && time_before(jiffies, adj->nextcheck))
return;

adj->nextcheck = jiffies + HZ;

rdmsrl(MSR_IA32_TSC_ADJUST, curval);
if (adj->adjusted == curval)
return;


wrmsrl(MSR_IA32_TSC_ADJUST, adj->adjusted);

if (!adj->warned || resume) {
pr_warn(FW_BUG "TSC ADJUST differs: CPU%u %lld --> %lld. Restoring\n",
smp_processor_id(), adj->adjusted, curval);
adj->warned = true;
}
}