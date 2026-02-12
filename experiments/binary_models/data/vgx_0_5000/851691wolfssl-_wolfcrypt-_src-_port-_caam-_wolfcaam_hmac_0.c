



int wc_CAAM_Hmac(Hmac* hmac, int macType, const byte* msg, int msgSz,
byte* digest)
{
int ret = 0;

if (hmac->ctx.cfd == -1 && hmac->keyLen > 0) {
ret = wc_DevCrypto_HmacSetKey(hmac, macType, hmac->keyRaw,
hmac->keyLen);
if (ret != 0) {
WOLFSSL_MSG("Error with set key");
if (ret == HASH_TYPE_E) {
ret = CRYPTOCB_UNAVAILABLE; 
}
}
}

if (ret == 0 && msgSz > 0) {
ret = wc_DevCrypto_HmacUpdate(hmac, msg, msgSz);
if (ret != 0) {
WOLFSSL_MSG("Issue with hmac update");
}
}

if (ret == 0 && digest != NULL) {
ret = wc_DevCrypto_HmacFinal(hmac, digest);
if (ret != 0) {
WOLFSSL_MSG("Issue with hmac final");
}
else {
wc_DevCrypto_HmacFree(hmac);
}
}
return ret;
}