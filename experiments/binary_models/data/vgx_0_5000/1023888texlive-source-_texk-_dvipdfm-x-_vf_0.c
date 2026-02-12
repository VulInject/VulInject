static void vf_xxx (int32_t len, unsigned char **start, unsigned char *end)
{
if (*start <= end - len) {
unsigned char *buffer = NEW(len+1, unsigned char);
memcpy(buffer, *start, len);
buffer[len] = '\0';
{
unsigned char *p = buffer;

while (p < buffer+len && *p == ' ') p++;

if (!memcmp((char *)p, "Warning:", 8)) {
if (dpx_conf.verbose_level > 0)
WARN("VF:%s", p+8);
} else {
dvi_do_special(buffer, len);
}
}
RELEASE(buffer);
} else {
ERROR ("Premature end of DVI byte stream in VF font.");
}

*start += len;
return;
}