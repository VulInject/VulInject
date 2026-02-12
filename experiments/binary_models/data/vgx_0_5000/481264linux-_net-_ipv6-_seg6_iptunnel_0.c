static __be32 seg6_make_flowlabel(struct net *net, struct sk_buff *skb,
struct ipv6hdr *inner_hdr)
{
int do_flowlabel = net->ipv6.sysctl.seg6_flowlabel;
__be32 flowlabel = 0;
u32 hash;

if (do_flowlabel > 0) {
hash = skb_get_hash(skb);
hash = rol32(hash, 16);
flowlabel = (__force __be32)hash & IPV6_FLOWLABEL_MASK;
} else if (!do_flowlabel && skb->protocol == htons(ETH_P_IPV6)) {
flowlabel = ip6_flowlabel(inner_hdr);
}
return flowlabel;
}