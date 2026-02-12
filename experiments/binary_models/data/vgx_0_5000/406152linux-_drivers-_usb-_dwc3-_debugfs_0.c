static void dwc3_host_lsp(struct seq_file *s)
{
struct dwc3		*dwc = s->private;
bool			dbc_enabled;
u32			sel;
u32			reg;
u32			val;

dbc_enabled = !!(dwc->hwparams.hwparams1 & DWC3_GHWPARAMS1_ENDBC);

sel = dwc->dbg_lsp_select;
if (sel == DWC3_LSP_MUX_UNSELECTED) {
seq_puts(s, "Write LSP selection to print for host\n");
return;
}

reg = DWC3_GDBGLSPMUX_HOSTSELECT(sel);

dwc3_writel(dwc->regs, DWC3_GDBGLSPMUX, reg);
val = dwc3_readl(dwc->regs, DWC3_GDBGLSP);
seq_printf(s, "GDBGLSP[%d] = 0x%08x\n", sel, val);

if (dbc_enabled && sel < 256) {
reg |= DWC3_GDBGLSPMUX_ENDBC;
dwc3_writel(dwc->regs, DWC3_GDBGLSPMUX, reg);
val = dwc3_readl(dwc->regs, DWC3_GDBGLSP);
seq_printf(s, "GDBGLSP_DBC[%d] = 0x%08x\n", sel, val);
}
}