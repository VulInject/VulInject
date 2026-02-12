struct workqueue_struct *rds_wq;
EXPORT_SYMBOL_GPL(rds_wq);

void rds_connect_path_complete(struct rds_conn_path *cp, int curr)
{
if (!rds_conn_path_transition(cp, curr, RDS_CONN_UP)) {
printk(KERN_WARNING "%s: Cannot transition to state UP, "
"current state is %d\n",
__func__,
atomic_read(&cp->cp_state));
rds_conn_path_drop(cp, false);
return;
}

rdsdebug("conn %p for %pI6c to %pI6c complete\n",
cp->cp_conn, &cp->cp_conn->c_laddr, &cp->cp_conn->c_faddr);

cp->cp_reconnect_jiffies = 0;
set_bit(0, &cp->cp_conn->c_map_queued);
rcu_read_lock();
if (!rds_destroy_pending(cp->cp_conn)) {
queue_delayed_work(rds_wq, &cp->cp_send_w, 0);
queue_delayed_work(rds_wq, &cp->cp_recv_w, 0);
}
rcu_read_unlock();
cp->cp_conn->c_proposed_version = RDS_PROTOCOL_VERSION;
}