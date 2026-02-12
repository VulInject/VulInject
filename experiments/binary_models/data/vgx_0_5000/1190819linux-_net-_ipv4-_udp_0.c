static int __udp_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
{
int rc;

if (inet_sk(sk)->inet_daddr) {
sock_rps_save_rxhash(sk, skb);
sk_mark_napi_id(sk, skb);
sk_incoming_cpu_update(sk);
} else {
sk_mark_napi_id_once(sk, skb);
}

rc = __udp_enqueue_schedule_skb(sk, skb);
if (rc < 0) {
int is_udplite = IS_UDPLITE(sk);
int drop_reason;


if (rc == -ENOMEM) {
UDP_INC_STATS(sock_net(sk), UDP_MIB_RCVBUFERRORS,
is_udplite);
drop_reason = SKB_DROP_REASON_SOCKET_RCVBUFF;
} else {
UDP_INC_STATS(sock_net(sk), UDP_MIB_MEMERRORS,
is_udplite);
drop_reason = SKB_DROP_REASON_PROTO_MEM;
}
UDP_INC_STATS(sock_net(sk), UDP_MIB_INERRORS, is_udplite);
kfree_skb_reason(skb, drop_reason);
trace_udp_fail_queue_rcv_skb(rc, sk);
return -1;
}

return 0;
}