static int spapr_xive_match_nvt(XivePresenter *xptr, uint8_t format,
uint8_t nvt_blk, uint32_t nvt_idx,
bool cam_ignore, uint8_t priority,
uint32_t logic_serv, XiveTCTXMatch *match)
{
CPUState *cs;
int count = 0;

CPU_FOREACH(cs) {
PowerPCCPU *cpu = POWERPC_CPU(cs);
XiveTCTX *tctx = spapr_cpu_state(cpu)->tctx;
int ring;


if (!tctx) {
continue;
}


ring = xive_presenter_tctx_match(xptr, tctx, format, nvt_blk, nvt_idx,
cam_ignore, logic_serv);

if (ring != -1) {
if (match->tctx) {
qemu_log_mask(LOG_GUEST_ERROR, "XIVE: already found a thread "
"context NVT %x/%x\n", nvt_blk, nvt_idx);
return -1;
}

match->ring = ring;
match->tctx = tctx;
count++;
}
}

return count;
}