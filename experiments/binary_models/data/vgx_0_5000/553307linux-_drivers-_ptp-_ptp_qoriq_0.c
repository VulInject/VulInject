irqreturn_t ptp_qoriq_isr(int irq, void *priv)
{
struct ptp_qoriq *ptp_qoriq = priv;
struct ptp_qoriq_registers *regs = &ptp_qoriq->regs;
struct ptp_clock_event event;
u32 ack = 0, mask, val, irqs;

spin_lock(&ptp_qoriq->lock);

val = ptp_qoriq->read(&regs->ctrl_regs->tmr_tevent);
mask = ptp_qoriq->read(&regs->ctrl_regs->tmr_temask);

spin_unlock(&ptp_qoriq->lock);

irqs = val & mask;

if (irqs & ETS1) {
ack |= ETS1;
extts_clean_up(ptp_qoriq, 0, true);
}

if (irqs & ETS2) {
ack |= ETS2;
extts_clean_up(ptp_qoriq, 1, true);
}

if (irqs & PP1) {
ack |= PP1;
event.type = PTP_CLOCK_PPS;
ptp_clock_event(ptp_qoriq->clock, &event);
}

if (ack) {
ptp_qoriq->write(&regs->ctrl_regs->tmr_tevent, ack);
return IRQ_HANDLED;
} else
return IRQ_NONE;
}