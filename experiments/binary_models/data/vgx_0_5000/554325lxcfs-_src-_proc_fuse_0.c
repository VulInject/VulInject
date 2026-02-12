static uint64_t get_memlimit(const char *cgroup, bool swap)
{
__do_free char *memlimit_str = NULL;
uint64_t memlimit = 0;
int ret;

if (swap)
ret = cgroup_ops->get_memory_swap_max(cgroup_ops, cgroup, &memlimit_str);
else
ret = cgroup_ops->get_memory_max(cgroup_ops, cgroup, &memlimit_str);
if (ret > 0 && memlimit_str[0] && safe_uint64(memlimit_str, &memlimit, 10) < 0)
lxcfs_error("Failed to convert memory%s.max=%s for cgroup %s",
swap ? ".swap" : "", memlimit_str, cgroup);

return memlimit;
}