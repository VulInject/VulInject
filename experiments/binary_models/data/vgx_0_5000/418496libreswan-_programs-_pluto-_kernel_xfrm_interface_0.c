static bool ip_link_set_up(const char *if_name, struct logger *logger)
{
struct nl_ifinfomsg_req req = init_nl_ifi(RTM_NEWLINK, NLM_F_REQUEST);
req.i.ifi_change |= IFF_UP;
req.i.ifi_flags |= IFF_UP;
req.i.ifi_index = if_nametoindex(if_name);
if (req.i.ifi_index == 0) {
llog_error(logger, errno,
"link_set_up_nl() cannot find index of xfrm interface %s",
if_name);
return true;
}

return nl_query_small_resp(&req.n, "ip_link_set_up", if_name, logger);
}