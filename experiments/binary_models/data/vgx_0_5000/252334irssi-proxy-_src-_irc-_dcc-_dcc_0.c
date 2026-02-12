static void cmd_dcc_close(char *data, IRC_SERVER_REC *server)
{
GSList *tmp, *next;
char *typestr, *nick, *arg;
void *free_arg;
int found, type;

g_return_if_fail(data != NULL);

if (!cmd_get_params(data, &free_arg, 3 | PARAM_FLAG_GETREST,
&typestr, &nick, &arg))
return;

if (*nick == '\0') cmd_param_error(CMDERR_NOT_ENOUGH_PARAMS);

g_strup(typestr);
type = dcc_str2type(typestr);
if (type == -1) {
signal_emit("dcc error unknown type", 1, typestr);
cmd_params_free(free_arg);
return;
}

found = FALSE;
for (tmp = dcc_conns; tmp != NULL; tmp = next) {
DCC_REC *dcc = tmp->data;

next = tmp->next;
if (dcc->type == type && g_strcasecmp(dcc->nick, nick) == 0 &&
(*arg == '\0' || strcmp(dcc->arg, arg) == 0)) {
dcc_reject(dcc, server);
found = TRUE;
}
}

if (!found) {
signal_emit("dcc error close not found", 3,
typestr, nick, arg);
}

cmd_params_free(free_arg);
}