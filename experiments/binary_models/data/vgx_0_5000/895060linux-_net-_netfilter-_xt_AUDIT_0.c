MODULE_DESCRIPTION("Xtables: creates audit records for dropped/accepted packets");
MODULE_ALIAS("ipt_AUDIT");
MODULE_ALIAS("ip6t_AUDIT");
MODULE_ALIAS("ebt_AUDIT");
MODULE_ALIAS("arpt_AUDIT");

static bool audit_ip4(struct audit_buffer *ab, struct sk_buff *skb)
{
struct iphdr _iph;
const struct iphdr *ih;

ih = skb_header_pointer(skb, skb_network_offset(skb), sizeof(_iph), &_iph);
if (!ih)
return false;

audit_log_format(ab, " saddr=%pI4 daddr=%pI4 proto=%hhu",
&ih->saddr, &ih->daddr, ih->protocol);

return true;
}