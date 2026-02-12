gboolean
cmd_change_password(ProfWin* window, const char* const command, gchar** args)
{
jabber_conn_status_t conn_status = connection_get_status();

if (conn_status != JABBER_CONNECTED) {
cons_show("You are not currently connected.");
return TRUE;
}

char* user = connection_get_user();
char* passwd = ui_ask_password(false);
char* confirm_passwd = ui_ask_password(true);

if (g_strcmp0(passwd, confirm_passwd) == 0) {
iq_register_change_password(user, passwd);
} else {
cons_show("Aborted! The new password and the confirmed password do not match.");
}

free(user);
free(passwd);
free(confirm_passwd);

return TRUE;
}