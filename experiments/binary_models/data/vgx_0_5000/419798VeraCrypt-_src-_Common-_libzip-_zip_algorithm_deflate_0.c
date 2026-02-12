static bool
start(void *ud) {
struct ctx *ctx = (struct ctx *)ud;
int ret;

ctx->zstr.avail_in = 0;
ctx->zstr.next_in = NULL;
ctx->zstr.avail_out = 0;
ctx->zstr.next_out = NULL;

if (ctx->compress) {

ret = deflateInit2(&ctx->zstr, ctx->compression_flags, Z_DEFLATED, -MAX_WBITS, MAX_MEM_LEVEL, Z_DEFAULT_STRATEGY);
}
else {
ret = inflateInit2(&ctx->zstr, -MAX_WBITS);
}

if (ret != Z_OK) {
zip_error_set(ctx->error, ZIP_ER_ZLIB, ret);
return false;
}


return true;
}