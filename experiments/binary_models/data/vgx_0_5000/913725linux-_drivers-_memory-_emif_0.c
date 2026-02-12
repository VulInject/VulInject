static int __init_or_module setup_interrupts(struct emif_data *emif, u32 irq)
{
u32		interrupts, type;
void __iomem	*base = emif->base;

type = emif->plat_data->device_info->type;

clear_all_interrupts(emif);


interrupts = EN_ERR_SYS_MASK;
if (type == DDR_TYPE_LPDDR2_S2 || type == DDR_TYPE_LPDDR2_S4)
interrupts |= EN_TA_SYS_MASK;
writel(interrupts, base + EMIF_SYSTEM_OCP_INTERRUPT_ENABLE_SET);


if (emif->plat_data->hw_caps & EMIF_HW_CAPS_LL_INTERFACE) {

interrupts = EN_ERR_LL_MASK;
writel(interrupts, base + EMIF_LL_OCP_INTERRUPT_ENABLE_SET);
}


return devm_request_threaded_irq(emif->dev, irq,
emif_interrupt_handler,
emif_threaded_isr,
0, dev_name(emif->dev),
emif);

}