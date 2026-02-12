}
EXPORT_SYMBOL(nf_ip_checksum);

static __sum16 nf_ip_checksum_partial(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, unsigned int len,
u8 protocol)
{
const struct iphdr *iph = ip_hdr(skb);
__sum16 csum = 0;

switch (skb->ip_summed) {
case CHECKSUM_COMPLETE:
if (len == skb->len - dataoff)
return nf_ip_checksum(skb, hook, dataoff, protocol);
fallthrough;
case CHECKSUM_NONE:
skb->csum = csum_tcpudp_nofold(iph->saddr, iph->daddr, protocol,
skb->len - dataoff, 0);
skb->ip_summed = CHECKSUM_NONE;
return __skb_checksum_complete_head(skb, dataoff + len);
}
return csum;
}