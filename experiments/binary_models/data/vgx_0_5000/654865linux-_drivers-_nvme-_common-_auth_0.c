static int nvme_auth_hash_skey(int hmac_id, u8 *skey, size_t skey_len, u8 *hkey)
{
const char *digest_name;
struct crypto_shash *tfm;
int ret;

digest_name = nvme_auth_digest_name(hmac_id);
if (!digest_name) {
pr_debug("%s: failed to get digest for %d\n", __func__,
hmac_id);
return -EINVAL;
}
tfm = crypto_alloc_shash(digest_name, 0, 0);
if (IS_ERR(tfm))
return -ENOMEM;

ret = crypto_shash_tfm_digest(tfm, skey, skey_len, hkey);
if (ret < 0)
pr_debug("%s: Failed to hash digest len %zu\n", __func__,
skey_len);

crypto_free_shash(tfm);
return ret;
}