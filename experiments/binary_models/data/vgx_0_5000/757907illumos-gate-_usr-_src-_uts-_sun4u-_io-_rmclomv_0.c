static void
rmclomv_hdl_to_envhdl(dp_handle_t hdl, envmon_handle_t *envhdl)
{
rmclomv_cache_section_t *next;
int			i;

LOCK_CACHE

for (next = rmclomv_cache; next != NULL; next = next->next_section) {
for (i = 0; i < next->num_entries; i++) {
if (next->entry[i].handle == hdl) {
*envhdl = next->entry[i].handle_name;
RELEASE_CACHE
return;
}
}
}


RELEASE_CACHE

(void) snprintf(envhdl->name, sizeof (envhdl->name),
"Unknown SC node 0x%x", hdl);
}