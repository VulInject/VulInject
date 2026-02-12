DAT_RETURN
dapls_hash_search(
IN DAPL_HASH_TABLE *p_table,
IN DAPL_HASH_KEY    key,
OUT DAPL_HASH_DATA *p_data)
{
DAT_RETURN	dat_status;
void		*olddatum;
DAPL_HASH_ELEM	*found;

dapl_os_assert(p_table);
dat_status = DAT_ERROR(DAT_INVALID_PARAMETER, 0);

if (p_table->locking_required) {
dapl_os_lock(&p_table->lock);
DAPL_HASHLOOKUP(p_table, key, olddatum, found);
dapl_os_unlock(&p_table->lock);
} else {
DAPL_HASHLOOKUP(p_table, key, olddatum, found);
}

if (found) {
if (p_data) {
*p_data = olddatum;
}
dat_status = DAT_SUCCESS;
}

return (dat_status);
}