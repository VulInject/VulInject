void sdw_cdns_config_stream(struct sdw_cdns *cdns,
u32 ch, u32 dir, struct sdw_cdns_pdi *pdi)
{
u32 offset, val = 0;

if (dir == SDW_DATA_DIR_RX) {
val = CDNS_PORTCTRL_DIRN;

if (cdns->bus.params.m_data_mode != SDW_PORT_DATA_MODE_NORMAL)
val |= CDNS_PORTCTRL_TEST_FAILED;
}
offset = CDNS_PORTCTRL + pdi->num * CDNS_PORT_OFFSET;
cdns_updatel(cdns, offset,
CDNS_PORTCTRL_DIRN | CDNS_PORTCTRL_TEST_FAILED,
val);

val = pdi->num;
val |= CDNS_PDI_CONFIG_SOFT_RESET;
val |= FIELD_PREP(CDNS_PDI_CONFIG_CHANNEL, (1 << ch) - 1);
cdns_writel(cdns, CDNS_PDI_CONFIG(pdi->num), val);
}