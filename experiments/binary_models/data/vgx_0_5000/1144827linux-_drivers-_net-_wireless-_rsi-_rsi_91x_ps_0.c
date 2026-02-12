void rsi_disable_ps(struct rsi_hw *adapter, struct ieee80211_vif *vif)
{
if (adapter->ps_state != PS_ENABLED) {
rsi_dbg(ERR_ZONE,
"%s: Cannot accept disable PS in %s state\n",
__func__, str_psstate(adapter->ps_state));
return;
}

if (rsi_send_ps_request(adapter, false, vif)) {
rsi_dbg(ERR_ZONE,
"%s: Failed to send PS request to device\n",
__func__);
return;
}

rsi_modify_ps_state(adapter, PS_DISABLE_REQ_SENT);
}