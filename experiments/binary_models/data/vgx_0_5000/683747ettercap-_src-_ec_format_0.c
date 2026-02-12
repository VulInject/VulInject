int utf8_format(const u_char *buf, size_t len, u_char *dst)
{

if (len == 0 || buf == NULL) {
strncpy(dst, "", 1);
return 0;
}


memcpy(dst, buf, len);

return len;

iconv_t cd;
char *inbuf;
const char *inbuf;
char *outbuf;
size_t inbytesleft, outbytesleft;


if (len == 0 || buf == NULL) {
strncpy((char*)dst, "", 1);
return 0;
}

if (utf8_encoding == NULL) {
ui_msg("You must set an encoding type before using UTF8.\n");
return 0;
}

inbuf = (char *)buf;
inbytesleft = len;
outbuf = (char *)dst;

cd = iconv_open("UTF-8", utf8_encoding);

iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);

iconv_close(cd);

return len;
}