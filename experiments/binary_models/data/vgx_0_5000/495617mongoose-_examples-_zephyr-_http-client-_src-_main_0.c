static void sfn(struct mg_connection *c, int ev, void *ev_data, void *fn_data) {
if (ev == MG_EV_SNTP_TIME) {
int64_t t = *(int64_t *) ev_data;
MG_INFO(("Got SNTP time: %lld ms from epoch", t));
s_boot_timestamp = (time_t) ((t - mg_millis()) / 1000);

if (!s_connected) {
MG_INFO(("Connecting to    : [%s]", s_url));
mg_http_connect(&s_mgr, s_url, fn, &done);  
s_connected = 1;
}
} else if (ev == MG_EV_CLOSE) {
s_sntp_conn = NULL;
}
}