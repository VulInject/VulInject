static gboolean
monitor_timeout_cb(gpointer data)
{
lrm_state_t *lrm_state = NULL;
remote_ra_cmd_t *cmd = data;

lrm_state = lrm_state_find(cmd->rsc_id);

crm_info("Timed out waiting for remote poke response from %s%s",
cmd->rsc_id, (lrm_state? "" : " (no LRM state)"));
cmd->monitor_timeout_id = 0;
pcmk__set_result(&(cmd->result), PCMK_OCF_UNKNOWN_ERROR, PCMK_EXEC_TIMEOUT,
"Remote executor did not respond");

if (lrm_state && lrm_state->remote_ra_data) {
remote_ra_data_t *ra_data = lrm_state->remote_ra_data;

if (ra_data->cur_cmd == cmd) {
ra_data->cur_cmd = NULL;
}
if (ra_data->cmds) {
mainloop_set_trigger(ra_data->work);
}
}

report_remote_ra_result(cmd);
free_cmd(cmd);

if(lrm_state) {
lrm_state_disconnect(lrm_state);
}
return FALSE;
}