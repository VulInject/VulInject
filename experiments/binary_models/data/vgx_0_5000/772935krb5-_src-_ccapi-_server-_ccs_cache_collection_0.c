static cc_int32 ccs_cache_collection_invalidate_change_callback (ccs_callback_owner_t io_cache_collection,
ccs_callback_t       in_callback)
{
cc_int32 err = ccNoError;

if (!io_cache_collection) { err = cci_check_error (ccErrBadParam); }
if (!in_callback        ) { err = cci_check_error (ccErrBadParam); }

if (!err) {

ccs_cache_collection_t cache_collection = (ccs_cache_collection_t) io_cache_collection;
cc_uint64 i;
cc_uint64 count = ccs_callback_array_count (cache_collection->change_callbacks);

for (i = 0; !err && i < count; i++) {
ccs_callback_t callback = ccs_callback_array_object_at_index (cache_collection->change_callbacks, i);

if (callback == in_callback) {
cci_debug_printf ("%s: Removing callback reference %p.", __FUNCTION__, callback);
err = ccs_callback_array_remove (cache_collection->change_callbacks, i);
break;
}
}
}

return cci_check_error (err);
}