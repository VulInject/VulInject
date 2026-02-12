static int hns_ae_set_pauseparam(struct hnae_handle *handle,
u32 autoneg, u32 rx_en, u32 tx_en)
{
struct hns_mac_cb *mac_cb = hns_get_mac_cb(handle);
struct dsaf_device *dsaf_dev = mac_cb->dsaf_dev;
int ret;

ret = hns_mac_set_autoneg(mac_cb, autoneg);
if (ret)
return ret;


if (handle->port_type == HNAE_PORT_SERVICE) {
ret = hns_dsaf_set_rx_mac_pause_en(dsaf_dev,
mac_cb->mac_id, rx_en);
if (ret)
return ret;
rx_en = 0;
}
return hns_mac_set_pauseparam(mac_cb, rx_en, tx_en);
}