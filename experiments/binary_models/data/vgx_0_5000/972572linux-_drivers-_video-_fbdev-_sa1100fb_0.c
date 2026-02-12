static int
sa1100fb_freq_transition(struct notifier_block *nb, unsigned long val,
void *data)
{
struct sa1100fb_info *fbi = TO_INF(nb, freq_transition);
u_int pcd;

switch (val) {
case CPUFREQ_PRECHANGE:
set_ctrlr_state(fbi, C_DISABLE_CLKCHANGE);
break;

case CPUFREQ_POSTCHANGE:
pcd = get_pcd(fbi, fbi->fb.var.pixclock);
fbi->reg_lccr3 = (fbi->reg_lccr3 & ~0xff) | LCCR3_PixClkDiv(pcd);
set_ctrlr_state(fbi, C_ENABLE_CLKCHANGE);
break;
}
return 0;
}