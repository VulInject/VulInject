static void iwl_mvm_fill_scan_config_v1(struct iwl_mvm *mvm, void *config,
u32 flags, u8 channel_flags,
u32 max_channels)
{
enum iwl_mvm_scan_type type = iwl_mvm_get_scan_type(mvm, NULL);
struct iwl_scan_config_v1 *cfg = config;

cfg->flags = cpu_to_le32(flags);
cfg->tx_chains = cpu_to_le32(iwl_mvm_get_valid_tx_ant(mvm));
cfg->rx_chains = cpu_to_le32(iwl_mvm_scan_rx_ant(mvm));
cfg->legacy_rates = iwl_mvm_scan_config_rates(mvm);
cfg->out_of_channel_time = cpu_to_le32(scan_timing[type].max_out_time);
cfg->suspend_time = cpu_to_le32(scan_timing[type].suspend_time);

iwl_mvm_fill_scan_dwell(mvm, &cfg->dwell);

memcpy(&cfg->mac_addr, &mvm->addresses[0].addr, ETH_ALEN);


WARN_ON_ONCE(iwl_fw_lookup_cmd_ver(mvm->fw, ADD_STA, 0) >= 12);

cfg->bcast_sta_id = mvm->aux_sta.sta_id;
cfg->channel_flags = channel_flags;

iwl_mvm_fill_channels(mvm, cfg->channel_array, max_channels);
}