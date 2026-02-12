static guint
get_value_length(tvbuff_t *tvb, guint offset, guint *byte_count, packet_info *pinfo)
{
guint        field;

field = tvb_get_guint8(tvb, offset++);
if (field < 31)
*byte_count = 1;
else {                      
field = tvb_get_guintvar(tvb, offset, byte_count, pinfo, &ei_mmse_oversized_uintvar);
(*byte_count)++;
}


tvb_ensure_bytes_exist(tvb, offset, field);
return field;
}