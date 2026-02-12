}
EXPORT_SYMBOL(gnet_stats_basic_sync_init);

static void gnet_stats_add_basic_cpu(struct gnet_stats_basic_sync *bstats,
struct gnet_stats_basic_sync __percpu *cpu)
{
u64 t_bytes = 0, t_packets = 0;
int i;

for_each_possible_cpu(i) {
struct gnet_stats_basic_sync *bcpu = per_cpu_ptr(cpu, i);
unsigned int start;
u64 bytes, packets;

do {
start = u64_stats_fetch_begin(&bcpu->syncp);
bytes = u64_stats_read(&bcpu->bytes);
packets = u64_stats_read(&bcpu->packets);
} while (u64_stats_fetch_retry(&bcpu->syncp, start));

t_bytes += bytes;
t_packets += packets;
}
_bstats_update(bstats, t_bytes, t_packets);
}