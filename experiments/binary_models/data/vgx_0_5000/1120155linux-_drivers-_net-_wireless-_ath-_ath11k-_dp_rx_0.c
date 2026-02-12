static void ath11k_dp_rx_frags_cleanup(struct dp_rx_tid *rx_tid, bool rel_link_desc)
{
struct ath11k_base *ab = rx_tid->ab;

lockdep_assert_held(&ab->base_lock);

if (rx_tid->dst_ring_desc) {
if (rel_link_desc)
ath11k_dp_rx_link_desc_return(ab, (u32 *)rx_tid->dst_ring_desc,
HAL_WBM_REL_BM_ACT_PUT_IN_IDLE);
kfree(rx_tid->dst_ring_desc);
rx_tid->dst_ring_desc = NULL;
}

rx_tid->cur_sn = 0;
rx_tid->last_frag_no = 0;
rx_tid->rx_frag_bitmap = 0;
__skb_queue_purge(&rx_tid->rx_frags);
}