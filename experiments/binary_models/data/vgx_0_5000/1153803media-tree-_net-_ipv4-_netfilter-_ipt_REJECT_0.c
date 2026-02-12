static int reject_tg_check(const struct xt_tgchk_param *par)
{
const struct ipt_reject_info *rejinfo = par->targinfo;
const struct ipt_entry *e = par->entryinfo;

if (rejinfo->with == IPT_ICMP_ECHOREPLY) {
pr_info("ECHOREPLY no longer supported.\n");
return -EINVAL;
} else if (rejinfo->with == IPT_TCP_RESET) {

if (e->ip.proto != IPPROTO_TCP ||
(e->ip.invflags & XT_INV_PROTO)) {
pr_info("TCP_RESET invalid for non-tcp\n");
return -EINVAL;
}
}
return 0;
}

static struct xt_target reject_tg_reg __read_mostly = {
.name		= "REJECT",
.family		= NFPROTO_IPV4,
.target		= reject_tg,
.targetsize	= sizeof(struct ipt_reject_info),
.table		= "filter",
.hooks		= (1 << NF_INET_LOCAL_IN) | (1 << NF_INET_FORWARD) |
(1 << NF_INET_LOCAL_OUT),
.checkentry	= reject_tg_check,
.me		= THIS_MODULE,
};