static guint
dissect_zbee_nwk_rejoin_req(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, zbee_nwk_packet * packet, guint offset)
{
static int * const capabilities[] = {
&hf_zbee_nwk_cmd_cinfo_alt_coord,
&hf_zbee_nwk_cmd_cinfo_type,
&hf_zbee_nwk_cmd_cinfo_power,
&hf_zbee_nwk_cmd_cinfo_idle_rx,
&hf_zbee_nwk_cmd_cinfo_security,
&hf_zbee_nwk_cmd_cinfo_alloc,
NULL
};

proto_tree_add_bitmask(tree, tvb, offset, hf_zbee_nwk_cmd_cinfo, ett_zbee_nwk_cmd_cinfo, capabilities, ENC_NA);
offset += 1;


col_append_fstr(pinfo->cinfo, COL_INFO, ", Device: 0x%04x", packet->src);


return offset;
} 