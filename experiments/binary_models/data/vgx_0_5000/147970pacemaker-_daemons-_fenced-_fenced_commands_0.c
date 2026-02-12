xmlNode *
fenced_construct_reply(const xmlNode *request, xmlNode *data,
const pcmk__action_result_t *result)
{
xmlNode *reply = NULL;

reply = create_xml_node(NULL, T_STONITH_REPLY);

crm_xml_add(reply, "st_origin", __func__);
crm_xml_add(reply, F_TYPE, T_STONITH_NG);
stonith__xe_set_result(reply, result);

if (request == NULL) {

crm_warn("Missing request information for client notifications for "
"operation with result '%s' (initiated before we came up?)",
pcmk_exec_status_str(result->execution_status));

} else {
const char *name = NULL;
const char *value = NULL;


const char *names[] = {
F_STONITH_OPERATION,
F_STONITH_CALLID,
F_STONITH_CLIENTID,
F_STONITH_CLIENTNAME,
F_STONITH_REMOTE_OP_ID,
F_STONITH_CALLOPTS
};

for (int lpc = 0; lpc < PCMK__NELEM(names); lpc++) {
name = names[lpc];
value = crm_element_value(request, name);
crm_xml_add(reply, name, value);
}
if (data != NULL) {
add_message_xml(reply, F_STONITH_CALLDATA, data);
}
}
return reply;
}