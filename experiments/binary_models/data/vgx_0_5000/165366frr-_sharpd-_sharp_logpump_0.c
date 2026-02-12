void sharp_logpump_run(struct vty *vty, unsigned duration, unsigned frequency,
unsigned burst)
{
if (lpt != NULL) {
vty_out(vty, "logpump already running\n");
return;
}

vty_out(vty, "starting logpump...\n");
vty_out(vty, "keep this VTY open and press Enter to see results\n");

lp_vty = vty;
lp_duration = duration * 1000000000UL;
lp_frequency = frequency;
lp_burst = burst;
lp_expect = duration * frequency * burst;
lp_ctr = 0;

lpt = frr_pthread_new(&attr, "logpump", "logpump");
frr_pthread_run(lpt, NULL);
}