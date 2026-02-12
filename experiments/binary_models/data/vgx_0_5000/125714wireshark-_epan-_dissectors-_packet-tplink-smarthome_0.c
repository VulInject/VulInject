static int
dissect_tplink_smarthome_message(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree,
void *data _U_)
{
proto_item	*ti;
proto_tree	*tplink_smarthome_tree;
gint8		start = 0;
guint8		c, d;
guint8		key = 171;
gint32		len = tvb_captured_length(tvb);

switch (pinfo->ptype) {                                                                 
case PT_UDP:
start = 0;
break;
case PT_TCP:
start = 4;
break;
default:
return 0;
}

if (!test_tplink_smarthome(pinfo, tvb, start, data)) {
return 0;
}

col_set_str(pinfo->cinfo, COL_PROTOCOL, "TPLINK-SMARTHOME");				
col_clear(pinfo->cinfo, COL_INFO);							

ti = proto_tree_add_item(tree, proto_tplink_smarthome, tvb, 0, -1, ENC_NA);		
tplink_smarthome_tree = proto_item_add_subtree(ti, ett_tplink_smarthome);		

if (pinfo->ptype == PT_TCP) {
proto_tree_add_item(tplink_smarthome_tree, hf_tplink_smarthome_Len,
tvb, 0, FRAME_HEADER_LEN, ENC_BIG_ENDIAN);		
}
gint	i_offset	= start;
gint	o_offset	= 0;
gint	decode_len	= len - start;
char	*ascii_buffer	= (char *)wmem_alloc(pinfo->pool, 1 + len - start);		

for (; o_offset < decode_len; i_offset++, o_offset++) {					
c	= tvb_get_guint8(tvb, i_offset);
d	= c ^ key;								
key	= c;									
*(ascii_buffer + o_offset) = g_ascii_isprint(d) ? d : '.';			
}
*(ascii_buffer + o_offset) = '\0';

char *mtype;										
if	(pinfo->destport == TPLINK_SMARTHOME_PORT)	{ mtype = "Cmd"; }		
else if	(pinfo->srcport  == TPLINK_SMARTHOME_PORT)	{ mtype = "Rsp"; }		
else							{ mtype = "Msg"; }		

proto_tree_add_string_format(tplink_smarthome_tree, hf_tplink_smarthome_Msg, tvb,
start, -1, ascii_buffer, "%s: %s", mtype, ascii_buffer);	    

tvbuff_t *next_tvb = tvb_new_child_real_data(tvb, (guint8 *)ascii_buffer, decode_len, decode_len);	
add_new_data_source(pinfo, next_tvb, "JSON Message");					    	
call_dissector(find_dissector("json"), next_tvb, pinfo, ti);			    		

col_add_fstr(pinfo->cinfo, COL_INFO, "%s %s: %s",
(pinfo->ptype == PT_UDP) ? "UDP" : "TCP",
mtype, ascii_buffer);									

return tvb_captured_length(tvb);								
}