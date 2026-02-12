static void redirect_internally(h2o_redirect_handler_t *self, h2o_req_t *req, h2o_iovec_t dest)
{
h2o_iovec_t method;
h2o_url_t resolved;
if (h2o_req_resolve_internal_redirect_url(req, dest, &resolved) != 0) {
h2o_req_log_error(req, MODULE_NAME, "failed to resolve internal redirect url for dest:%.*s", (int)dest.len, dest.base);
h2o_send_error_503(req, "Internal Server Error", "internal server error", 0);
return;
}


switch (self->status) {
case 307:
case 308:
method = req->method;
break;
default:
method = h2o_iovec_init(H2O_STRLIT("GET"));
req->entity = (h2o_iovec_t){NULL};
break;
}

h2o_reprocess_request_deferred(req, method, resolved.scheme, resolved.authority, resolved.path, NULL, 1);
}