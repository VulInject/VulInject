static gboolean
fence_history_cb(const gchar *option_name, const gchar *optarg, gpointer data, GError **err) {
if (optarg == NULL) {
interactive_fence_level = 2;
} else {
pcmk__scan_min_int(optarg, &interactive_fence_level, 0);
}

switch (interactive_fence_level) {
case 3:
options.fence_connect = TRUE;
fence_history = pcmk__fence_history_full;
return include_exclude_cb("--include", PCMK__VALUE_FENCING, data,
err);

case 2:
options.fence_connect = TRUE;
fence_history = pcmk__fence_history_full;
return include_exclude_cb("--include", PCMK__VALUE_FENCING, data,
err);

case 1:
options.fence_connect = TRUE;
fence_history = pcmk__fence_history_full;
return include_exclude_cb("--include", "fencing-failed,fencing-pending", data, err);

case 0:
options.fence_connect = FALSE;
fence_history = pcmk__fence_history_none;
return include_exclude_cb("--exclude", PCMK__VALUE_FENCING, data,
err);

default:
g_set_error(err, PCMK__EXITC_ERROR, CRM_EX_INVALID_PARAM, "Fence history must be 0-3");
return FALSE;
}
}