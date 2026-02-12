static bool match_tcp(const struct sk_buff *skb, struct xt_action_param *par)
{
const struct xt_ecn_info *einfo = par->matchinfo;
struct tcphdr _tcph;
const struct tcphdr *th;


th = skb_header_pointer(skb, par->thoff, sizeof(_tcph), &_tcph);
if (th == NULL)
return false;

if (einfo->operation & XT_ECN_OP_MATCH_ECE) {
if (einfo->invert & XT_ECN_OP_MATCH_ECE) {
if (th->ece == 1)
return false;
} else {
if (th->ece == 0)
return false;
}
}

if (einfo->operation & XT_ECN_OP_MATCH_CWR) {
if (einfo->invert & XT_ECN_OP_MATCH_CWR) {
if (th->cwr == 1)
return false;
} else {
if (th->cwr == 0)
return false;
}
}

return true;
}