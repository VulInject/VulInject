static int on_req(h2o_handler_t *_self, h2o_req_t *req)
{
struct rp_handler_t *self = (void *)_self;
h2o_req_overrides_t *overrides = h2o_mem_alloc_pool(&req->pool, *overrides, 1);
struct rp_handler_context_t *handler_ctx = h2o_context_get_handler_context(req->conn->ctx, &self->super);


*overrides = (h2o_req_overrides_t){NULL};
overrides->connpool = &handler_ctx->connpool;
overrides->location_rewrite.path_prefix = req->pathconf->path;
overrides->use_proxy_protocol = self->config.use_proxy_protocol;
overrides->client_ctx = handler_ctx->client_ctx;
overrides->headers_cmds = self->config.headers_cmds;
overrides->proxy_preserve_host = self->config.preserve_host;
overrides->forward_close_connection = self->config.forward_close_connection;


h2o_iovec_t path = h2o_build_destination(req, NULL, 0, 0);
h2o_reprocess_request(req, req->method, req->scheme, req->authority, path, overrides, 0);

return 0;
}