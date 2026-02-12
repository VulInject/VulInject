static bool wx_is_non_eop(struct wx_ring *rx_ring,
union wx_rx_desc *rx_desc,
struct sk_buff *skb)
{
u32 ntc = rx_ring->next_to_clean + 1;


ntc = (ntc < rx_ring->count) ? ntc : 0;
rx_ring->next_to_clean = ntc;

prefetch(WX_RX_DESC(rx_ring, ntc));


if (likely(wx_test_staterr(rx_desc, WX_RXD_STAT_EOP)))
return false;

rx_ring->rx_buffer_info[ntc].skb = skb;

return true;
}