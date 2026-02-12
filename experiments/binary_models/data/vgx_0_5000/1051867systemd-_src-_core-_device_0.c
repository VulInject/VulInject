static int device_setup_devlink_unit_one(Manager *m, const char *devlink, Set **ready_units, Set **not_ready_units) {
_cleanup_(sd_device_unrefp) sd_device *dev = NULL;
Unit *u;

assert(m);
assert(devlink);
assert(ready_units);
assert(not_ready_units);

if (sd_device_new_from_devname(&dev, devlink) >= 0 && device_is_ready(dev))
return device_setup_unit(m, dev, devlink,  false, ready_units);


if (device_by_path(m, devlink, &u) < 0)
return 0; 

return set_ensure_put(not_ready_units, NULL, DEVICE(u));
}