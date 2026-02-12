static void emit_server_timing_element(h2o_req_t *req, h2o_iovec_t *dst, const char *name,
int (*compute_func)(h2o_req_t *, int64_t *), size_t max_len)
{
int64_t usec;
if (compute_func(req, &usec) == 0)
return;
if (dst->len == 0) {
if (max_len != SIZE_MAX)
dst->base = h2o_mem_alloc_pool(&req->pool, *dst->base, max_len);
} else {
dst->base[dst->len++] = ',';
dst->base[dst->len++] = ' ';
}
size_t name_len = strlen(name);
memcpy(dst->base + dst->len, name, name_len);
dst->len += name_len;
dst->base[dst->len++] = ';';
dst->base[dst->len++] = ' ';
dst->len += stringify_duration(dst->base + dst->len, usec);
}