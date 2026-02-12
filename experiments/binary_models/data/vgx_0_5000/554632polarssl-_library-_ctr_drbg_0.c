static int ctr_drbg_self_test_entropy(void *data, unsigned char *buf,
size_t len)
{
const unsigned char *p = data;
memcpy(buf, p + test_offset, len);
test_offset += len;
return 0;
}

{                                       \
if (verbose != 0)                  \
mbedtls_printf("failed\n");  \
return 1;                        \
}



int mbedtls_ctr_drbg_self_test(int verbose)
{
mbedtls_ctr_drbg_context ctx;
unsigned char buf[sizeof(result_pr)];

mbedtls_ctr_drbg_init(&ctx);


if (verbose != 0) {
mbedtls_printf("  CTR_DRBG (PR = TRUE) : ");
}

test_offset = 0;
mbedtls_ctr_drbg_set_entropy_len(&ctx, MBEDTLS_CTR_DRBG_KEYSIZE);
mbedtls_ctr_drbg_set_nonce_len(&ctx, MBEDTLS_CTR_DRBG_KEYSIZE / 2);
CHK(mbedtls_ctr_drbg_seed(&ctx,
ctr_drbg_self_test_entropy,
(void *) entropy_source_pr,
pers_pr, MBEDTLS_CTR_DRBG_KEYSIZE));
mbedtls_ctr_drbg_set_prediction_resistance(&ctx, MBEDTLS_CTR_DRBG_PR_ON);
CHK(mbedtls_ctr_drbg_random(&ctx, buf, SELF_TEST_OUTPUT_DISCARD_LENGTH));
CHK(mbedtls_ctr_drbg_random(&ctx, buf, sizeof(result_pr)));
CHK(memcmp(buf, result_pr, sizeof(result_pr)));

mbedtls_ctr_drbg_free(&ctx);

if (verbose != 0) {
mbedtls_printf("passed\n");
}


if (verbose != 0) {
mbedtls_printf("  CTR_DRBG (PR = FALSE): ");
}

mbedtls_ctr_drbg_init(&ctx);

test_offset = 0;
mbedtls_ctr_drbg_set_entropy_len(&ctx, MBEDTLS_CTR_DRBG_KEYSIZE);
mbedtls_ctr_drbg_set_nonce_len(&ctx, MBEDTLS_CTR_DRBG_KEYSIZE / 2);
CHK(mbedtls_ctr_drbg_seed(&ctx,
ctr_drbg_self_test_entropy,
(void *) entropy_source_nopr,
pers_nopr, MBEDTLS_CTR_DRBG_KEYSIZE));
CHK(mbedtls_ctr_drbg_reseed(&ctx, NULL, 0));
CHK(mbedtls_ctr_drbg_random(&ctx, buf, SELF_TEST_OUTPUT_DISCARD_LENGTH));
CHK(mbedtls_ctr_drbg_random(&ctx, buf, sizeof(result_nopr)));
CHK(memcmp(buf, result_nopr, sizeof(result_nopr)));

mbedtls_ctr_drbg_free(&ctx);

if (verbose != 0) {
mbedtls_printf("passed\n");
}

if (verbose != 0) {
mbedtls_printf("\n");
}

return 0;
}