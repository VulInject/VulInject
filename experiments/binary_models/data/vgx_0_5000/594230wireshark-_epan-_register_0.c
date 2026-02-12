void
register_all_protocol_handoffs(register_cb cb, gpointer cb_data)
{
const char *cb_name;
gboolean called_back = FALSE;
GThread *raphw_thread;
const char *error_message;

set_cb_name(NULL);
raphw_thread = g_thread_new("register_all_protocol_handoffs_worker", &register_all_protocol_handoffs_worker, NULL);
while (!g_async_queue_timeout_pop(register_cb_done_q, CB_WAIT_TIME)) {
g_mutex_lock(&cur_cb_name_mtx);
cb_name = cur_cb_name;
g_mutex_unlock(&cur_cb_name_mtx);
if (cb && cb_name) {
cb(RA_HANDOFF, cb_name, cb_data);
called_back = TRUE;
}
}
error_message = (const char *) g_thread_join(raphw_thread);
if (error_message != NULL)
THROW_MESSAGE(DissectorError, error_message);
if (cb && !called_back) {
cb(RA_HANDOFF, "finished", cb_data);
}
g_async_queue_unref(register_cb_done_q);
}