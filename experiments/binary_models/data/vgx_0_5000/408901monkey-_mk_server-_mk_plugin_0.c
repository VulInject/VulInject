int mk_plugin_http_request_end(struct mk_plugin *plugin,
struct mk_http_session *cs, int close)
{
int ret;
int con;
struct mk_http_request *sr;
struct mk_server *server = plugin->server_ctx;

MK_TRACE("[FD %i] PLUGIN HTTP REQUEST END", cs->socket);

cs->status = MK_REQUEST_STATUS_INCOMPLETE;
if (mk_list_is_empty(&cs->request_list) == 0) {
MK_TRACE("[FD %i] Tried to end non-existing request.", cs->socket);
return -1;
}

sr = mk_list_entry_last(&cs->request_list, struct mk_http_request, _head);
mk_plugin_stage_run_40(cs, sr, server);

if (close == MK_TRUE) {
cs->close_now = MK_TRUE;
}


ret = mk_http_request_end(cs, server);
MK_TRACE("[FD %i] HTTP session end = %i", cs->socket, ret);
if (ret < 0) {
con = mk_sched_event_close(cs->conn, mk_sched_get_thread_conf(),
MK_EP_SOCKET_DONE, server);
if (con != 0) {
return con;
}
else {
return -1;
}
}

return ret;
}