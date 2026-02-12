crypto_pk_t *
crypto_pk_asn1_decode_private(const char *str, size_t len, int max_bits)
{
RSA *rsa;
unsigned char *buf;
const unsigned char *cp;
cp = buf = tor_malloc(len);
memcpy(buf,str,len);
rsa = d2i_RSAPrivateKey(NULL, &cp, len);
tor_free(buf);
if (!rsa) {
crypto_openssl_log_errors(LOG_WARN,"decoding private key");
return NULL;
}
if (max_bits >= 0 && rsa_private_key_too_long(rsa, max_bits)) {
log_info(LD_CRYPTO, "Private key longer than expected.");
RSA_free(rsa);
return NULL;
}
crypto_pk_t *result = crypto_new_pk_from_openssl_rsa_(rsa);
if (! crypto_pk_is_valid_private_key(result)) {
crypto_pk_free(result);
return NULL;
}
return result;
}