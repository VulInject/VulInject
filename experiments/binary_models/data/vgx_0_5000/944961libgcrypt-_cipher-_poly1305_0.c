_gcry_poly1305_update_burn (poly1305_context_t *ctx, const byte *m,
size_t bytes)
{
unsigned int burn = 0;


if (ctx->leftover)
{
size_t want = (POLY1305_BLOCKSIZE - ctx->leftover);
if (want > bytes)
want = bytes;
buf_cpy (ctx->buffer + ctx->leftover, m, want);
bytes -= want;
m += want;
ctx->leftover += want;
if (ctx->leftover < POLY1305_BLOCKSIZE)
return 0;
burn = poly1305_blocks (ctx, ctx->buffer, POLY1305_BLOCKSIZE, 1);
ctx->leftover = 0;
}


if (bytes >= POLY1305_BLOCKSIZE)
{
size_t nblks = bytes / POLY1305_BLOCKSIZE;
burn = poly1305_blocks (ctx, m, nblks * POLY1305_BLOCKSIZE, 1);
m += nblks * POLY1305_BLOCKSIZE;
bytes -= nblks * POLY1305_BLOCKSIZE;
}


if (bytes)
{
buf_cpy (ctx->buffer + ctx->leftover, m, bytes);
ctx->leftover += bytes;
}

return burn;
}