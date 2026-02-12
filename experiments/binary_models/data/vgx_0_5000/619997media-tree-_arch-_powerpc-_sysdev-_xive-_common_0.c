void xive_do_source_eoi(u32 hw_irq, struct xive_irq_data *xd)
{

if (xd->flags & XIVE_IRQ_FLAG_STORE_EOI)
out_be64(xd->eoi_mmio, 0);
else if (hw_irq && xd->flags & XIVE_IRQ_FLAG_EOI_FW) {

if (WARN_ON_ONCE(!xive_ops->eoi))
return;
xive_ops->eoi(hw_irq);
} else {
u8 eoi_val;


if (xd->flags & XIVE_IRQ_FLAG_LSI)
in_be64(xd->eoi_mmio);
else {
eoi_val = xive_poke_esb(xd, XIVE_ESB_SET_PQ_00);
DBG_VERBOSE("eoi_val=%x\n", offset, eoi_val);


if ((eoi_val & XIVE_ESB_VAL_Q) && xd->trig_mmio)
out_be64(xd->trig_mmio, 0);
}
}
}