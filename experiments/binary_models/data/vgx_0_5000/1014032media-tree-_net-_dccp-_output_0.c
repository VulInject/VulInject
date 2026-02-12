
EXPORT_SYMBOL_GPL(dccp_send_sync);


void dccp_send_close(struct sock *sk, const int active)
{
struct dccp_sock *dp = dccp_sk(sk);
struct sk_buff *skb;
const gfp_t prio = active ? GFP_KERNEL : GFP_ATOMIC;

skb = alloc_skb(sk->sk_prot->max_header, prio);
if (skb == NULL)
return;


skb_reserve(skb, sk->sk_prot->max_header);
if (dp->dccps_role == DCCP_ROLE_SERVER && !dp->dccps_server_timewait)
DCCP_SKB_CB(skb)->dccpd_type = DCCP_PKT_CLOSEREQ;
else
DCCP_SKB_CB(skb)->dccpd_type = DCCP_PKT_CLOSE;

if (active) {
skb = dccp_skb_entail(sk, skb);

inet_csk_reset_xmit_timer(sk, ICSK_TIME_RETRANS,
DCCP_TIMEOUT_INIT, DCCP_RTO_MAX);
}
dccp_transmit_skb(sk, skb);
}