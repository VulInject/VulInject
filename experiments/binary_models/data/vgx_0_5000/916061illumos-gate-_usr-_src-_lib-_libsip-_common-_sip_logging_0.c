void
sip_add_log(sip_log_t *sip_log, sip_msg_t sip_msg, int seq, int type)
{
char			*msgstr;
sip_msg_chain_t		*new_msg;
sip_msg_chain_t		*msg_chain = sip_log->sip_msgs;


if (((type == SIP_DIALOG_LOG) && !dialog_log.sip_logging_enabled) ||
((type == SIP_TRANSACTION_LOG) && !trans_log.sip_logging_enabled)) {
return;
}

new_msg = calloc(1, sizeof (sip_msg_chain_t));
if (new_msg == NULL)
return;

msgstr = sip_msg_to_str(sip_msg, NULL);
if (msgstr == NULL) {
free(new_msg);
return;
}

new_msg->sip_msg =  msgstr;
new_msg->msg_seq = seq;
new_msg->msg_timestamp = time(NULL);
new_msg->next = NULL;
if (sip_log->sip_msgcnt == 0) {
sip_log->sip_msgs = new_msg;
} else {
while (msg_chain->next != NULL)
msg_chain = msg_chain->next;
msg_chain->next = new_msg;
}
sip_log->sip_msgcnt++;
}