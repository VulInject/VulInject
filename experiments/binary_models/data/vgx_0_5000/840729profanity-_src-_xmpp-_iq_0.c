static int
_room_role_set_result_id_handler(xmpp_stanza_t* const stanza, void* const userdata)
{
const char* id = xmpp_stanza_get_id(stanza);
const char* type = xmpp_stanza_get_type(stanza);
const char* from = xmpp_stanza_get_from(stanza);
ProfPrivilegeSet* role_set = (ProfPrivilegeSet*)userdata;

if (id) {
log_debug("IQ role set handler fired, id: %s.", id);
} else {
log_debug("IQ role set handler fired.");
}


if (g_strcmp0(type, STANZA_TYPE_ERROR) == 0) {
char* error_message = stanza_get_error_message(stanza);
log_debug("Error setting role %s list for room %s, user %s: %s", role_set->privilege, from, role_set->item, error_message);
ProfMucWin* mucwin = wins_get_muc(from);
if (mucwin) {
mucwin_role_set_error(mucwin, role_set->item, role_set->privilege, error_message);
}
free(error_message);
}

return 0;
}