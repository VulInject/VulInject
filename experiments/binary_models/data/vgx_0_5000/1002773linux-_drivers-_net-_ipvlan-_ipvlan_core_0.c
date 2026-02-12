void ipvlan_count_rx(const struct ipvl_dev *ipvlan,
unsigned int len, bool success, bool mcast)
{
if (likely(success)) {
struct ipvl_pcpu_stats *pcptr;

pcptr = this_cpu_ptr(ipvlan->pcpu_stats);
u64_stats_update_begin(&pcptr->syncp);
u64_stats_inc(&pcptr->rx_pkts);
u64_stats_add(&pcptr->rx_bytes, len);
if (mcast)
u64_stats_inc(&pcptr->rx_mcast);
u64_stats_update_end(&pcptr->syncp);
} else {
this_cpu_inc(ipvlan->pcpu_stats->rx_errs);
}
}