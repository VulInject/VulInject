static irqreturn_t isp1760_irq(int irq, void *__hci)
{
struct usb_hcd *hcd = __hci;
struct isp1760_hcd *priv = hcd_to_priv(hcd);
irqreturn_t irqret = IRQ_NONE;
u32 int_reg;
u32 imask;

imask = isp1760_hcd_read(hcd, HC_INTERRUPT);
if (unlikely(!imask))
return irqret;

int_reg = priv->is_isp1763 ? ISP1763_HC_INTERRUPT :
ISP176x_HC_INTERRUPT;
isp1760_reg_write(priv->regs, int_reg, imask);

priv->int_done_map |= isp1760_hcd_read(hcd, HC_INT_PTD_DONEMAP);
priv->atl_done_map |= isp1760_hcd_read(hcd, HC_ATL_PTD_DONEMAP);

handle_done_ptds(hcd);

irqret = IRQ_HANDLED;

return irqret;
}