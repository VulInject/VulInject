static int _get_accounts(slurmdbd_conn_t *slurmdbd_conn, persist_msg_t *msg,
buf_t **out_buffer, uint32_t *uid)
{
dbd_cond_msg_t *get_msg = msg->data;
dbd_list_msg_t list_msg = { NULL };
int rc = SLURM_SUCCESS;

debug2("DBD_GET_ACCOUNTS: called in CONN %d", slurmdbd_conn->conn->fd);

list_msg.my_list = acct_storage_g_get_accounts(slurmdbd_conn->db_conn,
*uid, get_msg->cond);

if (!errno) {
if (!list_msg.my_list)
list_msg.my_list = list_create(NULL);
*out_buffer = init_buf(1024);
pack16((uint16_t) DBD_GOT_ACCOUNTS, *out_buffer);
slurmdbd_pack_list_msg(&list_msg, slurmdbd_conn->conn->version,
DBD_GOT_ACCOUNTS,
*out_buffer);
} else {
*out_buffer = slurm_persist_make_rc_msg(slurmdbd_conn->conn,
errno,
slurm_strerror(errno),
DBD_GET_ACCOUNTS);
rc = SLURM_ERROR;
}

FREE_NULL_LIST(list_msg.my_list);

return rc;
}