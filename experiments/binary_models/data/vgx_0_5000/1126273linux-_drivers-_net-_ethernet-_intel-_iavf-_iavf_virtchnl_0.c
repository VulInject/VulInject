void iavf_set_rss_key(struct iavf_adapter *adapter)
{
struct virtchnl_rss_key *vrk;
int len;

if (adapter->current_op != VIRTCHNL_OP_UNKNOWN) {

dev_err(&adapter->pdev->dev, "Cannot set RSS key, command %d pending\n",
adapter->current_op);
return;
}
len = sizeof(struct virtchnl_rss_key) +
(adapter->rss_key_size * sizeof(u8)) - 1;
vrk = kzalloc(len, GFP_KERNEL);
if (!vrk)
return;
vrk->vsi_id = adapter->vsi.id;
vrk->key_len = adapter->rss_key_size;
memcpy(vrk->key, adapter->rss_key, adapter->rss_key_size);

adapter->current_op = VIRTCHNL_OP_CONFIG_RSS_KEY;
adapter->aq_required &= ~IAVF_FLAG_AQ_SET_RSS_KEY;
iavf_send_pf_msg(adapter, VIRTCHNL_OP_CONFIG_RSS_KEY, (u8 *)vrk, len);
kfree(vrk);
}