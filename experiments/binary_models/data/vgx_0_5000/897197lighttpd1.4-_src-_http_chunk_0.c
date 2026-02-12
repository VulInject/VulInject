int http_chunk_append_buffer(request_st * const r, buffer * const mem) {
size_t len = mem ? buffer_clen(mem) : 0;
if (0 == len) return 0;

chunkqueue * const cq = &r->write_queue;

if (http_chunk_uses_tempfile(cq, len)) {
int rc = http_chunk_append_to_tempfile(r, mem->ptr, len);
buffer_clear(mem);
return rc;
}

if (r->resp_send_chunked)
http_chunk_len_append(cq, len);


chunkqueue_append_buffer(cq, mem);

if (r->resp_send_chunked)
chunkqueue_append_mem(cq, CONST_STR_LEN("\r\n"));

return 0;
}