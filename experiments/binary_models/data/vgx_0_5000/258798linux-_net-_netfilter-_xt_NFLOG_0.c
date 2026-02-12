static unsigned int
nflog_tg(struct sk_buff *skb, const struct xt_action_param *par)
{
const struct xt_nflog_info *info = par->targinfo;
struct net *net = xt_net(par);
struct nf_loginfo li;

li.type		     = NF_LOG_TYPE_ULOG;
li.u.ulog.copy_len   = info->len;
li.u.ulog.group	     = info->group;
li.u.ulog.qthreshold = info->threshold;
li.u.ulog.flags	     = 0;

if (info->flags & XT_NFLOG_F_COPY_LEN)
li.u.ulog.flags |= NF_LOG_F_COPY_LEN;

nf_log_packet(net, xt_family(par), xt_hooknum(par), skb, xt_in(par),
xt_out(par), &li, "%s", info->prefix);

return XT_CONTINUE;
}