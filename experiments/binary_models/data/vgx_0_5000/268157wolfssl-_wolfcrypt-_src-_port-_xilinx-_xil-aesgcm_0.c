int wc_AesGcmSetKey_ex(Aes* aes, const byte* key, word32 len, word32 kup)
{
int ret;

if (aes == NULL || key == NULL) {
return BAD_FUNC_ARG;
}

if (check_keysize(len)) {
return BAD_FUNC_ARG;
}

ret = wc_InitXsecure(&(aes->xSec));
if (ret != 0) {
WOLFSSL_MSG("Unable to initialize xSecure for AES-GCM");
return ret;
}
ret = XSecure_AesInitialize(&(aes->xSec.cinst));
if (ret != XST_SUCCESS) {
WOLFSSL_XIL_ERROR("Failed to initialize AES client instance", ret);
return WC_HW_E;
}
ret = XSecure_AesSetDpaCm(&(aes->xSec.cinst), 1);
if (ret != XST_SUCCESS) {
WOLFSSL_XIL_ERROR("Failed to enable AES DPA countermeasures", ret);
return WC_HW_E;
}
aes->keylen = len;
aes->kup = kup;
aes->xKeySize =
len == AES_128_KEY_SIZE ? XSECURE_AES_KEY_SIZE_128 :
XSECURE_AES_KEY_SIZE_256;
XMEMCPY(aes->keyInit, key, len);

return 0;
}