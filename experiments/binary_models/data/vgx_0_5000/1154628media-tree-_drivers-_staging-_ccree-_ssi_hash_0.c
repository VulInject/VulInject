static void ssi_hash_update_complete(struct device *dev, void *ssi_req, void __iomem *cc_base)
{
struct ahash_request *req = (struct ahash_request *)ssi_req;
struct ahash_req_ctx *state = ahash_request_ctx(req);

SSI_LOG_DEBUG("req=%pK\n", req);

ssi_buffer_mgr_unmap_hash_request(dev, state, req->src, false);
req->base.complete(&req->base, 0);
}