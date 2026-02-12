void
ndmpd_config_set_ext_list_v4(ndmp_connection_t *connection, void *body)
{
ndmp_config_set_ext_list_reply_v4 reply;
ndmp_config_set_ext_list_request_v4 *request;
ndmpd_session_t *session = ndmp_get_client_data(connection);

request = (ndmp_config_set_ext_list_request_v4 *)body;

(void) memset((void*)&reply, 0, sizeof (reply));

if (!session->ns_get_ext_list) {

NDMP_LOG(LOG_ERR, "No prior ndmp_config_get_ext_list issued.");
reply.error = NDMP_PRECONDITION_ERR;
} else if (session->ns_set_ext_list) {

NDMP_LOG(LOG_ERR, "Extensions have already been selected.");
reply.error = NDMP_EXT_DANDN_ILLEGAL_ERR;
} else {

if (request->ndmp_selected_ext.ndmp_selected_ext_len != 0) {
reply.error = NDMP_CLASS_NOT_SUPPORTED_ERR;
} else {
session->ns_set_ext_list = B_TRUE;
reply.error = NDMP_NO_ERR;
}
}

ndmp_send_reply(connection, (void *)&reply,
"error sending ndmp_config_set_ext_list reply");
}