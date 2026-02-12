

_zip_crypto_aes_t *
_zip_crypto_aes_new(const zip_uint8_t *key, zip_uint16_t key_size, zip_error_t *error) {
_zip_crypto_aes_t *aes;

if ((aes = (_zip_crypto_aes_t *)malloc(sizeof(*aes))) == NULL) {
zip_error_set(error, ZIP_ER_MEMORY, 0);
return NULL;
}

aes->key_size = key_size;

switch (aes->key_size) {
case 128:
nettle_aes128_set_encrypt_key(&aes->ctx.ctx_128, key);
break;
case 192:
nettle_aes192_set_encrypt_key(&aes->ctx.ctx_192, key);
break;
case 256:
nettle_aes256_set_encrypt_key(&aes->ctx.ctx_256, key);
break;
default:
zip_error_set(error, ZIP_ER_INVAL, 0);
free(aes);
return NULL;
}

return aes;
}