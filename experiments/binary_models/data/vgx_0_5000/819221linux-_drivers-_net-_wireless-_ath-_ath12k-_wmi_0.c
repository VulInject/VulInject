static void ath12k_peer_delete_resp_event(struct ath12k_base *ab, struct sk_buff *skb)
{
struct wmi_peer_delete_resp_event peer_del_resp;
struct ath12k *ar;

if (ath12k_pull_peer_del_resp_ev(ab, skb, &peer_del_resp) != 0) {
ath12k_warn(ab, "failed to extract peer delete resp");
return;
}

rcu_read_lock();
ar = ath12k_mac_get_ar_by_vdev_id(ab, le32_to_cpu(peer_del_resp.vdev_id));
if (!ar) {
ath12k_warn(ab, "invalid vdev id in peer delete resp ev %d",
peer_del_resp.vdev_id);
rcu_read_unlock();
return;
}

complete(&ar->peer_delete_done);
rcu_read_unlock();
ath12k_dbg(ab, ATH12K_DBG_WMI, "peer delete resp for vdev id %d addr %pM\n",
peer_del_resp.vdev_id, peer_del_resp.peer_macaddr.addr);
}