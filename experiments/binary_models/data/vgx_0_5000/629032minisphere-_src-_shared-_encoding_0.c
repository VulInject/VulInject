uint8_t*
encoder_run(encoder_t* encoder, const lstring_t* string, size_t *out_size)
{
uint8_t*       output;
uint32_t       codepoint;
utf8_decode_t* cx;
size_t         length;
uint8_t*       text;
const uint8_t* p_in;
uint8_t*       p_out;

text = (uint8_t*)lstr_cstr(string);
length = lstr_len(string);
if (!(output = malloc(length)))
return NULL;
p_in = (uint8_t*)lstr_cstr(string);
p_out = output;

cx = utf8_decode_start(false);
while (p_in < text + length) {



while (utf8_decode_next(cx, *p_in++, &codepoint) == UTF8_CONTINUE);
utf8_emit(codepoint, &p_out);
}
utf8_decode_end(cx);
*out_size = p_out - output;
return output;
}