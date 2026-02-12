TEE_Result crypto_acipher_alloc_dsa_keypair(struct dsa_keypair *key,
size_t size_bits)
{
TEE_Result ret = TEE_ERROR_NOT_IMPLEMENTED;
struct drvcrypt_dsa *dsa = NULL;
size_t l_bits = 0;
size_t n_bits = 0;

if (!key || !size_bits) {
CRYPTO_TRACE("Param error key @0x%" PRIxPTR " size %zu bits",
(uintptr_t)key, size_bits);
return TEE_ERROR_BAD_PARAMETERS;
}

ret = get_keys_size(size_bits, &l_bits, &n_bits);
if (ret == TEE_SUCCESS) {
dsa = drvcrypt_get_ops(CRYPTO_DSA);
if (dsa)
ret = dsa->alloc_keypair(key, l_bits, n_bits);
else
ret = TEE_ERROR_NOT_IMPLEMENTED;
}

CRYPTO_TRACE("DSA Keypair (%zu bits) alloc ret = 0x%" PRIx32, size_bits,
ret);
return ret;
}