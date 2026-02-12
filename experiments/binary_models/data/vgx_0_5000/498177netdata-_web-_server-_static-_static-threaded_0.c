static void *web_server_file_add_callback(POLLINFO *pi, short int *events, void *data) {
struct web_client *w = (struct web_client *)data;

worker_is_busy(WORKER_JOB_ADD_FILE);

worker_private->files_read++;

debug(D_WEB_CLIENT, "%llu: ADDED FILE READ ON FD %d", w->id, pi->fd);
*events = POLLIN;
pi->data = w;

worker_is_idle();
return w;
}