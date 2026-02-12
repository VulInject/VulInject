static void fn(struct mg_connection *c, int ev, void *ev_data, void *fn_data) {
if (ev == MG_EV_HTTP_MSG) {
struct mg_http_message *hm = (struct mg_http_message *) ev_data;
if (mg_http_match_uri(hm, "/api/watch")) {
mg_ws_upgrade(c, hm, NULL);  
c->data[0] = 'W';           
} else {
struct mg_http_serve_opts opts = {.root_dir = s_web_root};
mg_http_serve_dir(c, ev_data, &opts);
}
}
(void) fn_data;
}