static int wait_for_item_parse_properties(WaitForItem *item, sd_bus_message *m) {

static const struct bus_properties_map map[] = {
{ "ActiveState", "s",    NULL,             offsetof(WaitForItem, active_state) },
{ "Job",         "(uo)", property_map_job, 0                                   },
{ "CleanResult", "s",    NULL,             offsetof(WaitForItem, clean_result) },
{}
};

int r;

assert(item);
assert(m);

r = bus_message_map_all_properties(m, map, BUS_MAP_STRDUP, NULL, item);
if (r < 0)
return r;

wait_for_item_check_ready(item);
return 0;
}