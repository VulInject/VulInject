void ath12k_peer_map_event(struct ath12k_base *ab, u8 vdev_id, u16 peer_id,
u8 *mac_addr, u16 ast_hash, u16 hw_peer_id)
{
struct ath12k_peer *peer;

spin_lock_bh(&ab->base_lock);
peer = ath12k_peer_find(ab, vdev_id, mac_addr);
if (!peer) {
peer = kzalloc(sizeof(*peer), GFP_ATOMIC);
if (!peer)
goto exit;

peer->vdev_id = vdev_id;
peer->peer_id = peer_id;
peer->ast_hash = ast_hash;
peer->hw_peer_id = hw_peer_id;
ether_addr_copy(peer->addr, mac_addr);
list_add(&peer->list, &ab->peers);
wake_up(&ab->peer_mapping_wq);
}

ath12k_dbg(ab, ATH12K_DBG_DP_HTT, "htt peer map vdev %d peer %pM id %d\n",
vdev_id, mac_addr, peer_id);

exit:
spin_unlock_bh(&ab->base_lock);
}