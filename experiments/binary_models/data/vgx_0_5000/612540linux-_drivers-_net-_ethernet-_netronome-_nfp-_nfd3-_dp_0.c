static void
nfp_nfd3_tx_tso(struct nfp_net_r_vector *r_vec, struct nfp_nfd3_tx_buf *txbuf,
struct nfp_nfd3_tx_desc *txd, struct sk_buff *skb, u32 md_bytes)
{
u32 l3_offset, l4_offset, hdrlen;
u16 mss;

if (!skb_is_gso(skb))
return;

if (!skb->encapsulation) {
l3_offset = skb_network_offset(skb);
l4_offset = skb_transport_offset(skb);
hdrlen = skb_tcp_all_headers(skb);
} else {
l3_offset = skb_inner_network_offset(skb);
l4_offset = skb_inner_transport_offset(skb);
hdrlen = skb_inner_tcp_all_headers(skb);
}

txbuf->pkt_cnt = skb_shinfo(skb)->gso_segs;
txbuf->real_len += hdrlen * (txbuf->pkt_cnt - 1);

mss = skb_shinfo(skb)->gso_size & NFD3_DESC_TX_MSS_MASK;
txd->l3_offset = l3_offset - md_bytes;
txd->l4_offset = l4_offset - md_bytes;
txd->lso_hdrlen = hdrlen - md_bytes;
txd->mss = cpu_to_le16(mss);
txd->flags |= NFD3_DESC_TX_LSO;

u64_stats_update_begin(&r_vec->tx_sync);
r_vec->tx_lso++;
u64_stats_update_end(&r_vec->tx_sync);
}