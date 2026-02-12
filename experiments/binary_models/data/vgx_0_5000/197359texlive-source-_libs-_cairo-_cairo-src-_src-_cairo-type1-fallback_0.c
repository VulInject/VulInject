cairo_type1_write_stream_encrypted (void                *closure,
const unsigned char *data,
unsigned int         length)
{
const unsigned char *in, *end;
uint16_t c, p;
static const char hex_digits[16] = "0123456789abcdef";
char digits[3];
cairo_type1_font_t *font = closure;

in = (const unsigned char *) data;
end = (const unsigned char *) data + length;
while (in < end) {
p = *in++;
c = p ^ (font->eexec_key >> 8);
font->eexec_key = (c + font->eexec_key) * CAIRO_TYPE1_ENCRYPT_C1 + CAIRO_TYPE1_ENCRYPT_C2;

if (font->hex_encode) {
digits[0] = hex_digits[c >> 4];
digits[1] = hex_digits[c & 0x0f];
digits[2] = '\n';
font->hex_column += 2;

if (font->hex_column == 78) {
_cairo_output_stream_write (font->output, digits, 3);
font->hex_column = 0;
} else {
_cairo_output_stream_write (font->output, digits, 2);
}
} else {
digits[0] = c;
_cairo_output_stream_write (font->output, digits, 1);
}
}

return CAIRO_STATUS_SUCCESS;
}