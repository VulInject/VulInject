static void
set_freq(
double	freq		
)
{
const char *	loop_desc;
int ntp_adj_ret;

(void)ntp_adj_ret; 
drift_comp = freq;
loop_desc = "ntpd";
if (pll_control) {
ZERO(ntv);
ntv.modes = MOD_FREQUENCY;
if (kern_enable) {
loop_desc = "kernel";
ntv.freq = DTOFREQ(drift_comp);
}
if ((ntp_adj_ret = ntp_adjtime(&ntv)) != 0) {
ntp_adjtime_error_handler(__func__, &ntv, ntp_adj_ret, errno, 0, 0, __LINE__ - 1);
}
}
mprintf_event(EVNT_FSET, NULL, "%s %.3f PPM", loop_desc,
drift_comp * 1e6);
}