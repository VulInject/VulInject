static int sys_get_trip_temp(struct thermal_zone_device *tzd,
int trip, int *temp)
{
struct pkg_device *pkgdev = tzd->devdata;
unsigned long thres_reg_value;
u32 mask, shift, eax, edx;
int ret;

if (trip >= MAX_NUMBER_OF_TRIPS)
return -EINVAL;

if (trip) {
mask = THERM_MASK_THRESHOLD1;
shift = THERM_SHIFT_THRESHOLD1;
} else {
mask = THERM_MASK_THRESHOLD0;
shift = THERM_SHIFT_THRESHOLD0;
}

ret = rdmsr_on_cpu(pkgdev->cpu, MSR_IA32_PACKAGE_THERM_INTERRUPT,
&eax, &edx);
if (ret < 0)
return ret;

thres_reg_value = (eax & mask) >> shift;
if (thres_reg_value)
*temp = pkgdev->tj_max - thres_reg_value * 1000;
else
*temp = 0;
pr_debug("sys_get_trip_temp %d\n", *temp);

return 0;
}