void ieee80211_wx_sync_scan_wq(struct work_struct *work)
{
struct ieee80211_device *ieee = container_of(work, struct ieee80211_device, wx_sync_scan_wq);
short chan;
enum ht_extension_chan_offset chan_offset = 0;
enum ht_channel_width bandwidth = 0;
int b40M = 0;

chan = ieee->current_network.channel;
netif_carrier_off(ieee->dev);

if (ieee->data_hard_stop)
ieee->data_hard_stop(ieee->dev);

ieee80211_stop_send_beacons(ieee);

ieee->state = IEEE80211_LINKED_SCANNING;
ieee->link_change(ieee->dev);
ieee->InitialGainHandler(ieee->dev, IG_Backup);
if (ieee->pHTInfo->bCurrentHTSupport && ieee->pHTInfo->bEnableHT && ieee->pHTInfo->bCurBW40MHz) {
b40M = 1;
chan_offset = ieee->pHTInfo->CurSTAExtChnlOffset;
bandwidth = (enum ht_channel_width)ieee->pHTInfo->bCurBW40MHz;
printk("Scan in 40M, force to 20M first:%d, %d\n", chan_offset, bandwidth);
ieee->SetBWModeHandler(ieee->dev, HT_CHANNEL_WIDTH_20, HT_EXTCHNL_OFFSET_NO_EXT);
}
ieee80211_start_scan_syncro(ieee);
if (b40M) {
printk("Scan in 20M, back to 40M\n");
if (chan_offset == HT_EXTCHNL_OFFSET_UPPER)
ieee->set_chan(ieee->dev, chan + 2);
else if (chan_offset == HT_EXTCHNL_OFFSET_LOWER)
ieee->set_chan(ieee->dev, chan - 2);
else
ieee->set_chan(ieee->dev, chan);
ieee->SetBWModeHandler(ieee->dev, bandwidth, chan_offset);
} else {
ieee->set_chan(ieee->dev, chan);
}

ieee->InitialGainHandler(ieee->dev, IG_Restore);
ieee->state = IEEE80211_LINKED;
ieee->link_change(ieee->dev);

if (ieee->LinkDetectInfo.NumRecvBcnInPeriod == 0 || ieee->LinkDetectInfo.NumRecvDataInPeriod == 0) {
ieee->LinkDetectInfo.NumRecvBcnInPeriod = 1;
ieee->LinkDetectInfo.NumRecvDataInPeriod = 1;
}
if (ieee->data_hard_resume)
ieee->data_hard_resume(ieee->dev);

if (ieee->iw_mode == IW_MODE_ADHOC || ieee->iw_mode == IW_MODE_MASTER)
ieee80211_start_send_beacons(ieee);

netif_carrier_on(ieee->dev);
mutex_unlock(&ieee->wx_mutex);

}