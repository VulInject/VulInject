static void *dumb_loop_run(void *arg1) {


long core_id = (long) arg1;


if (uwsgi.threads > 1) {

struct wsgi_request *wsgi_req = &uwsgi.workers[uwsgi.mywid].cores[core_id].req;

uwsgi_setup_thread_req(core_id, wsgi_req);
}


char *str_core = uwsgi_num2str(core_id);

while (uwsgi.workers[uwsgi.mywid].manage_next_request) {
if (uwsgi.p[dumbloop_modifier1]->code_string) {

uwsgi.p[dumbloop_modifier1]->code_string("uwsgi_dumbloop", dumbloop_code, dumbloop_function, str_core, strlen(str_core));
}
else {
uwsgi_log("the requested plugin does not support code_string hook\n");
exit(1);
}
}

free(str_core);
return NULL;
}