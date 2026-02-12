static void iwlagn_rx_spectrum_measure_notif(struct iwl_priv *priv,
struct iwl_rx_cmd_buffer *rxb)
{
struct iwl_rx_packet *pkt = rxb_addr(rxb);
struct iwl_spectrum_notification *report = (void *)pkt->data;

if (!report->state) {
IWL_DEBUG_11H(priv,
"Spectrum Measure Notification: Start\n");
return;
}

memcpy(&priv->measure_report, report, sizeof(*report));
priv->measurement_status |= MEASUREMENT_READY;
}