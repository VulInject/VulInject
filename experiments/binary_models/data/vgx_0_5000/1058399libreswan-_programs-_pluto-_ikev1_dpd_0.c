static void p2_dpd_outI1(struct state *p2st)
{
struct state *st;
deltatime_t delay = p2st->st_connection->config->dpd.delay;
deltatime_t timeout = p2st->st_connection->config->dpd.timeout;

st = find_phase1_state(p2st->st_connection,
V1_ISAKMP_SA_ESTABLISHED_STATES);

if (st == NULL) {
log_state(RC_LOG_SERIOUS, p2st,
"DPD: could not find newest phase 1 state - initiating a new one");
event_v1_dpd_timeout(p2st);
return;
}

if (st->st_connection->newest_ipsec_sa != p2st->st_serialno) {
dbg("DPD: no need to send or schedule DPD for replaced IPsec SA");
return;
}

dpd_outI(st, p2st, true, delay, timeout);
}