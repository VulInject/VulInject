static __le64
nfp_nfdk_tx_tso(struct nfp_net_r_vector *r_vec, struct nfp_nfdk_tx_buf *txbuf,
struct sk_buff *skb)
{
u32 segs, hdrlen, l3_offset, l4_offset;
struct nfp_nfdk_tx_desc txd;
u16 mss;

if (!skb->encapsulation) {
l3_offset = skb_network_offset(skb);
l4_offset = skb_transport_offset(skb);
hdrlen = skb_tcp_all_headers(skb);
} else {
l3_offset = skb_inner_network_offset(skb);
l4_offset = skb_inner_transport_offset(skb);
hdrlen = skb_inner_tcp_all_headers(skb);
}

segs = skb_shinfo(skb)->gso_segs;
mss = skb_shinfo(skb)->gso_size & NFDK_DESC_TX_MSS_MASK;

txd.l3_offset = l3_offset;
txd.l4_offset = l4_offset;
txd.lso_meta_res = 0;
txd.mss = cpu_to_le16(mss);
txd.lso_hdrlen = hdrlen;
txd.lso_totsegs = segs;

txbuf->pkt_cnt = segs;
txbuf->real_len = skb->len + hdrlen * (txbuf->pkt_cnt - 1);

u64_stats_update_begin(&r_vec->tx_sync);
r_vec->tx_lso++;
u64_stats_update_end(&r_vec->tx_sync);

return txd.raw;
}