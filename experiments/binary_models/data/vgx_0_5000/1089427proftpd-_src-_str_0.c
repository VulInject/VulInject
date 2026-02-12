char *pr_str_bin2hex(pool *p, const unsigned char *buf, size_t len, int flags) {
static const char *hex_lc = "0123456789abcdef", *hex_uc = "0123456789ABCDEF";
register unsigned int i;
const char *hex_vals;
char *hex, *ptr;
size_t hex_len;

if (p == NULL ||
buf == NULL) {
errno = EINVAL;
return NULL;
}

if (len == 0) {
return pstrdup(p, "");
}


hex_vals = hex_lc;
if (flags & PR_STR_FL_HEX_USE_UC) {
hex_vals = hex_uc;
}

hex_len = (len * 2) + 1;
hex = palloc(p, hex_len);

ptr = hex;
for (i = 0; i < len; i++) {
*ptr++ = hex_vals[buf[i] >> 4];
*ptr++ = hex_vals[buf[i] % 16];
}
*ptr = '\0';

return hex;
}