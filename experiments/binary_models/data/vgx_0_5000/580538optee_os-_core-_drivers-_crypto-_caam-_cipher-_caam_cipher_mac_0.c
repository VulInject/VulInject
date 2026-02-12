static TEE_Result do_cmac_final(struct crypto_mac_ctx *ctx, uint8_t *digest,
size_t len)
{
TEE_Result ret = TEE_ERROR_GENERIC;
uint8_t *pad_src = NULL;
size_t pad_size = 0;
struct crypto_mac *mac = to_mac_ctx(ctx);
struct cipherdata *macdata = mac->ctx;
struct drvcrypt_cipher_update dupdate = { };

if (macdata->mode == TEE_CHAIN_MODE_CBC_MAC_PKCS5) {

pad_size = macdata->alg->size_block -
(macdata->countdata % macdata->alg->size_block);
CIPHER_TRACE("Pad size = %zu", pad_size);

if (pad_size) {

pad_src = caam_calloc(pad_size);
if (!pad_src) {
CIPHER_TRACE("Pad src allocation error");
return TEE_ERROR_OUT_OF_MEMORY;
}

memset(pad_src, pad_size, pad_size);
}
}


dupdate.ctx = macdata;
dupdate.encrypt = true;
dupdate.last = true;
dupdate.src.data = pad_src;
dupdate.src.length = pad_size;
dupdate.dst.data = digest;
dupdate.dst.length = MIN(len, macdata->alg->size_block);

ret = macdata->alg->update(&dupdate);

caam_free(pad_src);

return ret;
}