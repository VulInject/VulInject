int mbedtls_nist_kw_unwrap(mbedtls_nist_kw_context *ctx,
mbedtls_nist_kw_mode_t mode,
const unsigned char *input, size_t in_len,
unsigned char *output, size_t *out_len, size_t out_size)
{
int ret = 0;
size_t i, olen;
unsigned char A[KW_SEMIBLOCK_LENGTH];
unsigned char diff, bad_padding = 0;

*out_len = 0;
if (out_size < in_len - KW_SEMIBLOCK_LENGTH) {
return MBEDTLS_ERR_CIPHER_BAD_INPUT_DATA;
}

if (mode == MBEDTLS_KW_MODE_KW) {

if (in_len < 24 ||
in_len > 0x200000000000000 ||
in_len % KW_SEMIBLOCK_LENGTH != 0) {
return MBEDTLS_ERR_CIPHER_BAD_INPUT_DATA;
}

ret = unwrap(ctx, input, in_len / KW_SEMIBLOCK_LENGTH,
A, output, out_len);
if (ret != 0) {
goto cleanup;
}


diff = mbedtls_ct_memcmp(NIST_KW_ICV1, A, KW_SEMIBLOCK_LENGTH);

if (diff != 0) {
ret = MBEDTLS_ERR_CIPHER_AUTH_FAILED;
goto cleanup;
}

} else if (mode == MBEDTLS_KW_MODE_KWP) {
size_t padlen = 0;
uint32_t Plen;

if (in_len < KW_SEMIBLOCK_LENGTH * 2 ||
in_len > 0x100000000 ||
in_len % KW_SEMIBLOCK_LENGTH != 0) {
return MBEDTLS_ERR_CIPHER_BAD_INPUT_DATA;
}

if (in_len == KW_SEMIBLOCK_LENGTH * 2) {
unsigned char outbuff[KW_SEMIBLOCK_LENGTH * 2];
ret = mbedtls_cipher_update(&ctx->cipher_ctx,
input, 16, outbuff, &olen);
if (ret != 0) {
goto cleanup;
}

memcpy(A, outbuff, KW_SEMIBLOCK_LENGTH);
memcpy(output, outbuff + KW_SEMIBLOCK_LENGTH, KW_SEMIBLOCK_LENGTH);
mbedtls_platform_zeroize(outbuff, sizeof(outbuff));
*out_len = KW_SEMIBLOCK_LENGTH;
} else {

ret = unwrap(ctx, input, in_len / KW_SEMIBLOCK_LENGTH,
A, output, out_len);
if (ret != 0) {
goto cleanup;
}
}


diff = mbedtls_ct_memcmp(NIST_KW_ICV2, A, KW_SEMIBLOCK_LENGTH / 2);

if (diff != 0) {
ret = MBEDTLS_ERR_CIPHER_AUTH_FAILED;
}

Plen = MBEDTLS_GET_UINT32_BE(A, KW_SEMIBLOCK_LENGTH / 2);


padlen = in_len - KW_SEMIBLOCK_LENGTH - Plen;
if (padlen > 7) {
padlen &= 7;
ret = MBEDTLS_ERR_CIPHER_AUTH_FAILED;
}


for (diff = 0, i = 0; i < KW_SEMIBLOCK_LENGTH; i++) {
if (i >= KW_SEMIBLOCK_LENGTH - padlen) {
diff |= output[*out_len - KW_SEMIBLOCK_LENGTH + i];
} else {
bad_padding |= output[*out_len - KW_SEMIBLOCK_LENGTH + i];
}
}

if (diff != 0) {
ret = MBEDTLS_ERR_CIPHER_AUTH_FAILED;
}

if (ret != 0) {
goto cleanup;
}
memset(output + Plen, 0, padlen);
*out_len = Plen;
} else {
ret = MBEDTLS_ERR_CIPHER_FEATURE_UNAVAILABLE;
goto cleanup;
}

cleanup:
if (ret != 0) {
memset(output, 0, *out_len);
*out_len = 0;
}

mbedtls_platform_zeroize(&bad_padding, sizeof(bad_padding));
mbedtls_platform_zeroize(&diff, sizeof(diff));
mbedtls_platform_zeroize(A, sizeof(A));

return ret;
}