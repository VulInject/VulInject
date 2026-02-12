static int
stonith_api_free(stonith_t * stonith)
{
int rc = pcmk_ok;

crm_trace("Destroying %p", stonith);

if (stonith->state != stonith_disconnected) {
crm_trace("Unregistering notifications and disconnecting %p first",
stonith);
stonith->cmds->remove_notification(stonith, NULL);
rc = stonith->cmds->disconnect(stonith);
}

if (stonith->state == stonith_disconnected) {
stonith_private_t *private = stonith->st_private;

crm_trace("Removing %d callbacks", g_hash_table_size(private->stonith_op_callback_table));
g_hash_table_destroy(private->stonith_op_callback_table);

crm_trace("Destroying %d notification clients", g_list_length(private->notify_list));
g_list_free_full(private->notify_list, free);

free(stonith->st_private);
free(stonith->cmds);
free(stonith);

} else {
crm_err("Not free'ing active connection: %s (%d)", pcmk_strerror(rc), rc);
}

return rc;
}