static TEE_Result crypto_aes_ccm_enc_final(struct crypto_authenc_ctx *aectx,
const uint8_t *src_data,
size_t len, uint8_t *dst_data,
uint8_t *dst_tag,
size_t *dst_tag_len)
{
TEE_Result res = TEE_SUCCESS;
struct tee_ccm_state *ccm = to_tee_ccm_state(aectx);
int ltc_res = 0;


res = crypto_aes_ccm_update_payload(aectx, TEE_MODE_ENCRYPT, src_data,
len, dst_data);
if (res != TEE_SUCCESS)
return res;


if (*dst_tag_len < ccm->tag_len) {
*dst_tag_len = ccm->tag_len;
return TEE_ERROR_SHORT_BUFFER;
}
*dst_tag_len = ccm->tag_len;


ltc_res = ccm_done(&ccm->ctx, dst_tag,
(unsigned long *)dst_tag_len);
if (ltc_res != CRYPT_OK)
return TEE_ERROR_BAD_STATE;

return TEE_SUCCESS;
}