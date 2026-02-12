M_tls_protocols_t M_tls_get_protocol(M_io_t *io, size_t id)
{

M_io_layer_t      *layer  = M_io_layer_acquire(io, id, "TLS");
M_tls_protocols_t  ret    = M_TLS_PROTOCOL_INVALID;
M_io_handle_t     *handle = M_io_layer_get_handle(layer);
const struct {
const char        *name;
M_tls_protocols_t  protocol;
} versions[] = {
{ "TLSv1",   M_TLS_PROTOCOL_TLSv1_0 },
{ "TLSv1.1", M_TLS_PROTOCOL_TLSv1_1 },
{ "TLSv1.2", M_TLS_PROTOCOL_TLSv1_2 },
{ "TLSv1.3", M_TLS_PROTOCOL_TLSv1_3 },
{ NULL, 0 }
};

if (layer == NULL)
return ret;

if (handle->ssl != NULL) {
const char *const_temp = SSL_get_version(handle->ssl);
size_t      i;
for (i=0; versions[i].name != NULL; i++) {
if (M_str_caseeq(versions[i].name, const_temp)) {
ret = versions[i].protocol;
break;
}
}
}

M_io_layer_release(layer);

return ret;
}