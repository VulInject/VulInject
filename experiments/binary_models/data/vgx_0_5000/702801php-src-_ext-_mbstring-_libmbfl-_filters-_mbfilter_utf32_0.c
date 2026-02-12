int mbfl_filt_conv_utf32_wchar(int c, mbfl_convert_filter *filter)
{
if (filter->status < 3) {
filter->cache = (filter->cache << 8) | (c & 0xFF);
filter->status++;
} else {
int n = ((unsigned int)filter->cache << 8) | (c & 0xFF);
filter->cache = filter->status = 0;

if (n == 0xFFFE0000) {

filter->filter_function = mbfl_filt_conv_utf32le_wchar;
} else {
filter->filter_function = mbfl_filt_conv_utf32be_wchar;
if (n != 0xFEFF) {
CK(emit_char_if_valid(n, filter));
}
}
}

return 0;
}