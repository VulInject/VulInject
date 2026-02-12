int mbedtls_dhm_make_public(mbedtls_dhm_context *ctx, int x_size,
unsigned char *output, size_t olen,
int (*f_rng)(void *, unsigned char *, size_t),
void *p_rng)
{
int ret;

if (olen < 1 || olen > mbedtls_dhm_get_len(ctx)) {
return MBEDTLS_ERR_DHM_BAD_INPUT_DATA;
}

ret = dhm_make_common(ctx, x_size, f_rng, p_rng);
if (ret == MBEDTLS_ERR_DHM_MAKE_PARAMS_FAILED) {
return MBEDTLS_ERR_DHM_MAKE_PUBLIC_FAILED;
}
if (ret != 0) {
goto cleanup;
}

MBEDTLS_MPI_CHK(mbedtls_mpi_write_binary(&ctx->GX, output, olen));

cleanup:
if (ret != 0 && ret > -128) {
ret = MBEDTLS_ERROR_ADD(MBEDTLS_ERR_DHM_MAKE_PUBLIC_FAILED, ret);
}
return ret;
}