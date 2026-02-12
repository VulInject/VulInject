static void
async_msint(struct asycom *asy)
{
struct asyncline *async = (struct asyncline *)asy->asy_priv;
int msr;

msr = INB(MSR);	
asy->asy_cached_msr = msr;
if (asydebug & ASY_DEBUG_STATE) {
printf("   transition: %3s %3s %3s %3s\n"
"current state: %3s %3s %3s %3s\n",
(msr & DCTS) ? "CTS" : "   ",
(msr & DDSR) ? "DSR" : "   ",
(msr & DRI) ?  "RI " : "   ",
(msr & DDCD) ? "DCD" : "   ",
(msr & CTS) ?  "CTS" : "   ",
(msr & DSR) ?  "DSR" : "   ",
(msr & RI) ?   "RI " : "   ",
(msr & DCD) ?  "DCD" : "   ");
}
if (async->async_ttycommon.t_cflag & CRTSCTS && !(msr & CTS)) {
if (asydebug & ASY_DEBUG_HFLOW)
printf("asy%d: hflow start\n",
UNIT(async->async_dev));
async->async_flags |= ASYNC_HW_OUT_FLW;
}
if (asy->asy_hwtype == ASY82510)
OUTB(MSR, (msr & 0xF0));


if (asy->asy_flags & ASY_PPS)
asy_ppsevent(asy, msr);

async->async_ext++;
ASYSETSOFT(asy);
}