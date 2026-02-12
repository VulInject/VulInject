}
EXPORT_SYMBOL(ip_fraglist_init);

void ip_fraglist_prepare(struct sk_buff *skb, struct ip_fraglist_iter *iter)
{
unsigned int hlen = iter->hlen;
struct iphdr *iph = iter->iph;
struct sk_buff *frag;

frag = iter->frag;
frag->ip_summed = CHECKSUM_NONE;
skb_reset_transport_header(frag);
__skb_push(frag, hlen);
skb_reset_network_header(frag);
memcpy(skb_network_header(frag), iph, hlen);
iter->iph = ip_hdr(frag);
iph = iter->iph;
iph->tot_len = htons(frag->len);
ip_copy_metadata(frag, skb);
iter->offset += skb->len - hlen;
iph->frag_off = htons(iter->offset >> 3);
if (frag->next)
iph->frag_off |= htons(IP_MF);

ip_send_check(iph);
}