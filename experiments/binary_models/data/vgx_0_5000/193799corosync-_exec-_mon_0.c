static void mem_update_stats_fn (void *data)
{
struct resource_instance * inst = (struct resource_instance *)data;
int32_t new_value;
uint64_t timestamp;
char key_name[ICMAP_KEYNAME_MAXLEN];

new_value = percent_mem_used_get();
if (new_value > 0) {
snprintf(key_name, ICMAP_KEYNAME_MAXLEN, "%s%s", inst->icmap_path, "current");
icmap_set_uint32(key_name, new_value);

timestamp = cs_timestamp_get();

snprintf(key_name, ICMAP_KEYNAME_MAXLEN, "%s%s", inst->icmap_path, "last_updated");
icmap_set_uint64(key_name, timestamp);

if (new_value > inst->max.int32 && inst->fsm.curr_state != MON_S_FAILED) {
cs_fsm_process (&inst->fsm, MON_E_FAILURE, inst, mon_fsm_cb);
}
}
api->timer_add_duration(inst->period * MILLI_2_NANO_SECONDS,
inst, inst->update_stats_fn, &inst->timer_handle);
}