static int ecn_tg_check(const struct xt_tgchk_param *par)
{
const struct ipt_ECN_info *einfo = par->targinfo;
const struct ipt_entry *e = par->entryinfo;

if (einfo->operation & IPT_ECN_OP_MASK) {
pr_info("unsupported ECN operation %x\n", einfo->operation);
return -EINVAL;
}
if (einfo->ip_ect & ~IPT_ECN_IP_MASK) {
pr_info("new ECT codepoint %x out of mask\n", einfo->ip_ect);
return -EINVAL;
}
if ((einfo->operation & (IPT_ECN_OP_SET_ECE|IPT_ECN_OP_SET_CWR)) &&
(e->ip.proto != IPPROTO_TCP || (e->ip.invflags & XT_INV_PROTO))) {
pr_info("cannot use TCP operations on a non-tcp rule\n");
return -EINVAL;
}
return 0;
}