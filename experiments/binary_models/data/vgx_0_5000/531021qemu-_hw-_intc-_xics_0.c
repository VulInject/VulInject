void icp_set_cppr(ICPState *icp, uint8_t cppr)
{
uint8_t old_cppr;
uint32_t old_xisr;

old_cppr = CPPR(icp);
icp->xirr = (icp->xirr & ~CPPR_MASK) | (cppr << 24);

if (cppr < old_cppr) {
if (XISR(icp) && (cppr <= icp->pending_priority)) {
old_xisr = XISR(icp);
icp->xirr &= ~XISR_MASK; 
icp->pending_priority = 0xff;
qemu_irq_lower(icp->output);
if (icp->xirr_owner) {
ics_reject(icp->xirr_owner, old_xisr);
icp->xirr_owner = NULL;
}
}
} else {
if (!XISR(icp)) {
icp_resend(icp);
}
}
}