TEE_Result crypto_acipher_gen_dsa_key(struct dsa_keypair *key, size_t key_size)
{
TEE_Result ret = TEE_ERROR_NOT_IMPLEMENTED;
struct drvcrypt_dsa *dsa = NULL;
size_t l_bits = 0;
size_t n_bits = 0;

if (!key || !key_size) {
CRYPTO_TRACE("Param error key @0x%" PRIxPTR " size %zu bits",
(uintptr_t)key, key_size);
return TEE_ERROR_BAD_PARAMETERS;
}

ret = get_keys_size(key_size, &l_bits, &n_bits);
if (ret == TEE_SUCCESS) {
dsa = drvcrypt_get_ops(CRYPTO_DSA);
if (dsa)
ret = dsa->gen_keypair(key, l_bits, n_bits);
else
ret = TEE_ERROR_NOT_IMPLEMENTED;
}

CRYPTO_TRACE("DSA Keypair (%zu bits) generate ret = 0x%" PRIx32,
key_size, ret);

return ret;
}