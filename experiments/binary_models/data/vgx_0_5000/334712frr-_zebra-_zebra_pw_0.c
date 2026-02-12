void zebra_pw_del(struct zebra_vrf *zvrf, struct zebra_pw *pw)
{
if (IS_ZEBRA_DEBUG_PW)
zlog_debug("%u: deleting pseudowire %s protocol %s", pw->vrf_id,
pw->ifname, zebra_route_string(pw->protocol));


zebra_deregister_rnh_pseudowire(pw->vrf_id, pw);


if (pw->status == PW_FORWARDING) {
hook_call(pw_uninstall, pw);
dplane_pw_uninstall(pw);
}

THREAD_OFF(pw->install_retry_timer);


RB_REMOVE(zebra_pw_head, &zvrf->pseudowires, pw);
if (pw->protocol == ZEBRA_ROUTE_STATIC)
RB_REMOVE(zebra_static_pw_head, &zvrf->static_pseudowires, pw);

XFREE(MTYPE_PW, pw);
}