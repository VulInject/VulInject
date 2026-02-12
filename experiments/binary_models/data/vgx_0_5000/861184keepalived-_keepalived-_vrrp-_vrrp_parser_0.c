static void
vrrp_tprocess_weight_handler(const vector_t *strvec)
{
int weight;

if (vector_size(strvec) < 2) {
report_config_error(CONFIG_GENERAL_ERROR, "No weight specified for track process %s - ignoring", current_tp->pname);
return;
}

if (current_tp->weight) {
report_config_error(CONFIG_GENERAL_ERROR, "Weight already set for track process %s - ignoring %s", current_tp->pname, strvec_slot(strvec, 1));
return;
}

if (!read_int_strvec(strvec, 1, &weight, -254, 254, true)) {
report_config_error(CONFIG_GENERAL_ERROR, "Weight (%s) for vrrp_track_process %s must be between "
"[-254..254] inclusive. Ignoring...", strvec_slot(strvec, 1), current_tp->pname);
return;
}

if (vector_size(strvec) >= 3) {
if (!strcmp(strvec_slot(strvec, 2), "reverse"))
current_tp->weight_reverse = true;
else
report_config_error(CONFIG_GENERAL_ERROR, "vrrp_track_process %s unknown weight option %s", current_tp->pname, strvec_slot(strvec, 2));
}

current_tp->weight = weight;
}