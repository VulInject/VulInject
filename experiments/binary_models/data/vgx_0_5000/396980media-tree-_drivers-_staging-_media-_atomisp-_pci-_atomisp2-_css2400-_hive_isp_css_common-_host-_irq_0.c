enum hrt_isp_css_irq_status virq_get_channel_signals(
virq_info_t					*irq_info)
{
enum hrt_isp_css_irq_status irq_status = hrt_isp_css_irq_status_error;
irq_ID_t ID;

assert(irq_info != NULL);

for (ID = (irq_ID_t)0 ; ID < N_IRQ_ID; ID++) {
if (any_irq_channel_enabled(ID)) {
hrt_data	irq_data = irq_reg_load(ID,
_HRT_IRQ_CONTROLLER_STATUS_REG_IDX);

if (irq_data != 0) {

irq_status = hrt_isp_css_irq_status_success;
}

irq_info->irq_status_reg[ID] |= irq_data;

irq_reg_store(ID,
_HRT_IRQ_CONTROLLER_CLEAR_REG_IDX, irq_data);

irq_wait_for_write_complete(ID);
}
}

return irq_status;
}