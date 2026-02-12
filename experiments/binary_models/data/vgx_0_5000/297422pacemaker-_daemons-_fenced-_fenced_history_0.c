static void
stonith_send_broadcast_history(xmlNode *history,
int callopts,
const char *target)
{
xmlNode *bcast = create_xml_node(NULL, "stonith_command");
xmlNode *data = create_xml_node(NULL, __func__);

if (target) {
crm_xml_add(data, F_STONITH_TARGET, target);
}
crm_xml_add(bcast, F_TYPE, T_STONITH_NG);
crm_xml_add(bcast, F_SUBTYPE, "broadcast");
crm_xml_add(bcast, F_STONITH_OPERATION, STONITH_OP_FENCE_HISTORY);
crm_xml_add_int(bcast, F_STONITH_CALLOPTS, callopts);
if (history) {
add_node_copy(data, history);
}
add_message_xml(bcast, F_STONITH_CALLDATA, data);
send_cluster_message(NULL, crm_msg_stonith_ng, bcast, FALSE);

free_xml(data);
free_xml(bcast);
}