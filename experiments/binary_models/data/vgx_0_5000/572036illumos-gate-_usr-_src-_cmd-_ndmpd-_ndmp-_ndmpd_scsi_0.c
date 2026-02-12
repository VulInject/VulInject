void
ndmpd_scsi_close_v2(ndmp_connection_t *connection, void *body)
{
ndmp_scsi_close_reply reply;
ndmpd_session_t *session = ndmp_get_client_data(connection);

if (session->ns_scsi.sd_is_open == -1) {
NDMP_LOG(LOG_ERR, "SCSI device is not open.");
reply.error = NDMP_DEV_NOT_OPEN_ERR;
ndmp_send_reply(connection, (void *) &reply,
"sending scsi_close reply");
return;
}
(void) ndmp_open_list_del(session->ns_scsi.sd_adapter_name,
session->ns_scsi.sd_sid,
session->ns_scsi.sd_lun);
(void) close(session->ns_scsi.sd_devid);

session->ns_scsi.sd_is_open = -1;
session->ns_scsi.sd_devid = -1;
session->ns_scsi.sd_sid = 0;
session->ns_scsi.sd_lun = 0;
session->ns_scsi.sd_valid_target_set = FALSE;
(void) memset(session->ns_scsi.sd_adapter_name, 0,
sizeof (session->ns_scsi.sd_adapter_name));

reply.error = NDMP_NO_ERR;
ndmp_send_reply(connection, (void *) &reply,
"sending scsi_close reply");
}