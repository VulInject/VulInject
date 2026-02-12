int
ssh_digest_final(struct ssh_digest_ctx *ctx, u_char *d, size_t dlen)
{
const struct ssh_digest *digest = ssh_digest_by_alg(ctx->alg);
u_int l = dlen;

if (digest == NULL || dlen > UINT_MAX)
return SSH_ERR_INVALID_ARGUMENT;
if (dlen < digest->digest_len) 
return SSH_ERR_INVALID_ARGUMENT;
if (EVP_DigestFinal_ex(ctx->mdctx, d, &l) != 1)
return SSH_ERR_LIBCRYPTO_ERROR;
if (l != digest->digest_len) 
return SSH_ERR_INTERNAL_ERROR;
return 0;
}