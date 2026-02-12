static void periodic_unlink (struct ohci_hcd *ohci, struct ed *ed)
{
int	i;

for (i = ed->branch; i < NUM_INTS; i += ed->interval) {
struct ed	*temp;
struct ed	**prev = &ohci->periodic [i];
__hc32		*prev_p = &ohci->hcca->int_table [i];

while (*prev && (temp = *prev) != ed) {
prev_p = &temp->hwNextED;
prev = &temp->ed_next;
}
if (*prev) {
*prev_p = ed->hwNextED;
*prev = ed->ed_next;
}
ohci->load [i] -= ed->load;
}
ohci_to_hcd(ohci)->self.bandwidth_allocated -= ed->load / ed->interval;

ohci_dbg(ohci, "unlink %sed %p branch %d [%dus.], interval %d\n",
(ed->hwINFO & cpu_to_hc32 (ohci, ED_ISO)) ? "iso " : "",
ed, ed->branch, ed->load, ed->interval);
}