static void tx_start(struct slgt_info *info)
{
if (!info->tx_enabled) {
wr_reg16(info, TCR,
(unsigned short)((rd_reg16(info, TCR) | BIT1) & ~BIT2));
info->tx_enabled = true;
}

if (desc_count(info->tbufs[info->tbuf_start])) {
info->drop_rts_on_tx_done = false;

if (info->params.mode != MGSL_MODE_ASYNC) {
if (info->params.flags & HDLC_FLAG_AUTO_RTS) {
get_signals(info);
if (!(info->signals & SerialSignal_RTS)) {
info->signals |= SerialSignal_RTS;
set_signals(info);
info->drop_rts_on_tx_done = true;
}
}

slgt_irq_off(info, IRQ_TXDATA);
slgt_irq_on(info, IRQ_TXUNDER + IRQ_TXIDLE);

wr_reg16(info, SSR, (unsigned short)(IRQ_TXIDLE + IRQ_TXUNDER));
} else {
slgt_irq_off(info, IRQ_TXDATA);
slgt_irq_on(info, IRQ_TXIDLE);

wr_reg16(info, SSR, IRQ_TXIDLE);
}

wr_reg32(info, TDDAR, info->tbufs[info->tbuf_start].pdesc);
wr_reg32(info, TDCSR, BIT2 + BIT0);
info->tx_active = true;
}
}