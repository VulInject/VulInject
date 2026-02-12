void ff_mdct_fixed_calcw_neon(FFTContext *s, FFTDouble *o, const FFTSample *i);

av_cold void ff_mdct_fixed_init_arm(FFTContext *s)
{
int cpu_flags = av_get_cpu_flags();

if (have_neon(cpu_flags)) {
if (!s->inverse && s->nbits >= 3) {
s->mdct_permutation = FF_MDCT_PERM_INTERLEAVE;
s->mdct_calc        = ff_mdct_fixed_calc_neon;
s->mdct_calcw       = ff_mdct_fixed_calcw_neon;
}
}
}