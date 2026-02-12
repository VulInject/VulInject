static irqreturn_t dwc3_otg_irq(int irq, void *_dwc)
{
u32 reg;
struct dwc3 *dwc = _dwc;
irqreturn_t ret = IRQ_NONE;

reg = dwc3_readl(dwc->regs, DWC3_OEVT);
if (reg) {

if (!(reg & DWC3_OTG_ALL_EVENTS)) {
dwc3_writel(dwc->regs, DWC3_OEVT, reg);
return IRQ_NONE;
}

if (dwc->current_otg_role == DWC3_OTG_ROLE_HOST &&
!(reg & DWC3_OEVT_DEVICEMODE))
dwc->otg_restart_host = true;
dwc3_writel(dwc->regs, DWC3_OEVT, reg);
ret = IRQ_WAKE_THREAD;
}

return ret;
}