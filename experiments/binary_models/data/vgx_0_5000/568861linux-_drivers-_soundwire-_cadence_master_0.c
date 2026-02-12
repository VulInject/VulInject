static int cdns_port_params(struct sdw_bus *bus,
struct sdw_port_params *p_params, unsigned int bank)
{
struct sdw_cdns *cdns = bus_to_cdns(bus);
int dpn_config_off_source;
int dpn_config_off_target;
int target_num = p_params->num;
int source_num = p_params->num;
bool override = false;
int dpn_config;

if (target_num == cdns->pdi_loopback_target &&
cdns->pdi_loopback_source != -1) {
source_num = cdns->pdi_loopback_source;
override = true;
}

if (bank) {
dpn_config_off_source = CDNS_DPN_B1_CONFIG(source_num);
dpn_config_off_target = CDNS_DPN_B1_CONFIG(target_num);
} else {
dpn_config_off_source = CDNS_DPN_B0_CONFIG(source_num);
dpn_config_off_target = CDNS_DPN_B0_CONFIG(target_num);
}

dpn_config = cdns_readl(cdns, dpn_config_off_source);


if (!override) {
u32p_replace_bits(&dpn_config, p_params->bps - 1, CDNS_DPN_CONFIG_WL);
u32p_replace_bits(&dpn_config, p_params->flow_mode, CDNS_DPN_CONFIG_PORT_FLOW);
u32p_replace_bits(&dpn_config, p_params->data_mode, CDNS_DPN_CONFIG_PORT_DAT);
}

cdns_writel(cdns, dpn_config_off_target, dpn_config);

return 0;
}