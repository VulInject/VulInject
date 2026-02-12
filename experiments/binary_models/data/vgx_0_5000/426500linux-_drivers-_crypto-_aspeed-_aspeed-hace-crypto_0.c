static int aspeed_sk_transfer(struct aspeed_hace_dev *hace_dev)
{
struct aspeed_engine_crypto *crypto_engine = &hace_dev->crypto_engine;
struct aspeed_cipher_reqctx *rctx;
struct skcipher_request *req;
struct scatterlist *out_sg;
int nbytes = 0;
int rc = 0;

req = crypto_engine->req;
rctx = skcipher_request_ctx(req);
out_sg = req->dst;


nbytes = sg_copy_from_buffer(out_sg, rctx->dst_nents,
crypto_engine->cipher_addr, req->cryptlen);
if (!nbytes) {
dev_warn(hace_dev->dev, "invalid sg copy, %s:0x%x, %s:0x%x\n",
"nbytes", nbytes, "cryptlen", req->cryptlen);
rc = -EINVAL;
}

CIPHER_DBG(hace_dev, "%s:%d, %s:%d, %s:%d, %s:%p\n",
"nbytes", nbytes, "req->cryptlen", req->cryptlen,
"nb_out_sg", rctx->dst_nents,
"cipher addr", crypto_engine->cipher_addr);

return aspeed_sk_complete(hace_dev, rc);
}