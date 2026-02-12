
IEEE80211_IF_FILE_R(rc_rateidx_vht_mcs_mask_5ghz);

IEEE80211_IF_FILE(flags, flags, HEX);
IEEE80211_IF_FILE(state, state, LHEX);
IEEE80211_IF_FILE(txpower, vif.bss_conf.txpower, DEC);
IEEE80211_IF_FILE(ap_power_level, deflink.ap_power_level, DEC);
IEEE80211_IF_FILE(user_power_level, deflink.user_power_level, DEC);

static ssize_t
ieee80211_if_fmt_hw_queues(const struct ieee80211_sub_if_data *sdata,
char *buf, int buflen)
{
int len;

len = scnprintf(buf, buflen, "AC queues: VO:%d VI:%d BE:%d BK:%d\n",
sdata->vif.hw_queue[IEEE80211_AC_VO],
sdata->vif.hw_queue[IEEE80211_AC_VI],
sdata->vif.hw_queue[IEEE80211_AC_BE],
sdata->vif.hw_queue[IEEE80211_AC_BK]);

if (sdata->vif.type == NL80211_IFTYPE_AP)
len += scnprintf(buf + len, buflen - len, "cab queue: %d\n",
sdata->vif.cab_queue);

return len;
}