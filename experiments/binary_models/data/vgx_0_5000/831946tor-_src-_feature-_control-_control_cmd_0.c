static int
handle_control_setevents(control_connection_t *conn,
const control_cmd_args_t *args)
{
int event_code;
event_mask_t event_mask = 0;
const smartlist_t *events = args->args;

SMARTLIST_FOREACH_BEGIN(events, const char *, ev)
{
if (!strcasecmp(ev, "EXTENDED") ||
!strcasecmp(ev, "AUTHDIR_NEWDESCS")) {
log_warn(LD_CONTROL, "The \"%s\" SETEVENTS argument is no longer "
"supported.", ev);
continue;
} else {
int i;
event_code = -1;

for (i = 0; control_event_table[i].event_name != NULL; ++i) {
if (!strcasecmp(ev, control_event_table[i].event_name)) {
event_code = control_event_table[i].event_code;
break;
}
}

if (event_code == -1) {
control_printf_endreply(conn, 552, "Unrecognized event \"%s\"", ev);
return 0;
}
}
event_mask |= (((event_mask_t)1) << event_code);
}
SMARTLIST_FOREACH_END(ev);

conn->event_mask = event_mask;

control_update_global_event_mask();
send_control_done(conn);
return 0;
}