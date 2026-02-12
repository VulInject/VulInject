static void
audit_changestate(ucred_t *ucred, char *auth, char *path, char *connection,
int new_state, int old_state, int result)
{
adt_session_data_t	*session;
adt_event_data_t	*event;
int			pass_fail, fail_reason;

if (audit_session(ucred, &session) != 0)
return;

if ((event = adt_alloc_event(session, ADT_hotplug_state)) == NULL) {
(void) adt_end_session(session);
return;
}

if (result == 0) {
pass_fail = ADT_SUCCESS;
fail_reason = ADT_SUCCESS;
} else {
pass_fail = ADT_FAILURE;
fail_reason = result;
}

event->adt_hotplug_state.auth_used = auth;
event->adt_hotplug_state.device_path = path;
event->adt_hotplug_state.connection = connection;
event->adt_hotplug_state.new_state = state_str(new_state);
event->adt_hotplug_state.old_state = state_str(old_state);


if (adt_put_event(event, pass_fail, fail_reason) != 0)
log_err("Cannot put audit event.\n");

adt_free_event(event);
(void) adt_end_session(session);
}