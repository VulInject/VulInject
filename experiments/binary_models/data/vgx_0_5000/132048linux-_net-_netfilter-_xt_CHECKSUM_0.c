static int checksum_tg_check(const struct xt_tgchk_param *par)
{
const struct xt_CHECKSUM_info *einfo = par->targinfo;
const struct ip6t_ip6 *i6 = par->entryinfo;
const struct ipt_ip *i4 = par->entryinfo;

if (einfo->operation & ~XT_CHECKSUM_OP_FILL) {
pr_info_ratelimited("unsupported CHECKSUM operation %x\n",
einfo->operation);
return -EINVAL;
}
if (!einfo->operation)
return -EINVAL;

switch (par->family) {
case NFPROTO_IPV4:
if (i4->proto == IPPROTO_UDP &&
(i4->invflags & XT_INV_PROTO) == 0)
return 0;
break;
case NFPROTO_IPV6:
if ((i6->flags & IP6T_F_PROTO) &&
i6->proto == IPPROTO_UDP &&
(i6->invflags & XT_INV_PROTO) == 0)
return 0;
break;
}

pr_warn_once("CHECKSUM should be avoided.  If really needed, restrict with \"-p udp\" and only use in OUTPUT\n");
return 0;
}