static void iwl_send_bt_config(struct iwl_priv *priv)
{
struct iwl_bt_cmd bt_cmd = {
.lead_time = BT_LEAD_TIME_DEF,
.max_kill = BT_MAX_KILL_DEF,
.kill_ack_mask = 0,
.kill_cts_mask = 0,
};

if (!iwlwifi_mod_params.bt_coex_active)
bt_cmd.flags = BT_COEX_DISABLE;
else
bt_cmd.flags = BT_COEX_ENABLE;

priv->bt_enable_flag = bt_cmd.flags;
IWL_DEBUG_INFO(priv, "BT coex %s\n",
(bt_cmd.flags == BT_COEX_DISABLE) ? "disable" : "active");

if (iwl_dvm_send_cmd_pdu(priv, REPLY_BT_CONFIG,
0, sizeof(struct iwl_bt_cmd), &bt_cmd))
IWL_ERR(priv, "failed to send BT Coex Config\n");
}