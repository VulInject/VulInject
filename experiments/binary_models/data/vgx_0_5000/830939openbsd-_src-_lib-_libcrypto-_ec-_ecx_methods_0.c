static int
pkey_ecx_derive(EVP_PKEY_CTX *pkey_ctx, unsigned char *out_key,
size_t *out_key_len)
{
struct ecx_key_st *ecx_key, *ecx_peer_key;

if (pkey_ctx->pkey == NULL || pkey_ctx->peerkey == NULL) {
ECerror(EC_R_KEYS_NOT_SET);
return 0;
}

if ((ecx_key = pkey_ctx->pkey->pkey.ecx) == NULL) {
ECerror(EC_R_INVALID_PRIVATE_KEY);
return 0;
}
if (ecx_key->priv_key == NULL) {
ECerror(EC_R_INVALID_PRIVATE_KEY);
return 0;
}

if ((ecx_peer_key = pkey_ctx->peerkey->pkey.ecx) == NULL) {
ECerror(EC_R_INVALID_PEER_KEY);
return 0;
}

if (out_key != NULL) {
if (!X25519(out_key, ecx_key->priv_key, ecx_peer_key->pub_key))
return 0;
}

*out_key_len = X25519_KEYLEN;

return 1;
}