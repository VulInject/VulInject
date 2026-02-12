int sx_ssl_client_starttls(sx_plugin_t p, sx_t s, const char *pemfile, const char *private_key_password) {
assert((int) (p != NULL));
assert((int) (s != NULL));


if(s->type != type_CLIENT || s->state != state_STREAM) {
_sx_debug(ZONE, "wrong conn type or state for client starttls");
return 1;
}


if(s->ssf > 0 || (s->flags & SX_COMPRESS_WRAPPER)) {
_sx_debug(ZONE, "encrypted channel already established");
return 1;
}

_sx_debug(ZONE, "initiating starttls sequence");


if(pemfile != NULL) {
s->plugin_data[p->index] = (_sx_ssl_conn_t) calloc(1, sizeof(struct _sx_ssl_conn_st));
((_sx_ssl_conn_t)s->plugin_data[p->index])->pemfile = strdup(pemfile);


if(private_key_password != NULL)
((_sx_ssl_conn_t)s->plugin_data[p->index])->private_key_password = strdup(private_key_password);
}


jqueue_push(s->wbufq, _sx_buffer_new("<starttls xmlns='" uri_TLS "'/>", strlen(uri_TLS) + 20, NULL, NULL), 0);
s->want_write = 1;
_sx_event(s, event_WANT_WRITE, NULL);

return 0;
}