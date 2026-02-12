bool
virCgroupV2DevicesAvailable(virCgroup *group)
{
VIR_AUTOCLOSE cgroupfd = -1;
unsigned int progCnt = 0;

cgroupfd = open(group->unified.mountPoint, O_RDONLY);
if (cgroupfd < 0) {
VIR_DEBUG("failed to open cgroup '%s'", group->unified.mountPoint);
return false;
}

if (virBPFQueryProg(cgroupfd, 0, BPF_CGROUP_DEVICE, &progCnt, NULL) < 0) {
VIR_DEBUG("failed to query cgroup progs: %s", g_strerror(errno));
return false;
}

return true;
}