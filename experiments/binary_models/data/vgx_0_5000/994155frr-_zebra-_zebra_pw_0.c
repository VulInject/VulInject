struct zebra_pw *zebra_pw_add(struct zebra_vrf *zvrf, const char *ifname,
uint8_t protocol, struct zserv *client)
{
struct zebra_pw *pw;

if (IS_ZEBRA_DEBUG_PW)
zlog_debug("%u: adding pseudowire %s protocol %s",
zvrf_id(zvrf), ifname, zebra_route_string(protocol));

pw = XCALLOC(MTYPE_PW, sizeof(*pw));
strlcpy(pw->ifname, ifname, sizeof(pw->ifname));
pw->protocol = protocol;
pw->vrf_id = zvrf_id(zvrf);
pw->client = client;
pw->status = PW_NOT_FORWARDING;
pw->local_label = MPLS_NO_LABEL;
pw->remote_label = MPLS_NO_LABEL;
pw->flags = F_PSEUDOWIRE_CWORD;

RB_INSERT(zebra_pw_head, &zvrf->pseudowires, pw);
if (pw->protocol == ZEBRA_ROUTE_STATIC) {
RB_INSERT(zebra_static_pw_head, &zvrf->static_pseudowires, pw);
QOBJ_REG(pw, zebra_pw);
}

return pw;
}