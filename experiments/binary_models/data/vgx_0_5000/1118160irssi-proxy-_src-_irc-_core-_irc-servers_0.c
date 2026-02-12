void irc_server_send_away(IRC_SERVER_REC *server, const char *reason)
{
char *recoded = NULL;

if (!IS_IRC_SERVER(server))
return;

if (*reason != '\0' || server->usermode_away) {
g_free_and_null(server->away_reason);
if (*reason != '\0') {
server->away_reason = g_strdup(reason);
reason = recoded = recode_out(SERVER(server), reason, NULL);
}

irc_send_cmdv(server, "AWAY :%s", reason);
}
g_free(recoded);
}