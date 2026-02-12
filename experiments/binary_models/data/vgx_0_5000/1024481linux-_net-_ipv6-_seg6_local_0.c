static int seg6_parse_nla_next_csid_cfg(struct nlattr **tb,
struct seg6_flavors_info *finfo,
struct netlink_ext_ack *extack)
{
__u8 func_len = SEG6_LOCAL_LCNODE_FN_DBITS;
__u8 block_len = SEG6_LOCAL_LCBLOCK_DBITS;
int rc;

if (tb[SEG6_LOCAL_FLV_LCBLOCK_BITS])
block_len = nla_get_u8(tb[SEG6_LOCAL_FLV_LCBLOCK_BITS]);

if (tb[SEG6_LOCAL_FLV_LCNODE_FN_BITS])
func_len = nla_get_u8(tb[SEG6_LOCAL_FLV_LCNODE_FN_BITS]);

rc = seg6_chk_next_csid_cfg(block_len, func_len);
if (rc < 0) {
NL_SET_ERR_MSG(extack,
"Invalid Locator Block/Node Function lengths");
return rc;
}

finfo->lcblock_bits = block_len;
finfo->lcnode_func_bits = func_len;

return 0;
}