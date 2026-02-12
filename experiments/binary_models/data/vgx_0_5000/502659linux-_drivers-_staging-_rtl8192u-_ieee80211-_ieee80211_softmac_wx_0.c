int ieee80211_wx_get_power(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
{
mutex_lock(&ieee->wx_mutex);

if (ieee->ps == IEEE80211_PS_DISABLED) {
wrqu->power.disabled = 1;
goto exit;
}

wrqu->power.disabled = 0;

if ((wrqu->power.flags & IW_POWER_TYPE) == IW_POWER_TIMEOUT) {
wrqu->power.flags = IW_POWER_TIMEOUT;
wrqu->power.value = ieee->ps_timeout * 1000;
} else {


wrqu->power.flags = IW_POWER_PERIOD;
wrqu->power.value = ieee->ps_period * 1000;

}

if ((ieee->ps & (IEEE80211_PS_MBCAST | IEEE80211_PS_UNICAST)) == (IEEE80211_PS_MBCAST | IEEE80211_PS_UNICAST))
wrqu->power.flags |= IW_POWER_ALL_R;
else if (ieee->ps & IEEE80211_PS_MBCAST)
wrqu->power.flags |= IW_POWER_MULTICAST_R;
else
wrqu->power.flags |= IW_POWER_UNICAST_R;

exit:
mutex_unlock(&ieee->wx_mutex);
return 0;

}