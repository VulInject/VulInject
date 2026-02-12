chacha20_do_setkey (CHACHA20_context_t *ctx,
const byte *key, unsigned int keylen)
{
static int initialized;
static const char *selftest_failed;
unsigned int features = _gcry_get_hw_features ();

if (!initialized)
{
initialized = 1;
selftest_failed = selftest ();
if (selftest_failed)
log_error ("CHACHA20 selftest failed (%s)\n", selftest_failed);
}
if (selftest_failed)
return GPG_ERR_SELFTEST_FAILED;

if (keylen != CHACHA20_MAX_KEY_SIZE && keylen != CHACHA20_MIN_KEY_SIZE)
return GPG_ERR_INV_KEYLEN;

ctx->use_ssse3 = (features & HWF_INTEL_SSSE3) != 0;
ctx->use_avx2 = (features & HWF_INTEL_AVX2) != 0;
ctx->use_neon = (features & HWF_ARM_NEON) != 0;
ctx->use_neon = (features & HWF_ARM_NEON) != 0;
ctx->use_ppc = (features & HWF_PPC_ARCH_2_07) != 0;
ctx->use_s390x = (features & HWF_S390X_VX) != 0;

(void)features;

chacha20_keysetup (ctx, key, keylen);


chacha20_setiv (ctx, NULL, 0);

return 0;
}