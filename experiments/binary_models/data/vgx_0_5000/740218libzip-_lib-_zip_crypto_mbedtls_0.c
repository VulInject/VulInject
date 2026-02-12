_zip_crypto_hmac_t *
_zip_crypto_hmac_new(const zip_uint8_t *secret, zip_uint64_t secret_length, zip_error_t *error) {
_zip_crypto_hmac_t *hmac;

if (secret_length > INT_MAX) {
zip_error_set(error, ZIP_ER_INVAL, 0);
return NULL;
}

if ((hmac = (_zip_crypto_hmac_t *)malloc(sizeof(*hmac))) == NULL) {
zip_error_set(error, ZIP_ER_MEMORY, 0);
return NULL;
}

mbedtls_md_init(hmac);

if (mbedtls_md_setup(hmac, mbedtls_md_info_from_type(MBEDTLS_MD_SHA1), 1) != 0) {
zip_error_set(error, ZIP_ER_INTERNAL, 0);
free(hmac);
return NULL;
}

if (mbedtls_md_hmac_starts(hmac, (const unsigned char *)secret, (size_t)secret_length) != 0) {
zip_error_set(error, ZIP_ER_INTERNAL, 0);
free(hmac);
return NULL;
}

return hmac;
}