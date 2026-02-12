static unsigned int
hl_tg6(struct sk_buff *skb, const struct xt_action_param *par)
{
struct ipv6hdr *ip6h;
const struct ip6t_HL_info *info = par->targinfo;
int new_hl;

if (!skb_make_writable(skb, skb->len))
return NF_DROP;

ip6h = ipv6_hdr(skb);

switch (info->mode) {
case IP6T_HL_SET:
new_hl = info->hop_limit;
break;
case IP6T_HL_INC:
new_hl = ip6h->hop_limit + info->hop_limit;
if (new_hl > 255)
new_hl = 255;
break;
case IP6T_HL_DEC:
new_hl = ip6h->hop_limit - info->hop_limit;
if (new_hl < 0)
new_hl = 0;
break;
default:
new_hl = ip6h->hop_limit;
break;
}

ip6h->hop_limit = new_hl;

return XT_CONTINUE;
}