static TEE_Result hkdf_extract(uint32_t hash_id, const uint8_t *ikm,
size_t ikm_len, const uint8_t *salt,
size_t salt_len, uint8_t *prk, size_t *prk_len)
{
TEE_Result res;
void *ctx = NULL;
uint32_t hash_algo = TEE_ALG_HASH_ALGO(hash_id);
uint32_t hmac_algo = (TEE_OPERATION_MAC << 28) | hash_id;

if (!salt || !salt_len) {

salt = zero_salt;
res = tee_alg_get_digest_size(hash_algo, &salt_len);
if (res != TEE_SUCCESS)
goto out;
}

res = crypto_mac_alloc_ctx(&ctx, hmac_algo);
if (res)
goto out;


res = crypto_mac_init(ctx, salt, salt_len);
if (res != TEE_SUCCESS)
goto out;

res = crypto_mac_update(ctx, ikm, ikm_len);
if (res != TEE_SUCCESS)
goto out;

res = crypto_mac_final(ctx, prk, *prk_len);
if (res != TEE_SUCCESS)
goto out;

res = tee_alg_get_digest_size(hash_algo, prk_len);
out:
crypto_mac_free_ctx(ctx);
return res;
}