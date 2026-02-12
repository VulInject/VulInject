static void on_timer(nw_timer *timer, void *privdata)
{
rpc_svr *svr = privdata;
double now = current_timestamp();

nw_ses *curr = svr->raw_svr->clt_list_head;
nw_ses *next;
while (curr) {
next = curr->next;
struct clt_info *info = curr->privdata;
if (now - info->last_heartbeat > info->heartbeat_timeout) {
log_error("peer: %s: heartbeat timeout, last_heartbeat: %f, timeout: %f",
nw_sock_human_addr(&curr->peer_addr), info->last_heartbeat, info->heartbeat_timeout);
nw_svr_close_clt(svr->raw_svr, curr);
}
curr = next;
}
}