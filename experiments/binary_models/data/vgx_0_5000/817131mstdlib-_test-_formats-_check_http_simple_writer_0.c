
START_TEST(check_request_headers)
{
M_hash_dict_t *headers;
char          *out;
size_t         out_len;
size_t         i;
struct {
M_hash_dict_t *(*header_cb)(void);
const char    *data;
M_bool         use_defs;
const char    *out;
} params[] = {
{ check_request_headers_cb1, req_data_req1, M_TRUE,  hreq_data_rsp1 },
{ check_request_headers_cb2, req_data_req1, M_TRUE,  hreq_data_rsp2 },
{ check_request_headers_cb3, req_data_req1, M_FALSE, hreq_data_rsp3 },
{ check_request_headers_cb4, NULL,          M_TRUE,  hreq_data_rsp4 },
{ check_request_headers_cb5, req_data_req1, M_TRUE,  hreq_data_rsp5 },
{ NULL, NULL, M_FALSE, NULL }
};

for (i=0; params[i].header_cb!=NULL; i++) {

headers = params[i].header_cb();


if (params[i].use_defs) {
out = (char *)M_http_simple_write_request(M_HTTP_METHOD_GET,
"localhost", 443, "/", "test", "t", headers,
(const unsigned char *)params[i].data, M_str_len(params[i].data), NULL, &out_len);
} else {
out = (char *)M_http_simple_write_request(M_HTTP_METHOD_GET,
NULL, 0, "/", NULL, NULL, headers,
(const unsigned char *)req_data_req1, M_str_len(req_data_req1), "", &out_len);
}

validate_output(out, &out_len, params[i].out, i);

M_free(out);
M_hash_dict_destroy(headers);
}
}