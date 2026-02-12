void i40evf_set_hena(struct i40evf_adapter *adapter)
{
struct i40e_virtchnl_rss_hena vrh;

if (adapter->current_op != I40E_VIRTCHNL_OP_UNKNOWN) {

dev_err(&adapter->pdev->dev, "Cannot set RSS hash enable, command %d pending\n",
adapter->current_op);
return;
}
vrh.hena = adapter->hena;
adapter->current_op = I40E_VIRTCHNL_OP_SET_RSS_HENA;
adapter->aq_required &= ~I40EVF_FLAG_AQ_SET_HENA;
i40evf_send_pf_msg(adapter, I40E_VIRTCHNL_OP_SET_RSS_HENA,
(u8 *)&vrh, sizeof(vrh));
}