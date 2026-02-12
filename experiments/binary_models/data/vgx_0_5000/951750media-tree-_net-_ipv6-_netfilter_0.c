}
EXPORT_SYMBOL(nf_ip6_checksum);

static __sum16 nf_ip6_checksum_partial(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, unsigned int len,
u_int8_t protocol)
{
const struct ipv6hdr *ip6h = ipv6_hdr(skb);
__wsum hsum;
__sum16 csum = 0;

switch (skb->ip_summed) {
case CHECKSUM_COMPLETE:
if (len == skb->len - dataoff)
return nf_ip6_checksum(skb, hook, dataoff, protocol);

case CHECKSUM_NONE:
hsum = skb_checksum(skb, 0, dataoff, 0);
skb->csum = ~csum_unfold(csum_ipv6_magic(&ip6h->saddr,
&ip6h->daddr,
skb->len - dataoff,
protocol,
csum_sub(0, hsum)));
skb->ip_summed = CHECKSUM_NONE;
return __skb_checksum_complete_head(skb, dataoff + len);
}
return csum;
};