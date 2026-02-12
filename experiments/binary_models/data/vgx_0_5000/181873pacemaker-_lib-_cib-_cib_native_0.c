int
cib_native_perform_op_delegate(cib_t * cib, const char *op, const char *host, const char *section,
xmlNode * data, xmlNode ** output_data, int call_options,
const char *user_name)
{
int rc = pcmk_ok;
int reply_id = 0;
enum crm_ipc_flags ipc_flags = crm_ipc_flags_none;

xmlNode *op_msg = NULL;
xmlNode *op_reply = NULL;

cib_native_opaque_t *native = cib->variant_opaque;

if (cib->state == cib_disconnected) {
return -ENOTCONN;
}

if (output_data != NULL) {
*output_data = NULL;
}

if (op == NULL) {
crm_err("No operation specified");
return -EINVAL;
}

if (call_options & cib_sync_call) {
pcmk__set_ipc_flags(ipc_flags, "client", crm_ipc_client_response);
}

cib->call_id++;
if (cib->call_id < 1) {
cib->call_id = 1;
}

CRM_CHECK(native->token != NULL,;
);
op_msg =
cib_create_op(cib->call_id, native->token, op, host, section, data, call_options,
user_name);
if (op_msg == NULL) {
return -EPROTO;
}

crm_trace("Sending %s message to the CIB manager (timeout=%ds)", op, cib->call_timeout);
rc = crm_ipc_send(native->ipc, op_msg, ipc_flags, cib->call_timeout * 1000, &op_reply);
free_xml(op_msg);

if (rc < 0) {
crm_err("Couldn't perform %s operation (timeout=%ds): %s (%d)", op,
cib->call_timeout, pcmk_strerror(rc), rc);
rc = -ECOMM;
goto done;
}

crm_log_xml_trace(op_reply, "Reply");

if (!(call_options & cib_sync_call)) {
crm_trace("Async call, returning %d", cib->call_id);
CRM_CHECK(cib->call_id != 0, return -ENOMSG);
free_xml(op_reply);
return cib->call_id;
}

rc = pcmk_ok;
crm_element_value_int(op_reply, F_CIB_CALLID, &reply_id);
if (reply_id == cib->call_id) {
xmlNode *tmp = get_message_xml(op_reply, F_CIB_CALLDATA);

crm_trace("Synchronous reply %d received", reply_id);
if (crm_element_value_int(op_reply, F_CIB_RC, &rc) != 0) {
rc = -EPROTO;
}

if (output_data == NULL || (call_options & cib_discard_reply)) {
crm_trace("Discarding reply");

} else if (tmp != NULL) {
*output_data = copy_xml(tmp);
}

} else if (reply_id <= 0) {
crm_err("Received bad reply: No id set");
crm_log_xml_err(op_reply, "Bad reply");
rc = -ENOMSG;
goto done;

} else {
crm_err("Received bad reply: %d (wanted %d)", reply_id, cib->call_id);
crm_log_xml_err(op_reply, "Old reply");
rc = -ENOMSG;
goto done;
}

if (op_reply == NULL && cib->state == cib_disconnected) {
rc = -ENOTCONN;

} else if (rc == pcmk_ok && op_reply == NULL) {
rc = -ETIME;
}

switch (rc) {
case pcmk_ok:
case -EPERM:
break;


case -pcmk_err_diff_resync:
rc = pcmk_ok;
break;


case -EPROTO:
case -ENOMSG:
crm_err("Call failed: %s", pcmk_strerror(rc));
if (op_reply) {
crm_log_xml_err(op_reply, "Invalid reply");
}
break;

default:
if (!pcmk__str_eq(op, PCMK__CIB_REQUEST_QUERY, pcmk__str_none)) {
crm_warn("Call failed: %s", pcmk_strerror(rc));
}
}

done:
if (!crm_ipc_connected(native->ipc)) {
crm_err("The CIB manager disconnected");
cib->state = cib_disconnected;
}

free_xml(op_reply);
return rc;
}