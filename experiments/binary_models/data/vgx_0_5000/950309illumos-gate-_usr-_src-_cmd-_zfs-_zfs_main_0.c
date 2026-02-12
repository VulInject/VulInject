static int
get_one_dataset(zfs_handle_t *zhp, void *data)
{
static char *spin[] = { "-", "\\", "|", "/" };
static int spinval = 0;
static int spincheck = 0;
static time_t last_spin_time = (time_t)0;
get_all_state_t *state = data;
zfs_type_t type = zfs_get_type(zhp);

if (state->ga_verbose) {
if (--spincheck < 0) {
time_t now = time(NULL);
if (last_spin_time + SPINNER_TIME < now) {
update_progress(spin[spinval++ % 4]);
last_spin_time = now;
}
spincheck = CHECK_SPINNER;
}
}


if (zfs_iter_filesystems(zhp, get_one_dataset, data) != 0) {
zfs_close(zhp);
return (1);
}


if ((type & ZFS_TYPE_FILESYSTEM) == 0) {
zfs_close(zhp);
return (0);
}
libzfs_add_handle(state->ga_cbp, zhp);
assert(state->ga_cbp->cb_used <= state->ga_cbp->cb_alloc);

return (0);
}