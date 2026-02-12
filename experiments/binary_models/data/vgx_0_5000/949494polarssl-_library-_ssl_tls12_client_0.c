static int ssl_parse_server_dh_params(mbedtls_ssl_context *ssl,
unsigned char **p,
unsigned char *end)
{
int ret = MBEDTLS_ERR_SSL_FEATURE_UNAVAILABLE;
size_t dhm_actual_bitlen;


if ((ret = mbedtls_dhm_read_params(&ssl->handshake->dhm_ctx,
p, end)) != 0) {
MBEDTLS_SSL_DEBUG_RET(2, ("mbedtls_dhm_read_params"), ret);
return ret;
}

dhm_actual_bitlen = mbedtls_dhm_get_bitlen(&ssl->handshake->dhm_ctx);
if (dhm_actual_bitlen < ssl->conf->dhm_min_bitlen) {
MBEDTLS_SSL_DEBUG_MSG(1, ("DHM prime too short: %" MBEDTLS_PRINTF_SIZET " < %u",
dhm_actual_bitlen,
ssl->conf->dhm_min_bitlen));
return MBEDTLS_ERR_SSL_HANDSHAKE_FAILURE;
}

MBEDTLS_SSL_DEBUG_MPI(3, "DHM: P ", &ssl->handshake->dhm_ctx.P);
MBEDTLS_SSL_DEBUG_MPI(3, "DHM: G ", &ssl->handshake->dhm_ctx.G);
MBEDTLS_SSL_DEBUG_MPI(3, "DHM: GY", &ssl->handshake->dhm_ctx.GY);

return ret;
}