static int thermal_sysfs_device_read(const char __attribute__((unused)) * dir,
const char *name,
void __attribute__((unused)) * user_data) {
char filename[PATH_MAX];
bool success = false;
value_t value;

if (device_list && ignorelist_match(device_list, name))
return -1;

snprintf(filename, sizeof(filename), "%s/%s/temp", dirname_sysfs, name);
if (parse_value_file(filename, &value, DS_TYPE_GAUGE) == 0) {
value.gauge /= 1000.0;
thermal_submit(name, TEMP, value);
success = true;
}

snprintf(filename, sizeof(filename), "%s/%s/cur_state", dirname_sysfs, name);
if (parse_value_file(filename, &value, DS_TYPE_GAUGE) == 0) {
thermal_submit(name, COOLING_DEV, value);
success = true;
}

return success ? 0 : -1;
}