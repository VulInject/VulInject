static void cb(struct mg_connection *c, int ev, void *ev_data, void *fn_data) {
if (ev == MG_EV_HTTP_MSG) {
struct mg_http_message *hm = (struct mg_http_message *) ev_data;
MG_INFO(("New request to: [%.*s], body size: %lu", (int) hm->uri.len,
hm->uri.ptr, (unsigned long) hm->body.len));
if (mg_http_match_uri(hm, "/upload")) {
struct mg_http_part part;
size_t ofs = 0;
while ((ofs = mg_http_next_multipart(hm->body, ofs, &part)) > 0) {
MG_INFO(("Chunk name: [%.*s] filename: [%.*s] length: %lu bytes",
(int) part.name.len, part.name.ptr, (int) part.filename.len,
part.filename.ptr, (unsigned long) part.body.len));
}
mg_http_reply(c, 200, "", "Thank you!");
} else {
struct mg_http_serve_opts opts = {.root_dir = "web_root"};
mg_http_serve_dir(c, ev_data, &opts);
}
}
(void) fn_data;
}