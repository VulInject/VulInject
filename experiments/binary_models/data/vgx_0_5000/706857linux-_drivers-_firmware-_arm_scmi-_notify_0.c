static void scmi_protocols_late_init(struct work_struct *work)
{
int bkt;
struct scmi_event_handler *hndl;
struct scmi_notify_instance *ni;
struct hlist_node *tmp;

ni = container_of(work, struct scmi_notify_instance, init_work);


smp_rmb();

mutex_lock(&ni->pending_mtx);
hash_for_each_safe(ni->pending_events_handlers, bkt, tmp, hndl, hash) {
int ret;

ret = scmi_bind_event_handler(ni, hndl);
if (!ret) {
dev_dbg(ni->handle->dev,
"finalized PENDING handler - key:%X\n",
hndl->key);
ret = scmi_event_handler_enable_events(hndl);
if (ret) {
dev_dbg(ni->handle->dev,
"purging INVALID handler - key:%X\n",
hndl->key);
scmi_put_active_handler(ni, hndl);
}
} else {
ret = scmi_valid_pending_handler(ni, hndl);
if (ret) {
dev_dbg(ni->handle->dev,
"purging PENDING handler - key:%X\n",
hndl->key);

scmi_put_handler_unlocked(ni, hndl);
}
}
}
mutex_unlock(&ni->pending_mtx);
}