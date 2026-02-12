void set_ctrl_state(unsigned long state)
{
char ctrl_cdev_path[256];
int i;
unsigned long cdev_state;

if (no_control)
return;

for (i = 0; i < ptdata.nr_cooling_dev; i++) {
if (ptdata.cdi[i].flag & CDEV_FLAG_IN_CONTROL) {
if (ptdata.cdi[i].max_state < 10) {
strcpy(ctrl_cdev, "None.");
return;
}

cdev_state = state * ptdata.cdi[i].max_state/100;
syslog(LOG_DEBUG,
"ctrl cdev %d set state %lu scaled to %lu\n",
ptdata.cdi[i].instance, state, cdev_state);
snprintf(ctrl_cdev_path, 256, "%s/%s%d", THERMAL_SYSFS,
CDEV, ptdata.cdi[i].instance);
syslog(LOG_DEBUG, "ctrl cdev path %s", ctrl_cdev_path);
sysfs_set_ulong(ctrl_cdev_path, "cur_state",
cdev_state);
}
}
}