static void
update_socket_info(socket_table_t *table, const channel_t *chan)
{
socket_table_ent_t *ent = NULL;
ent = socket_table_search(table, chan);
if (SCHED_BUG(!ent, chan)) {
return; 
}
update_socket_info_impl(ent);
log_debug(LD_SCHED, "chan=%" PRIu64 " updated socket info, limit: %" PRIu64
", cwnd: %" PRIu32 ", unacked: %" PRIu32
", notsent: %" PRIu32 ", mss: %" PRIu32,
ent->chan->global_identifier, ent->limit, ent->cwnd, ent->unacked,
ent->notsent, ent->mss);
}