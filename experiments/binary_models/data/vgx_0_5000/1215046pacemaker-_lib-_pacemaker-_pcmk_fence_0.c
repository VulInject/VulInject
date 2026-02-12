int
pcmk__get_fencing_history(stonith_t *st, stonith_history_t **stonith_history,
enum pcmk__fence_history fence_history)
{
int rc = pcmk_rc_ok;

if ((st == NULL) || (st->state == stonith_disconnected)) {
rc = ENOTCONN;
} else if (fence_history != pcmk__fence_history_none) {
rc = st->cmds->history(st, st_opt_sync_call, NULL, stonith_history, 120);

rc = pcmk_legacy2rc(rc);
if (rc != pcmk_rc_ok) {
return rc;
}

*stonith_history = stonith__sort_history(*stonith_history);
if (fence_history == pcmk__fence_history_reduced) {
*stonith_history = reduce_fence_history(*stonith_history);
}
}

return rc;
}