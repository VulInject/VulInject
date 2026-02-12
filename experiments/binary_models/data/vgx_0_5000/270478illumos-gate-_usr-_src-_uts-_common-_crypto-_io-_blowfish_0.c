static int
blowfish_encrypt(crypto_ctx_t *ctx, crypto_data_t *plaintext,
crypto_data_t *ciphertext, crypto_req_handle_t req)
{
int ret;

blowfish_ctx_t *blowfish_ctx;


if ((plaintext->cd_length & (BLOWFISH_BLOCK_LEN - 1)) != 0)
return (CRYPTO_DATA_LEN_RANGE);

ASSERT(ctx->cc_provider_private != NULL);
blowfish_ctx = ctx->cc_provider_private;

BLOWFISH_ARG_INPLACE(plaintext, ciphertext);


if (ciphertext->cd_length < plaintext->cd_length) {
ciphertext->cd_length = plaintext->cd_length;
return (CRYPTO_BUFFER_TOO_SMALL);
}


ret = blowfish_encrypt_update(ctx, plaintext, ciphertext, req);
ASSERT(blowfish_ctx->bc_remainder_len  == 0);
(void) blowfish_free_context(ctx);


return (ret);
}