static int _send_to_slurmscriptd(uint32_t msg_type, void *msg_data, bool wait,
char **resp_msg, bool *signalled)
{
slurmscriptd_msg_t msg;
int rc = SLURM_SUCCESS;
script_response_t *script_resp = NULL;
buf_t *buffer = init_buf(0);

xassert(running_in_slurmctld());
memset(&msg, 0, sizeof(msg));

if (wait) {
script_resp = _script_resp_map_add();
msg.key = script_resp->key;
}
msg.msg_data = msg_data;
msg.msg_type = msg_type;

if (slurmscriptd_pack_msg(&msg, buffer) != SLURM_SUCCESS) {
rc = SLURM_ERROR;
goto cleanup;
}
if (msg_type == SLURMSCRIPTD_REQUEST_RUN_SCRIPT)
_incr_script_cnt();
_write_msg(slurmctld_writefd, msg.msg_type, buffer);

if (wait) {
_wait_for_script_resp(script_resp, &rc, resp_msg, signalled);
_script_resp_map_remove(script_resp->key);
}

cleanup:
FREE_NULL_BUFFER(buffer);

return rc;
}