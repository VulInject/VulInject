static void fn(struct mg_connection *c, int ev, void *ev_data, void *fn_data) {
if (ev == MG_EV_HTTP_MSG) {

struct mg_http_message *hm = (struct mg_http_message *) ev_data;
struct thread_data *d = (struct thread_data *) calloc(1, sizeof(*d));
d->body = mg_strdup(hm->body);   
start_thread(worker_thread, d);  
*(void **) c->data = d;          
} else if (ev == MG_EV_POLL) {

struct thread_data *d = *(struct thread_data **) c->data;
size_t len;
char *buf;

if (d != NULL && (len = mg_queue_next(&d->queue, &buf)) > 0) {

mg_http_reply(c, 200, "", "%.*s\n", (int) len, buf);
mg_queue_del(&d->queue, len);  
*(void **) c->data = NULL;     
}
}
(void) fn_data;
}