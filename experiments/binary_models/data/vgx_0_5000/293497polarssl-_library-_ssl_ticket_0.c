static int ssl_ticket_update_keys(mbedtls_ssl_ticket_context *ctx)
{
((void) ctx);
if (ctx->ticket_lifetime != 0) {
mbedtls_time_t current_time = mbedtls_time(NULL);
mbedtls_time_t key_time = ctx->keys[ctx->active].generation_time;

psa_status_t status = PSA_ERROR_CORRUPTION_DETECTED;

if (current_time >= key_time &&
(uint64_t) (current_time - key_time) < ctx->ticket_lifetime) {
return 0;
}

ctx->active = 1 - ctx->active;

if ((status = psa_destroy_key(ctx->keys[ctx->active].key)) != PSA_SUCCESS) {
return psa_ssl_status_to_mbedtls(status);
}

return ssl_ticket_gen_key(ctx, ctx->active);
} else
return 0;
}