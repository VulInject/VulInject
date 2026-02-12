int bnxt_get_rx_ts_p5(struct bnxt *bp, u64 *ts, u32 pkt_ts)
{
struct bnxt_ptp_cfg *ptp = bp->ptp_cfg;
u64 time;

if (!ptp)
return -ENODEV;

BNXT_READ_TIME64(ptp, time, ptp->old_time);
*ts = (time & BNXT_HI_TIMER_MASK) | pkt_ts;
if (pkt_ts < (time & BNXT_LO_TIMER_MASK))
*ts += BNXT_LO_TIMER_MASK + 1;

return 0;
}