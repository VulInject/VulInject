static void
update_dynamic_array_hf_entry(gpointer key _U_, gpointer value, gpointer data) {
guint32                    *pos = (guint32 *)data;
someip_parameter_array_t   *item = (someip_parameter_array_t *)value;

if (*pos >= dynamic_hf_array_size) {
return;
}

item->hf_id = update_dynamic_hf_entry(dynamic_hf_array, *pos, item->data_type, item->id_ref, item->name, item->filter_string);

if (item->hf_id != NULL) {
(*pos)++;
}
}