static ssize_t pmu_mode_store(struct hyp_sysfs_attr *attr,
const char *buffer, size_t len)
{
int ret;
struct xen_pmu_params xp;
int i;

for (i = 0; i < ARRAY_SIZE(pmu_modes); i++) {
if (strncmp(buffer, pmu_modes[i].name, len - 1) == 0) {
xp.val = pmu_modes[i].mode;
break;
}
}

if (i == ARRAY_SIZE(pmu_modes))
return -EINVAL;

xp.version.maj = XENPMU_VER_MAJ;
xp.version.min = XENPMU_VER_MIN;
ret = HYPERVISOR_xenpmu_op(XENPMU_mode_set, &xp);
if (ret)
return ret;

return len;
}