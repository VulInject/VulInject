static int __init feat_try_enable_unknown(struct dt_cpu_feature *f)
{
if (f->hv_support == HV_SUPPORT_NONE) {
} else if (f->hv_support & HV_SUPPORT_HFSCR) {
u64 hfscr = mfspr(SPRN_HFSCR);
hfscr |= 1UL << f->hfscr_bit_nr;
mtspr(SPRN_HFSCR, hfscr);
} else {

return 0;
}

if (f->os_support == OS_SUPPORT_NONE) {
} else if (f->os_support & OS_SUPPORT_FSCR) {
u64 fscr = mfspr(SPRN_FSCR);
fscr |= 1UL << f->fscr_bit_nr;
mtspr(SPRN_FSCR, fscr);
} else {

return 0;
}

if ((f->usable_privilege & USABLE_PR) && (f->hwcap_bit_nr != -1)) {
uint32_t word = f->hwcap_bit_nr / 32;
uint32_t bit = f->hwcap_bit_nr % 32;

if (word == 0)
cur_cpu_spec->cpu_user_features |= 1U << bit;
else if (word == 1)
cur_cpu_spec->cpu_user_features2 |= 1U << bit;
else
pr_err("%s could not advertise to user (no hwcap bits)\n", f->name);
}

return 1;
}