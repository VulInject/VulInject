static void schedule_packet_send(local_info_t *local, struct sta_info *sta)
{
struct sk_buff *skb;
struct ieee80211_hdr *hdr;
struct hostap_80211_rx_status rx_stats;

if (skb_queue_empty(&sta->tx_buf))
return;

skb = dev_alloc_skb(16);
if (skb == NULL) {
printk(KERN_DEBUG "%s: schedule_packet_send: skb alloc "
"failed\n", local->dev->name);
return;
}

hdr = skb_put(skb, 16);


hdr->frame_control = cpu_to_le16(
IEEE80211_FTYPE_CTL | IEEE80211_STYPE_PSPOLL);
memcpy(hdr->addr1, local->dev->dev_addr, ETH_ALEN);
memcpy(hdr->addr2, sta->addr, ETH_ALEN);
hdr->duration_id = cpu_to_le16(sta->aid | BIT(15) | BIT(14));

PDEBUG(DEBUG_PS2,
"%s: Scheduling buffered packet delivery for STA %pM\n",
local->dev->name, sta->addr);

skb->dev = local->dev;

memset(&rx_stats, 0, sizeof(rx_stats));
hostap_rx(local->dev, skb, &rx_stats);
}