int md2_process(hash_state *md, const unsigned char *in, unsigned long inlen)
{
unsigned long n;
LTC_ARGCHK(md != NULL);
LTC_ARGCHK(in != NULL);
if (md-> md2 .curlen > sizeof(md-> md2 .buf)) {
return CRYPT_INVALID_ARG;
}
while (inlen > 0) {
n = MIN(inlen, (16 - md->md2.curlen));
XMEMCPY(md->md2.buf + md->md2.curlen, in, (size_t)n);
md->md2.curlen += n;
in             += n;
inlen          -= n;


if (md->md2.curlen == 16) {
s_md2_compress(md);
s_md2_update_chksum(md);
md->md2.curlen = 0;
}
}
return CRYPT_OK;
}