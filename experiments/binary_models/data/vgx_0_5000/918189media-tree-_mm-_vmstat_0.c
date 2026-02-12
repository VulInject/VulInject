void __dec_node_state(struct pglist_data *pgdat, enum node_stat_item item)
{
struct per_cpu_nodestat __percpu *pcp = pgdat->per_cpu_nodestats;
s8 __percpu *p = pcp->vm_node_stat_diff + item;
s8 v, t;

v = __this_cpu_dec_return(*p);
t = __this_cpu_read(pcp->stat_threshold);
if (unlikely(v < - t)) {
s8 overstep = t >> 1;

node_page_state_add(v - overstep, pgdat, item);
__this_cpu_write(*p, overstep);
}
}