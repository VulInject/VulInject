void pr_session_disconnect(module *m, int reason_code,
const char *details) {
int flags = 0;

session.disconnect_reason = reason_code;
session.disconnect_module = m;

if (details != NULL &&
session.notes != NULL) {

if (pr_table_add_dup(session.notes, "core.disconnect-details",
(char *) details, 0) < 0) {
int xerrno = errno;

if (xerrno != EEXIST) {
pr_log_debug(DEBUG5, "error stashing 'core.disconnect-details' in "
"session.notes: %s", strerror(xerrno));
}
}
}

if (reason_code == PR_SESS_DISCONNECT_SEGFAULT) {
flags |= PR_SESS_END_FL_ERROR;
}

pr_session_end(flags);
}