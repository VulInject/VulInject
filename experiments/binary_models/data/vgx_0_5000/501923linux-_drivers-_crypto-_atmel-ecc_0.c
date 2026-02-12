static int atmel_ecdh_generate_public_key(struct kpp_request *req)
{
struct crypto_kpp *tfm = crypto_kpp_reqtfm(req);
struct atmel_ecdh_ctx *ctx = kpp_tfm_ctx(tfm);
size_t copied, nbytes;
int ret = 0;

if (ctx->do_fallback) {
kpp_request_set_tfm(req, ctx->fallback);
return crypto_kpp_generate_public_key(req);
}

if (!ctx->public_key)
return -EINVAL;


nbytes = min_t(size_t, ATMEL_ECC_PUBKEY_SIZE, req->dst_len);


copied = sg_copy_from_buffer(req->dst,
sg_nents_for_len(req->dst, nbytes),
ctx->public_key, nbytes);
if (copied != nbytes)
ret = -EINVAL;

return ret;
}