static int
dissect_acdr_signaling(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data)
{
acdr_dissector_data_t *acdr_data = (acdr_dissector_data_t *) data;
proto_item *packet_item = proto_tree_add_item(tree, hf_signaling_packet, tvb, 0, -1, ENC_NA);
proto_tree *packet_tree = proto_item_add_subtree(packet_item, ett_signaling_packet);

int res = dissect_signaling_packet(tvb, pinfo, packet_tree, acdr_data->trace_point);

col_set_str(pinfo->cinfo, COL_PROTOCOL, "Signaling");
col_clear(pinfo->cinfo, COL_INFO);
switch (acdr_data->trace_point) {
case Host2Pstn:
col_prepend_fstr(pinfo->cinfo, COL_INFO, "HOST --> PSTN");
break;
case Pstn2Host:
col_prepend_fstr(pinfo->cinfo, COL_INFO, "PSTN --> HOST");
break;
case DspIncoming:
col_prepend_fstr(pinfo->cinfo, COL_INFO, "DSP Incoming:  HOST --> PSTN");
break;
case DspOutgoing:
col_prepend_fstr(pinfo->cinfo, COL_INFO, "DSP Outgoing:  PSTN --> HOST");
break;
}
return res;
}