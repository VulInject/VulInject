mainloop_io_t *
mainloop_add_ipc_client(const char *name, int priority, size_t max_size,
void *userdata, struct ipc_client_callbacks *callbacks)
{
crm_ipc_t *ipc = crm_ipc_new(name, max_size);
mainloop_io_t *source = NULL;
int rc = pcmk__add_mainloop_ipc(ipc, priority, userdata, callbacks,
&source);

if (rc != pcmk_rc_ok) {
if (crm_log_level == LOG_STDOUT) {
fprintf(stderr, "Connection to %s failed: %s",
name, pcmk_rc_str(rc));
}
crm_ipc_destroy(ipc);
if (rc > 0) {
errno = rc;
} else {
errno = ENOTCONN;
}
return NULL;
}
return source;
}