void lio_enable_irq(struct octeon_droq *droq, struct octeon_instr_queue *iq)
{
u64 instr_cnt;
u32 pkts_pend;
struct octeon_device *oct = NULL;


if (droq) {
pkts_pend = (u32)atomic_read(&droq->pkts_pending);
writel(droq->pkt_count - pkts_pend, droq->pkts_sent_reg);
droq->pkt_count = pkts_pend;
oct = droq->oct_dev;
}
if (iq) {
spin_lock_bh(&iq->lock);
writel(iq->pkts_processed, iq->inst_cnt_reg);
iq->pkt_in_done -= iq->pkts_processed;
iq->pkts_processed = 0;

spin_unlock_bh(&iq->lock);
oct = iq->oct_dev;
}

if (oct && (OCTEON_CN23XX_PF(oct) || OCTEON_CN23XX_VF(oct))) {
if (droq)
writeq(CN23XX_INTR_RESEND, droq->pkts_sent_reg);

else if (iq) {
instr_cnt =  readq(iq->inst_cnt_reg);
writeq(((instr_cnt & 0xFFFFFFFF00000000ULL) |
CN23XX_INTR_RESEND),
iq->inst_cnt_reg);
}
}
}