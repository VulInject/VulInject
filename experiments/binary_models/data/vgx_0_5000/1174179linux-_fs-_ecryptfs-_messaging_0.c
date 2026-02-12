int ecryptfs_exorcise_daemon(struct ecryptfs_daemon *daemon)
{
struct ecryptfs_msg_ctx *msg_ctx, *msg_ctx_tmp;
int rc = 0;

mutex_lock(&daemon->mux);
if ((daemon->flags & ECRYPTFS_DAEMON_IN_READ)
|| (daemon->flags & ECRYPTFS_DAEMON_IN_POLL)) {
rc = -EBUSY;
mutex_unlock(&daemon->mux);
goto out;
}
list_for_each_entry_safe(msg_ctx, msg_ctx_tmp,
&daemon->msg_ctx_out_queue, daemon_out_list) {
list_del(&msg_ctx->daemon_out_list);
daemon->num_queued_msg_ctx--;
printk(KERN_WARNING "%s: Warning: dropping message that is in "
"the out queue of a dying daemon\n", __func__);
ecryptfs_msg_ctx_alloc_to_free(msg_ctx);
}
hlist_del(&daemon->euid_chain);
mutex_unlock(&daemon->mux);
kfree_sensitive(daemon);
out:
return rc;
}