static int memtrace_init_regions_runtime(u64 size)
{
u32 nid;
u64 m;

memtrace_array = kcalloc(num_online_nodes(),
sizeof(struct memtrace_entry), GFP_KERNEL);
if (!memtrace_array) {
pr_err("Failed to allocate memtrace_array\n");
return -EINVAL;
}

for_each_online_node(nid) {
m = memtrace_alloc_node(nid, size);


if (!m) {
pr_err("Failed to allocate trace memory on node %d\n", nid);
continue;
}

pr_info("Allocated trace memory on node %d at 0x%016llx\n", nid, m);

memtrace_array[memtrace_array_nr].start = m;
memtrace_array[memtrace_array_nr].size = size;
memtrace_array[memtrace_array_nr].nid = nid;
memtrace_array_nr++;
}

return 0;
}