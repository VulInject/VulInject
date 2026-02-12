int tls_core_pre_conn_init(conn_rec *c)
{
tls_conf_server_t *sc = tls_conf_server_get(c->base_server);
tls_conf_conn_t *cc;

cc = cc_get_or_make(c);
if (cc->state == TLS_CONN_ST_INIT) {

int enabled =
!c->outgoing &&
sc->enabled == TLS_FLAG_TRUE;
cc->state = enabled? TLS_CONN_ST_CLIENT_HELLO : TLS_CONN_ST_DISABLED;
cc->client_auth = sc->client_auth;
ap_log_error(APLOG_MARK, APLOG_TRACE3, 0, c->base_server,
"tls_core_conn_init: %s for tls: %s",
enabled? "enabled" : "disabled", c->base_server->server_hostname);
}
else if (cc->state == TLS_CONN_ST_DISABLED) {
ap_log_error(APLOG_MARK, APLOG_TRACE4, 0, c->base_server,
"tls_core_conn_init, not our connection: %s",
c->base_server->server_hostname);
goto cleanup;
}

cleanup:
return TLS_CONN_ST_IS_ENABLED(cc)? OK : DECLINED;
}