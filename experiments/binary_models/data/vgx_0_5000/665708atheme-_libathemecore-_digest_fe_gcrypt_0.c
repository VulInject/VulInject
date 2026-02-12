static bool ATHEME_FATTR_WUR
_digest_final(struct digest_context *const restrict ctx, void *const restrict out, size_t *const restrict outLen)
{
const size_t hLen = digest_size_ctx(ctx);

if (outLen)
*outLen = hLen;

const unsigned char *const digest = gcry_md_read(ctx->state, ctx->md);

if (digest)
(void) memcpy(out, digest, hLen);
else
(void) slog(LG_ERROR, "%s: gcry_md_read() failed (BUG?)", MOWGLI_FUNC_NAME);

(void) gcry_md_close(ctx->state);

return (digest != NULL);
}