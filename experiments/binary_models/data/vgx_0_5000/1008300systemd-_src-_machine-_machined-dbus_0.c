static int method_map_from_machine_user(sd_bus_message *message, void *userdata, sd_bus_error *error) {
Manager *m = userdata;
const char *name;
Machine *machine;
uint32_t uid;
uid_t converted;
int r;

r = sd_bus_message_read(message, "su", &name, &uid);
if (r < 0)
return r;

if (!uid_is_valid(uid))
return sd_bus_error_setf(error, SD_BUS_ERROR_INVALID_ARGS, "Invalid user ID " UID_FMT, uid);

machine = hashmap_get(m->machines, name);
if (!machine)
return sd_bus_error_setf(error, BUS_ERROR_NO_SUCH_MACHINE, "No machine '%s' known", name);

if (machine->class != MACHINE_CONTAINER)
return sd_bus_error_set(error, SD_BUS_ERROR_INVALID_ARGS, "Not supported for non-container machines.");

r = machine_translate_uid(machine, uid, &converted);
if (r == -ESRCH)
return sd_bus_error_setf(error, BUS_ERROR_NO_SUCH_USER_MAPPING, "Machine '%s' has no matching user mappings.", name);
if (r < 0)
return r;

return sd_bus_reply_method_return(message, "u", (uint32_t) converted);
}