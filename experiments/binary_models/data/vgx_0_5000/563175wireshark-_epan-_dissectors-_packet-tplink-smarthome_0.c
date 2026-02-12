static gboolean
test_tplink_smarthome(packet_info *pinfo _U_, tvbuff_t *tvb, int offset, void *data _U_)
{
guint8		key = 171;
guint8		c, d;
if (tvb_captured_length_remaining(tvb, offset) < 2) {
return FALSE;
}


c = tvb_get_guint8(tvb, offset);
d = c ^ key;
if (d != '{') {
return FALSE;
}
d = c ^ tvb_get_guint8(tvb, offset+1);
if (d != '"' && d != '}') {
return FALSE;
}

return TRUE;
}