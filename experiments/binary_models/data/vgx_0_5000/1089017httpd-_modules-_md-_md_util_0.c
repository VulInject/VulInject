static int pv_contains(link_ctx *ctx, const char *s)
{
apr_size_t pvstart = ctx->pv_start;
apr_size_t pvlen = ctx->pv_len;

if (ctx->s[pvstart] == '\"' && pvlen > 1) {
++pvstart;
pvlen -= 2;
}
if (pvlen > 0) {
apr_size_t slen = strlen(s);
link_ctx pvctx;
apr_size_t i;

memset(&pvctx, 0, sizeof(pvctx));
pvctx.s = ctx->s + pvstart;
pvctx.slen = pvlen;

for (i = 0; i < pvctx.slen; i = pvctx.i) {
skip_nonws(&pvctx);
if ((pvctx.i - i) == slen && !strncmp(s, pvctx.s + i, slen)) {
return 1;
}
skip_ws(&pvctx);
}
}
return 0;
}