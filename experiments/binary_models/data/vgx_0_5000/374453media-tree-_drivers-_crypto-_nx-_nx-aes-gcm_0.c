static int gcm4106_aes_nx_set_key(struct crypto_aead *tfm,
const u8           *in_key,
unsigned int        key_len)
{
struct nx_crypto_ctx *nx_ctx = crypto_aead_ctx(tfm);
char *nonce = nx_ctx->priv.gcm.nonce;
int rc;

if (key_len < 4)
return -EINVAL;

key_len -= 4;

rc = gcm_aes_nx_set_key(tfm, in_key, key_len);
if (rc)
goto out;

memcpy(nonce, in_key + key_len, 4);
out:
return rc;
}