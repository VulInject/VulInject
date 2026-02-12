static int prism2_get_station(struct wiphy *wiphy, struct net_device *dev,
const u8 *mac, struct station_info *sinfo)
{
struct wlandevice *wlandev = dev->ml_priv;
struct p80211msg_lnxreq_commsquality quality;
int result;

memset(sinfo, 0, sizeof(*sinfo));

if (!wlandev || (wlandev->msdstate != WLAN_MSD_RUNNING))
return -EOPNOTSUPP;


quality.msgcode = DIDMSG_LNXREQ_COMMSQUALITY;
quality.dbm.data = P80211ENUM_truth_true;
quality.dbm.status = P80211ENUM_msgitem_status_data_ok;


if (!wlandev->mlmerequest)
return -EOPNOTSUPP;

result = wlandev->mlmerequest(wlandev, (struct p80211msg *)&quality);

if (result == 0) {
sinfo->txrate.legacy = quality.txrate.data;
sinfo->filled |= BIT_ULL(NL80211_STA_INFO_TX_BITRATE);
sinfo->signal = quality.level.data;
sinfo->filled |= BIT_ULL(NL80211_STA_INFO_SIGNAL);
}

return result;
}