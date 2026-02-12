static void
get_capable_devices(const char *host, const char *action, int timeout, bool suicide, void *user_data,
void (*callback) (GList * devices, void *user_data), uint32_t support_action_only)
{
struct device_search_s *search;
guint ndevices = g_hash_table_size(device_list);

if (ndevices == 0) {
callback(NULL, user_data);
return;
}

search = calloc(1, sizeof(struct device_search_s));
if (!search) {
crm_crit("Cannot search for capable fence devices: %s",
strerror(ENOMEM));
callback(NULL, user_data);
return;
}

pcmk__str_update(&search->host, host);
pcmk__str_update(&search->action, action);
search->per_device_timeout = timeout;
search->allow_suicide = suicide;
search->callback = callback;
search->user_data = user_data;
search->support_action_only = support_action_only;


search->replies_needed = ndevices;

crm_debug("Searching %d device%s to see which can execute '%s' targeting %s",
ndevices, pcmk__plural_s(ndevices),
(search->action? search->action : "unknown action"),
(search->host? search->host : "any node"));
g_hash_table_foreach(device_list, search_devices, search);
}