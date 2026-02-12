static M_state_machine_status_t M_mail_from_response_post_cb(void *data,
M_state_machine_status_t sub_status, M_uint64 *next)
{
M_net_smtp_session_t     *session        = data;

if (sub_status != M_STATE_MACHINE_STATUS_DONE)
return M_STATE_MACHINE_STATUS_ERROR_STATE;

if (session->tcp.smtp_response_code != 250) {
const char *line = M_list_str_last(session->tcp.smtp_response);
M_snprintf(session->errmsg, sizeof(session->errmsg), "Expected 250 mail-from response, got: %llu: %s",
session->tcp.smtp_response_code, line);
return M_STATE_MACHINE_STATUS_ERROR_STATE;
}
*next = STATE_RCPT_TO;
return M_STATE_MACHINE_STATUS_NEXT;
}