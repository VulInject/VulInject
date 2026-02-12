static inline void AFPDumpCounters(AFPThreadVars *ptv)
{
struct tpacket_stats kstats;
socklen_t len = sizeof (struct tpacket_stats);
if (getsockopt(ptv->socket, SOL_PACKET, PACKET_STATISTICS,
&kstats, &len) > -1) {
SCLogDebug("(%s) Kernel: Packets %" PRIu32 ", dropped %" PRIu32 "",
ptv->tv->name,
kstats.tp_packets, kstats.tp_drops);
StatsAddUI64(ptv->tv, ptv->capture_kernel_packets, kstats.tp_packets);
StatsAddUI64(ptv->tv, ptv->capture_kernel_drops, kstats.tp_drops);
(void) SC_ATOMIC_ADD(ptv->livedev->drop, (uint64_t) kstats.tp_drops);
(void) SC_ATOMIC_ADD(ptv->livedev->pkts, (uint64_t) kstats.tp_packets);

const uint64_t value = SC_ATOMIC_GET(ptv->mpeer->send_errors);
if (value > ptv->send_errors_logged) {
StatsAddUI64(ptv->tv, ptv->capture_afp_send_err, value - ptv->send_errors_logged);
ptv->send_errors_logged = value;
}
}
}