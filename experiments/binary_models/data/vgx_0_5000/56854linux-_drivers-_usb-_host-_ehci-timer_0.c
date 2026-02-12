static void ehci_poll_ASS(struct ehci_hcd *ehci)
{
unsigned	actual, want;


if (ehci->rh_state != EHCI_RH_RUNNING)
return;

want = (ehci->command & CMD_ASE) ? STS_ASS : 0;
actual = ehci_readl(ehci, &ehci->regs->status) & STS_ASS;

if (want != actual) {


if (ehci->ASS_poll_count++ < 2) {
ehci_enable_event(ehci, EHCI_HRTIMER_POLL_ASS, true);
return;
}
ehci_dbg(ehci, "Waited too long for the async schedule status (%x/%x), giving up\n",
want, actual);
}
ehci->ASS_poll_count = 0;


if (want == 0) {	
if (ehci->async_count > 0)
ehci_set_command_bit(ehci, CMD_ASE);

} else {		
if (ehci->async_count == 0) {


ehci_enable_event(ehci, EHCI_HRTIMER_DISABLE_ASYNC,
true);
}
}
}