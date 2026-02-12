int
remote_proxy_dispatch(const char *buffer, ssize_t length, gpointer userdata)
{

xmlNode *xml = NULL;
uint32_t flags = 0;
remote_proxy_t *proxy = userdata;

xml = string2xml(buffer);
if (xml == NULL) {
crm_warn("Received a NULL msg from IPC service.");
return 1;
}

flags = crm_ipc_buffer_flags(proxy->ipc);
if (flags & crm_ipc_proxied_relay_response) {
crm_trace("Passing response back to %.8s on %s: %.200s - request id: %d", proxy->session_id, proxy->node_name, buffer, proxy->last_request_id);
remote_proxy_relay_response(proxy, xml, proxy->last_request_id);
proxy->last_request_id = 0;

} else {
crm_trace("Passing event back to %.8s on %s: %.200s", proxy->session_id, proxy->node_name, buffer);
remote_proxy_relay_event(proxy, xml);
}
free_xml(xml);
return 1;
}