PyObject *py_uwsgi_tornado_request(PyObject *self, PyObject *args) {
int fd = -1;
PyObject *events = NULL;
if (!PyArg_ParseTuple(args, "iO:uwsgi_tornado_request", &fd, &events)) {
uwsgi_log_verbose("[BUG] invalid arguments for tornado callback !!!\n");
exit(1);
}

struct wsgi_request *wsgi_req = find_wsgi_req_proto_by_fd(fd);
uwsgi.wsgi_req = wsgi_req;

int status = wsgi_req->socket->proto(wsgi_req);
if (status > 0) goto again;
if (PyObject_CallMethod(utornado.ioloop, "remove_handler", "i", fd) == NULL) {
PyErr_Print();
goto end;
}

if (status == 0) {

uwsgi.async_proto_fd_table[wsgi_req->fd] = NULL;
uwsgi.schedule_to_req();
goto again;
}

end:
uwsgi.async_proto_fd_table[wsgi_req->fd] = NULL;
uwsgi_close_request(uwsgi.wsgi_req);	
free_req_queue;
again:
Py_INCREF(Py_None);
return Py_None;
}