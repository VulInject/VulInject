static void connect_cb(struct evhttp_request *proxy_req, void *arg)
{
struct connect_base *base = arg;
struct evhttp_connection *evcon = base->evcon;
struct evhttp_uri *location = base->location;
struct evhttp_request *req;
char buffer[URL_MAX];

VERIFY(proxy_req);
VERIFY(evcon);

req = evhttp_request_new(get_cb, NULL);
evhttp_add_header(req->output_headers, "Connection", "close");
evhttp_add_header(req->output_headers, "Host", evhttp_uri_get_host(location));
VERIFY(!evhttp_make_request(evcon, req, EVHTTP_REQ_GET,
uri_path(location, buffer)));
}