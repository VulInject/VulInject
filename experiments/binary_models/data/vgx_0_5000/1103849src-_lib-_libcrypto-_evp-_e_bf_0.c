static int
bf_ofb_cipher(EVP_CIPHER_CTX *ctx, unsigned char *out, const unsigned char *in, size_t inl)
{
size_t chunk = LONG_MAX & ~0xff;

while (inl >= chunk) {
BF_ofb64_encrypt(in, out, (long)chunk, &((EVP_BF_KEY *)ctx->cipher_data)->ks, ctx->iv, &ctx->num);
inl -= chunk;
in += chunk;
out += chunk;
}

if (inl)
BF_ofb64_encrypt(in, out, (long)inl, &((EVP_BF_KEY *)ctx->cipher_data)->ks, ctx->iv, &ctx->num);

return 1;
}