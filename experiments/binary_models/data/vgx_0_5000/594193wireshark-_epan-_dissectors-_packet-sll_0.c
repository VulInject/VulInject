static gboolean
capture_sll(const guchar *pd, int offset _U_, int len, capture_packet_info_t *cpinfo, const union wtap_pseudo_header *pseudo_header _U_)
{
guint16 hatype;
guint16 protocol;

if (!BYTES_ARE_IN_FRAME(0, len, SLL_HEADER_SIZE))
return FALSE;

protocol = pntoh16(&pd[14]);
if (protocol <= 1536) {	

hatype = pntoh16(&pd[2]);
if (try_capture_dissector("sll.hatype", hatype, pd,
SLL_HEADER_SIZE, len, cpinfo, pseudo_header))
return TRUE;
return try_capture_dissector("sll.ltype", protocol, pd, SLL_HEADER_SIZE, len, cpinfo, pseudo_header);
} else {
return try_capture_dissector("ethertype", protocol, pd, SLL_HEADER_SIZE, len, cpinfo, pseudo_header);
}
return FALSE;
}