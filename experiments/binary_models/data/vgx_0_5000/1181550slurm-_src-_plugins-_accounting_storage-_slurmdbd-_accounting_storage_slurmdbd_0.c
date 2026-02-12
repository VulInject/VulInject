extern int acct_storage_p_get_stats(void *db_conn, slurmdb_stats_rec_t **stats)
{
persist_msg_t req = {0}, resp = {0};
int rc;

xassert(stats);

req.msg_type = DBD_GET_STATS;
req.conn = db_conn;
rc = dbd_conn_send_recv(SLURM_PROTOCOL_VERSION, &req, &resp);

if (rc != SLURM_SUCCESS)
error("DBD_GET_STATS failure: %m");
else if (resp.msg_type == PERSIST_RC) {
persist_rc_msg_t *msg = resp.data;
if (msg->rc == SLURM_SUCCESS) {
info("RC:%d %s", msg->rc, msg->comment);
} else {
slurm_seterrno(msg->rc);
info("RC:%d %s", msg->rc, msg->comment);
}
rc = msg->rc;
slurm_persist_free_rc_msg(msg);
} else if (resp.msg_type != DBD_GOT_STATS) {
error("response type not DBD_GOT_STATS: %u",
resp.msg_type);
rc = SLURM_ERROR;
} else {
*stats = (slurmdb_stats_rec_t *) resp.data;
}

return rc;
}