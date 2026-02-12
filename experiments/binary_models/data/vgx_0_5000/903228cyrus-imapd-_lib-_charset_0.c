static void encode_mimephrase(const char *data, size_t len,
struct buf *buf, int *cnt)
{
size_t n;

buf_appendcstr(buf, "=?UTF-8?Q?");
*cnt += 10;

for (n = 0; n < len; n++) {
unsigned char this = data[n];


int needbytes;
if (this < 0x80) needbytes = 0;
else if (this < 0xc0) needbytes = 0; 
else if (this < 0xe0) needbytes = 3;
else if (this < 0xf0) needbytes = 6;
else if (this < 0xf8) needbytes = 9;
else needbytes = 0; 
if (*cnt + needbytes >= ENCODED_MAX_LINE_LEN) {
buf_appendcstr(buf, "?=\r\n =?UTF-8?Q?");
*cnt = 11;
}

if (QPMIMEPHRASESAFECHAR[this]) {

buf_putc(buf, (char)this);
*cnt += 1;
}
else if (this == ' ') {

buf_putc(buf, '_');
*cnt += 1;
}
else {

buf_printf(buf, "=%02X", this);
*cnt += 3;
}
}

buf_appendcstr(buf, "?=");
}