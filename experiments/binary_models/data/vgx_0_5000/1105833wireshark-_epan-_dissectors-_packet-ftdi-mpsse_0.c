static gint
dissect_clock_parameters(guint8 cmd _U_, tvbuff_t *tvb, packet_info *pinfo _U_, proto_tree *tree, gint offset, ftdi_mpsse_info_t *mpsse_info)
{
gint         offset_start = offset;
guint32      value;
proto_item   *item;
gchar        *str_old, *str;

item = proto_tree_add_item_ret_uint(tree, hf_mpsse_clk_divisor, tvb, offset, 2, ENC_LITTLE_ENDIAN, &value);
offset += 2;

str_old = freq_to_str((gfloat) 12e6 / ((1 + value) * 2));
str = freq_to_str((gfloat) 60e6 / ((1 + value) * 2));

if (mpsse_info->chip == FTDI_CHIP_FT2232D)
{
proto_item_append_text(item, ", TCK/SK Max: %s", str_old);
}
else
{
proto_item_append_text(item, ", TCK Max: %s (60 MHz master clock) or %s (12 MHz master clock)", str, str_old);
}

g_free(str_old);
g_free(str);

return offset - offset_start;
}