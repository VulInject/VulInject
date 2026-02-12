void
dissector_reset_uint(const char *name, const guint32 pattern)
{
dissector_table_t  sub_dissectors = find_dissector_table(name);
dtbl_entry_t      *dtbl_entry;


ws_assert(sub_dissectors);


dtbl_entry = find_uint_dtbl_entry(sub_dissectors, pattern);

if (dtbl_entry == NULL)
return;


if (dtbl_entry->initial != NULL) {
dtbl_entry->current = dtbl_entry->initial;
} else {
g_hash_table_remove(sub_dissectors->hash_table,
GUINT_TO_POINTER(pattern));
}
}