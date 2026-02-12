static rx_handler_result_t iwl_mei_rx_handler(struct sk_buff **pskb)
{
struct sk_buff *skb = *pskb;
struct iwl_mei *mei =
rcu_dereference(skb->dev->rx_handler_data);
struct iwl_mei_filters *filters = rcu_dereference(mei->filters);
bool rx_for_csme = false;
rx_handler_result_t res;


if (!iwl_mei_is_connected()) {
dev_err(&mei->cldev->dev,
"Got an Rx packet, but we're not connected to SAP?\n");
return RX_HANDLER_PASS;
}

if (filters)
res = iwl_mei_rx_filter(skb, &filters->filters, &rx_for_csme);
else
res = RX_HANDLER_PASS;


if (rx_for_csme)
schedule_work(&mei->send_csa_msg_wk);

if (res != RX_HANDLER_PASS) {
trace_iwlmei_sap_data(skb, IWL_SAP_RX_DATA_DROPPED_FROM_AIR);
dev_kfree_skb(skb);
}

return res;
}