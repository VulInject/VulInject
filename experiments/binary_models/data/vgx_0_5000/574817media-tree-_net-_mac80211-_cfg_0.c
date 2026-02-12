static int ieee80211_change_iface(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type,
struct vif_params *params)
{
struct ieee80211_sub_if_data *sdata = IEEE80211_DEV_TO_SUB_IF(dev);
int ret;

ret = ieee80211_if_change_type(sdata, type);
if (ret)
return ret;

if (type == NL80211_IFTYPE_AP_VLAN &&
params && params->use_4addr == 0) {
RCU_INIT_POINTER(sdata->u.vlan.sta, NULL);
ieee80211_check_fast_rx_iface(sdata);
} else if (type == NL80211_IFTYPE_STATION &&
params && params->use_4addr >= 0) {
sdata->u.mgd.use_4addr = params->use_4addr;
}

if (sdata->vif.type == NL80211_IFTYPE_MONITOR) {
ret = ieee80211_set_mon_options(sdata, params);
if (ret)
return ret;
}

return 0;
}