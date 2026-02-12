gint
tvb_find_tvb(tvbuff_t *haystack_tvb, tvbuff_t *needle_tvb, const gint haystack_offset)
{
guint	      haystack_abs_offset = 0, haystack_abs_length = 0;
const guint8 *haystack_data;
const guint8 *needle_data;
const guint   needle_len = needle_tvb->length;
const guint8 *location;

DISSECTOR_ASSERT(haystack_tvb && haystack_tvb->initialized);

if (haystack_tvb->length < 1 || needle_tvb->length < 1) {
return -1;
}


haystack_data = ensure_contiguous(haystack_tvb, 0, -1);
needle_data   = ensure_contiguous(needle_tvb, 0, -1);

check_offset_length(haystack_tvb, haystack_offset, -1,
&haystack_abs_offset, &haystack_abs_length);

location = ws_memmem(haystack_data + haystack_abs_offset, haystack_abs_length,
needle_data, needle_len);

if (location) {
return (gint) (location - haystack_data);
}

return -1;
}