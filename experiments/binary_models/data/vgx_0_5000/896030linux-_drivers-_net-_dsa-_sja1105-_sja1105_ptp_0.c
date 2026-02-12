static void sja1105_extts_poll(struct sja1105_private *priv)
{
struct sja1105_ptp_data *ptp_data = &priv->ptp_data;
const struct sja1105_regs *regs = priv->info->regs;
struct ptp_clock_event event;
u64 ptpsyncts = 0;
int rc;

rc = sja1105_xfer_u64(priv, SPI_READ, regs->ptpsyncts, &ptpsyncts,
NULL);
if (rc < 0)
dev_err_ratelimited(priv->ds->dev,
"Failed to read PTPSYNCTS: %d\n", rc);

if (ptpsyncts && ptp_data->ptpsyncts != ptpsyncts) {
event.index = 0;
event.type = PTP_CLOCK_EXTTS;
event.timestamp = ns_to_ktime(sja1105_ticks_to_ns(ptpsyncts));
ptp_clock_event(ptp_data->clock, &event);

ptp_data->ptpsyncts = ptpsyncts;
}
}