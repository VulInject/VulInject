static int virt_wifi_get_station(struct wiphy *wiphy, struct net_device *dev,
const u8 *mac, struct station_info *sinfo)
{
struct virt_wifi_netdev_priv *priv = netdev_priv(dev);

wiphy_debug(wiphy, "get_station\n");

if (!priv->is_connected || !ether_addr_equal(mac, fake_router_bssid))
return -ENOENT;

sinfo->filled = BIT_ULL(NL80211_STA_INFO_TX_PACKETS) |
BIT_ULL(NL80211_STA_INFO_TX_FAILED) |
BIT_ULL(NL80211_STA_INFO_SIGNAL) |
BIT_ULL(NL80211_STA_INFO_TX_BITRATE);
sinfo->tx_packets = priv->tx_packets;
sinfo->tx_failed = priv->tx_failed;

sinfo->signal = -50;
sinfo->txrate = (struct rate_info) {
.legacy = 10, 
};
return 0;
}