void h2o_hostinfo_getaddr_receiver(h2o_multithread_receiver_t *receiver, h2o_linklist_t *messages)
{
while (!h2o_linklist_is_empty(messages)) {
h2o_hostinfo_getaddr_req_t *req = H2O_STRUCT_FROM_MEMBER(h2o_hostinfo_getaddr_req_t, _out.message.link, messages->next);
h2o_linklist_unlink(&req->_out.message.link);
h2o_hostinfo_getaddr_cb cb = req->_cb;
if (cb != NULL) {
req->_cb = NULL;
cb(req, req->_out.errstr, req->_out.ai, req->cbdata);
}
if (req->_out.ai != NULL)
freeaddrinfo(req->_out.ai);
free(req);
}
}