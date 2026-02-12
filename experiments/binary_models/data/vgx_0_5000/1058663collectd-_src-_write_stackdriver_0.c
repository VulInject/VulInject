static int wg_metric_descriptors_create(wg_callback_t *cb, const data_set_t *ds,
const value_list_t *vl) {

for (size_t i = 0; i < ds->ds_num; i++) {
char buffer[4096];

int status = sd_format_metric_descriptor(buffer, sizeof(buffer), ds, vl, i);
if (status != 0) {
ERROR("write_stackdriver plugin: sd_format_metric_descriptor failed "
"with status "
"%d",
status);
return status;
}

status = wg_call_metricdescriptor_create(cb, buffer);
if (status != 0) {
ERROR("write_stackdriver plugin: wg_call_metricdescriptor_create failed "
"with "
"status %d",
status);
return status;
}
}

return sd_output_register_metric(cb->formatter, ds, vl);
} 