static int iwl_setup_interface(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
{
struct ieee80211_vif *vif = ctx->vif;
int err, ac;

lockdep_assert_held(&priv->mutex);


priv->iw_mode = vif->type;

ctx->is_active = true;

err = iwl_set_mode(priv, ctx);
if (err) {
if (!ctx->always_active)
ctx->is_active = false;
return err;
}

if (priv->lib->bt_params && priv->lib->bt_params->advanced_bt_coexist &&
vif->type == NL80211_IFTYPE_ADHOC) {

priv->bt_traffic_load = IWL_BT_COEX_TRAFFIC_LOAD_HIGH;
}


for (ac = 0; ac < IEEE80211_NUM_ACS; ac++)
vif->hw_queue[ac] = ctx->ac_to_queue[ac];

if (vif->type == NL80211_IFTYPE_AP)
vif->cab_queue = ctx->mcast_queue;
else
vif->cab_queue = IEEE80211_INVAL_HW_QUEUE;

return 0;
}