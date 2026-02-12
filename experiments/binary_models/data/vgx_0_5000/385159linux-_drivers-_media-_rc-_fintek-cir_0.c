static irqreturn_t fintek_cir_isr(int irq, void *data)
{
struct fintek_dev *fintek = data;
u8 status, rx_irqs;

fit_dbg_verbose("%s firing", __func__);

fintek_config_mode_enable(fintek);
fintek_select_logical_dev(fintek, fintek->logical_dev_cir);
fintek_config_mode_disable(fintek);


status = fintek_cir_reg_read(fintek, CIR_STATUS);
if (!(status & CIR_STATUS_IRQ_MASK) || status == 0xff) {
fit_dbg_verbose("%s exiting, IRSTS 0x%02x", __func__, status);
fintek_cir_reg_write(fintek, CIR_STATUS_IRQ_MASK, CIR_STATUS);
return IRQ_RETVAL(IRQ_NONE);
}

if (debug)
fintek_cir_log_irqs(status);

rx_irqs = status & (CIR_STATUS_RX_RECEIVE | CIR_STATUS_RX_TIMEOUT);
if (rx_irqs)
fintek_get_rx_ir_data(fintek, rx_irqs);


fintek_cir_reg_write(fintek, status, CIR_STATUS);

fit_dbg_verbose("%s done", __func__);
return IRQ_RETVAL(IRQ_HANDLED);
}