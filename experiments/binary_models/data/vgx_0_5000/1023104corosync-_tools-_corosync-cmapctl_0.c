static void add_track(cmap_handle_t handle, const char *key_name, int prefix)
{
cmap_track_handle_t track_handle;
int32_t track_type;
cs_error_t err;

track_type = CMAP_TRACK_ADD | CMAP_TRACK_DELETE | CMAP_TRACK_MODIFY;
if (prefix) {
track_type |= CMAP_TRACK_PREFIX;
}

err = cmap_track_add(handle, key_name, track_type, cmap_notify_fn, NULL, &track_handle);
if (err != CS_OK) {
fprintf(stderr, "Failed to add tracking function. Error %s\n", cs_strerror(err));
exit (EXIT_FAILURE);
}
}