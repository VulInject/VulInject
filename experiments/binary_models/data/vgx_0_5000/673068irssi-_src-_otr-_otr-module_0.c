



struct otr_user_state *user_state_global;


static void sig_server_sendmsg(SERVER_REC *server, const char *target,
const char *msg, void *target_type_p)
{
char *otrmsg = NULL;

if (GPOINTER_TO_INT(target_type_p) != SEND_TARGET_NICK) {
otrl_message_free(otrmsg);
return;
}


if (otr_send(server, msg, target, &otrmsg)) {
signal_stop();
otrl_message_free(otrmsg);
return;
}

if (otrmsg == NULL) {

signal_continue(4, server, target, msg, target_type_p);
} else {

signal_continue(4, server, target, otrmsg, target_type_p);
}

otrl_message_free(otrmsg);
}