static void f_http_fetch_query(struct mg_connection *c, int ev, void *ev_data,
void *fn_data) {
static char *http_response = 0;
static bool http_response_allocated =
0;  
unsigned int http_responses_received = 0;
struct Post_reply *post_reply_l;
post_reply_l = (struct Post_reply *) fn_data;

if (ev == MG_EV_CONNECT) {
mg_printf(c, post_reply_l->post);
} else if (ev == MG_EV_HTTP_MSG) {
struct mg_http_message *hm = (struct mg_http_message *) ev_data;
http_responses_received++;
if (!http_response_allocated) {
http_response = (char *) mg_strdup(hm->message).ptr;
http_response_allocated = 1;
}
if (http_responses_received > 0) {
post_reply_l->http_response = http_response;
post_reply_l->http_responses_received = http_responses_received;
}
}
}