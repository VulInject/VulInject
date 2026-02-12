void xfrm_local_error(struct sk_buff *skb, int mtu)
{
unsigned int proto;
struct xfrm_state_afinfo *afinfo;

if (skb->protocol == htons(ETH_P_IP))
proto = AF_INET;
else if (skb->protocol == htons(ETH_P_IPV6) &&
skb->sk->sk_family == AF_INET6)
proto = AF_INET6;
else
return;

afinfo = xfrm_state_get_afinfo(proto);
if (afinfo) {
afinfo->local_error(skb, mtu);
rcu_read_unlock();
}
}