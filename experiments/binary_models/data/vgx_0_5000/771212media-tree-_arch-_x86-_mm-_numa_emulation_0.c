static int __init emu_setup_memblk(struct numa_meminfo *ei,
struct numa_meminfo *pi,
int nid, int phys_blk, u64 size)
{
struct numa_memblk *eb = &ei->blk[ei->nr_blks];
struct numa_memblk *pb = &pi->blk[phys_blk];

if (ei->nr_blks >= NR_NODE_MEMBLKS) {
pr_err("NUMA: Too many emulated memblks, failing emulation\n");
return -EINVAL;
}

ei->nr_blks++;
eb->start = pb->start;
eb->end = pb->start + size;
eb->nid = nid;

if (emu_nid_to_phys[nid] == NUMA_NO_NODE)
emu_nid_to_phys[nid] = nid;

pb->start += size;
if (pb->start >= pb->end) {
WARN_ON_ONCE(pb->start > pb->end);
numa_remove_memblk_from(phys_blk, pi);
}

printk(KERN_INFO "Faking node %d at [mem %#018Lx-%#018Lx] (%LuMB)\n",
nid, eb->start, eb->end - 1, (eb->end - eb->start) >> 20);
return 0;
}