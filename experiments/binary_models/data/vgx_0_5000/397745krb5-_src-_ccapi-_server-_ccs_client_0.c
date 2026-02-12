cc_int32 ccs_client_remove_iterator (ccs_client_t                io_client,
ccs_generic_list_iterator_t in_iterator)
{
cc_int32 err = ccNoError;
cc_uint32 found_iterator = 0;

if (!io_client) { err = cci_check_error (ccErrBadParam); }

if (!err) {
cc_uint64 i;
cc_uint64 lock_count = ccs_iteratorref_array_count (io_client->iterators);

for (i = 0; !err && i < lock_count; i++) {
ccs_generic_list_iterator_t iterator = ccs_iteratorref_array_object_at_index (io_client->iterators, i);

if (iterator == in_iterator) {
cci_debug_printf ("%s: Removing iterator reference %p.", __FUNCTION__, iterator);
found_iterator = 1;
err = ccs_iteratorref_array_remove (io_client->iterators, i);
break;
}
}
}

if (!err && !found_iterator) {
cci_debug_printf ("%s: WARNING! iterator not found.", __FUNCTION__);
}

return cci_check_error (err);
}