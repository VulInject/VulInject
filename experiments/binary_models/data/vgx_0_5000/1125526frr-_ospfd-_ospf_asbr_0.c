static void ospf_external_aggr_timer(struct ospf *ospf,
struct ospf_external_aggr_rt *aggr,
enum ospf_aggr_action_t operation)
{
aggr->action = operation;

if (ospf->t_external_aggr) {
if (ospf->aggr_action == OSPF_ROUTE_AGGR_ADD) {

if (IS_DEBUG_OSPF(lsa, EXTNL_LSA_AGGR))
zlog_debug(
"%s: Not required to retsart timer,set is already added.",
__func__);
return;
}

if (operation == OSPF_ROUTE_AGGR_ADD) {
if (IS_DEBUG_OSPF(lsa, EXTNL_LSA_AGGR))
zlog_debug(
"%s, Restarting Aggregator delay timer.",
__func__);
THREAD_OFF(ospf->t_external_aggr);
}
}

if (IS_DEBUG_OSPF(lsa, EXTNL_LSA_AGGR))
zlog_debug("%s: Start Aggregator delay timer %u(in seconds).",
__func__, ospf->aggr_delay_interval);

ospf->aggr_action = operation;
thread_add_timer(master, ospf_asbr_external_aggr_process, ospf,
ospf->aggr_delay_interval, &ospf->t_external_aggr);
}