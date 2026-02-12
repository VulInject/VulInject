static __always_inline void do_update_time(void *map, struct work_key *key,
__u64 time_start, __u64 time_end)
{
struct report_data zero, *data;
__s64 delta = time_end - time_start;

if (delta < 0)
return;

data = bpf_map_lookup_elem(map, key);
if (!data) {
__builtin_memset(&zero, 0, sizeof(zero));
bpf_map_update_elem(map, key, &zero, BPF_NOEXIST);
data = bpf_map_lookup_elem(map, key);
if (!data)
return;
}

if ((delta > data->max_time) ||
(data->max_time == 0)) {
data->max_time       = delta;
data->max_time_start = time_start;
data->max_time_end   = time_end;
}

data->total_time += delta;
data->nr++;
}