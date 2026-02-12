static void
_cs_cmap_finalize(void)
{
struct qb_map_iter *map_iter;
struct track_item *track_item;

map_iter = qb_map_iter_create(tracker_map);
while (qb_map_iter_next(map_iter, (void **)&track_item) != NULL) {
cmap_track_delete(stats_handle, track_item->track_handle);
free(track_item);
}
qb_map_iter_free(map_iter);

cmap_track_delete(cmap_handle, cmap_track_handle_runtime_members_key_changed);
cmap_track_delete(stats_handle, cmap_track_handle_stats_ipcs_key_changed);
cmap_track_delete(stats_handle, cmap_track_handle_stats_knet_key_changed);
cmap_finalize (cmap_handle);
cmap_finalize (stats_handle);
}