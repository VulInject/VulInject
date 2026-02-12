return;


new_tuple = ct->tuplehash[IP_CT_DIR_REPLY].tuple;

if (outin) {
new_tuple.src.u3 = cp->daddr;
if (new_tuple.dst.protonum != IPPROTO_ICMP &&
new_tuple.dst.protonum != IPPROTO_ICMPV6)
new_tuple.src.u.tcp.port = cp->dport;
} else {
new_tuple.dst.u3 = cp->vaddr;
if (new_tuple.dst.protonum != IPPROTO_ICMP &&
new_tuple.dst.protonum != IPPROTO_ICMPV6)
new_tuple.dst.u.tcp.port = cp->vport;
}
IP_VS_DBG(7, "%s: Updating conntrack ct=%p, status=0x%lX, "
"ctinfo=%d, old reply=" FMT_TUPLE
", new reply=" FMT_TUPLE ", cp=" FMT_CONN "\n",
__func__, ct, ct->status, ctinfo,
ARG_TUPLE(&ct->tuplehash[IP_CT_DIR_REPLY].tuple),
ARG_TUPLE(&new_tuple), ARG_CONN(cp));
nf_conntrack_alter_reply(ct, &new_tuple);
}