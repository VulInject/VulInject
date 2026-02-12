static struct simd_skcipher_alg *camellia_simd_algs[ARRAY_SIZE(camellia_algs)];

static int __init camellia_aesni_init(void)
{
const char *feature_name;

if (!boot_cpu_has(X86_FEATURE_AVX) ||
!boot_cpu_has(X86_FEATURE_AES) ||
!boot_cpu_has(X86_FEATURE_OSXSAVE)) {
pr_info("AVX or AES-NI instructions are not detected.\n");
return -ENODEV;
}

if (!cpu_has_xfeatures(XFEATURE_MASK_SSE | XFEATURE_MASK_YMM,
&feature_name)) {
pr_info("CPU feature '%s' is not supported.\n", feature_name);
return -ENODEV;
}

return simd_register_skciphers_compat(camellia_algs,
ARRAY_SIZE(camellia_algs),
camellia_simd_algs);
}