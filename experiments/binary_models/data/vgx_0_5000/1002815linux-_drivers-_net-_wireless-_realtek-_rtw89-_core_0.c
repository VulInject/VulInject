void rtw89_core_rx(struct rtw89_dev *rtwdev,
struct rtw89_rx_desc_info *desc_info,
struct sk_buff *skb)
{
struct ieee80211_rx_status *rx_status;
struct rtw89_ppdu_sts_info *ppdu_sts = &rtwdev->ppdu_sts;
u8 ppdu_cnt = desc_info->ppdu_cnt;
u8 band = desc_info->bb_sel ? RTW89_PHY_1 : RTW89_PHY_0;

if (desc_info->pkt_type != RTW89_CORE_RX_TYPE_WIFI) {
rtw89_core_rx_process_report(rtwdev, desc_info, skb);
return;
}

if (ppdu_sts->curr_rx_ppdu_cnt[band] != ppdu_cnt) {
rtw89_core_flush_ppdu_rx_queue(rtwdev, desc_info);
ppdu_sts->curr_rx_ppdu_cnt[band] = ppdu_cnt;
}

rx_status = IEEE80211_SKB_RXCB(skb);
memset(rx_status, 0, sizeof(*rx_status));
rtw89_core_update_rx_status(rtwdev, desc_info, rx_status);
if (desc_info->long_rxdesc &&
BIT(desc_info->frame_type) & PPDU_FILTER_BITMAP)
skb_queue_tail(&ppdu_sts->rx_queue[band], skb);
else
rtw89_core_rx_to_mac80211(rtwdev, NULL, desc_info, skb, rx_status);
}