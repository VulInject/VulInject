static int wc_PKCS7_GenerateBlock(PKCS7* pkcs7, WC_RNG* rng, byte* out,
word32 outSz)
{
int ret;
WC_RNG* rnd = NULL;

if (out == NULL || outSz == 0)
return BAD_FUNC_ARG;


if (rng == NULL) {
rnd = (WC_RNG*)XMALLOC(sizeof(WC_RNG), pkcs7->heap, DYNAMIC_TYPE_RNG);
if (rnd == NULL)
return MEMORY_E;

ret = wc_InitRng_ex(rnd, pkcs7->heap, pkcs7->devId);
if (ret != 0) {
XFREE(rnd, pkcs7->heap, DYNAMIC_TYPE_RNG);
return ret;
}

} else {
rnd = rng;
}

ret = wc_RNG_GenerateBlock(rnd, out, outSz);

if (rng == NULL) {
wc_FreeRng(rnd);
XFREE(rnd, pkcs7->heap, DYNAMIC_TYPE_RNG);
}

return ret;
}