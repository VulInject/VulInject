static int _proxy_beconn_checkconnect(mcp_backend_t *be) {
int err = 0;

if (mcmc_check_nonblock_connect(be->client, &err) != MCMC_OK) {
P_DEBUG("%s: backend failed to connect (%s:%s)\n", __func__, be->name, be->port);



_reset_bad_backend(be, P_BE_FAIL_CONNECTING);
_backend_failed(be);
return -1;
}
P_DEBUG("%s: backend connected (%s:%s)\n", __func__, be->name, be->port);
be->connecting = false;
be->state = mcp_backend_read;
be->bad = false;
be->failed_count = 0;

be->validating = true;


if (_beconn_send_validate(be) == -1) {
_reset_bad_backend(be, P_BE_FAIL_BADVALIDATE);
_backend_failed(be);
return -1;
} else {

assert(be->rbufused == 0);
return 0;
}
}