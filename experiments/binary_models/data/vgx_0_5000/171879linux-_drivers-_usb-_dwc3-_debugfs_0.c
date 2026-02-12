static int dwc3_lsp_show(struct seq_file *s, void *unused)
{
struct dwc3		*dwc = s->private;
unsigned int		current_mode;
unsigned long		flags;
u32			reg;

spin_lock_irqsave(&dwc->lock, flags);
reg = dwc3_readl(dwc->regs, DWC3_GSTS);
current_mode = DWC3_GSTS_CURMOD(reg);

switch (current_mode) {
case DWC3_GSTS_CURMOD_HOST:
dwc3_host_lsp(s);
break;
case DWC3_GSTS_CURMOD_DEVICE:
dwc3_gadget_lsp(s);
break;
default:
seq_puts(s, "Mode is unknown, no LSP register printed\n");
break;
}
spin_unlock_irqrestore(&dwc->lock, flags);

return 0;
}