static int aead_enqueue_req(struct device *jrdev, struct aead_request *req)
{
struct caam_drv_private_jr *jrpriv = dev_get_drvdata(jrdev);
struct caam_aead_req_ctx *rctx = aead_request_ctx(req);
struct aead_edesc *edesc = rctx->edesc;
u32 *desc = edesc->hw_desc;
int ret;


if (req->base.flags & CRYPTO_TFM_REQ_MAY_BACKLOG)
ret = crypto_transfer_aead_request_to_engine(jrpriv->engine,
req);
else
ret = caam_jr_enqueue(jrdev, desc, aead_crypt_done, req);

if ((ret != -EINPROGRESS) && (ret != -EBUSY)) {
aead_unmap(jrdev, edesc, req);
kfree(rctx->edesc);
}

return ret;
}