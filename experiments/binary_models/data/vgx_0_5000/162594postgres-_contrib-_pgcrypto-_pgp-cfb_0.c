int
pgp_cfb_create(PGP_CFB **ctx_p, int algo, const uint8 *key, int key_len,
int resync, uint8 *iv)
{
int			res;
PX_Cipher  *ciph;
PGP_CFB    *ctx;

res = pgp_load_cipher(algo, &ciph);
if (res < 0)
return res;

res = px_cipher_init(ciph, key, key_len, NULL);
if (res < 0)
{
px_cipher_free(ciph);
return res;
}

ctx = palloc0(sizeof(*ctx));
ctx->ciph = ciph;
ctx->block_size = px_cipher_block_size(ciph);
ctx->resync = resync;

if (iv)
memcpy(ctx->fr, iv, ctx->block_size);

*ctx_p = ctx;
return 0;
}