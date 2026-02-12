xmlNode *
stonith_create_op(int call_id, const char *token, const char *op, xmlNode * data, int call_options)
{
xmlNode *op_msg = create_xml_node(NULL, "stonith_command");

CRM_CHECK(op_msg != NULL, return NULL);
CRM_CHECK(token != NULL, return NULL);

crm_xml_add(op_msg, F_XML_TAGNAME, "stonith_command");

crm_xml_add(op_msg, F_TYPE, T_STONITH_NG);
crm_xml_add(op_msg, F_STONITH_CALLBACK_TOKEN, token);
crm_xml_add(op_msg, F_STONITH_OPERATION, op);
crm_xml_add_int(op_msg, F_STONITH_CALLID, call_id);
crm_trace("Sending call options: %.8lx, %d", (long)call_options, call_options);
crm_xml_add_int(op_msg, F_STONITH_CALLOPTS, call_options);

if (data != NULL) {
add_message_xml(op_msg, F_STONITH_CALLDATA, data);
}

return op_msg;
}