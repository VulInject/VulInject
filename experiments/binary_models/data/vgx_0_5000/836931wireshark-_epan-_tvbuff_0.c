int tvb_get_token_len(tvbuff_t *tvb, const gint offset, int len, gint *next_offset, const gboolean desegment)
{
gint   eob_offset;
gint   eot_offset;
int    tokenlen;
guchar found_needle = 0;
static gboolean compiled = FALSE;

DISSECTOR_ASSERT(tvb && tvb->initialized);

if (len == -1) {
len = _tvb_captured_length_remaining(tvb, offset);

}

eob_offset = offset + len;

if (!compiled) {
ws_mempbrk_compile(&pbrk_whitespace, " \r\n");
compiled = TRUE;
}


eot_offset = tvb_ws_mempbrk_pattern_guint8(tvb, offset, len, &pbrk_whitespace, &found_needle);
if (eot_offset == -1) {

if (desegment) {

return -1;
}
else {

tokenlen = eob_offset - offset;
if (next_offset)
*next_offset = eob_offset;
}
}
else {

tokenlen = eot_offset - offset;


if (next_offset)
*next_offset = eot_offset + 1;
}
return tokenlen;
}