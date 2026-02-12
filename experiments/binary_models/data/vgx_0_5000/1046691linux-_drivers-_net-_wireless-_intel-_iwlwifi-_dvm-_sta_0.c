void iwl_clear_ucode_stations(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
{
int i;
bool cleared = false;

IWL_DEBUG_INFO(priv, "Clearing ucode stations in driver\n");

spin_lock_bh(&priv->sta_lock);
for (i = 0; i < IWLAGN_STATION_COUNT; i++) {
if (ctx && ctx->ctxid != priv->stations[i].ctxid)
continue;

if (priv->stations[i].used & IWL_STA_UCODE_ACTIVE) {
IWL_DEBUG_INFO(priv,
"Clearing ucode active for station %d\n", i);
priv->stations[i].used &= ~IWL_STA_UCODE_ACTIVE;
cleared = true;
}
}
spin_unlock_bh(&priv->sta_lock);

if (!cleared)
IWL_DEBUG_INFO(priv,
"No active stations found to be cleared\n");
}