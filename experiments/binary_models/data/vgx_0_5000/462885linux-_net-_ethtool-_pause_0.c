static int pause_parse_request(struct ethnl_req_info *req_base,
struct nlattr **tb,
struct netlink_ext_ack *extack)
{
enum ethtool_mac_stats_src src = ETHTOOL_MAC_STATS_SRC_AGGREGATE;
struct pause_req_info *req_info = PAUSE_REQINFO(req_base);

if (tb[ETHTOOL_A_PAUSE_STATS_SRC]) {
if (!(req_base->flags & ETHTOOL_FLAG_STATS)) {
NL_SET_ERR_MSG_MOD(extack,
"ETHTOOL_FLAG_STATS must be set when requesting a source of stats");
return -EINVAL;
}

src = nla_get_u32(tb[ETHTOOL_A_PAUSE_STATS_SRC]);
}

req_info->src = src;

return 0;
}