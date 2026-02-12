ancillary_reg_entry *get_ancillary_reg_entry(int cmsg_level, int msg_type)
{
anc_reg_key			key = { cmsg_level, msg_type };
ancillary_reg_entry	*entry;

tsrm_mutex_lock(ancillary_mutex);
if (!ancillary_registry.initialized) {
init_ancillary_registry();
}
tsrm_mutex_unlock(ancillary_mutex);

if ((entry = zend_hash_str_find_ptr(&ancillary_registry.ht, (char*)&key, sizeof(key))) != NULL) {
return entry;
} else {
return NULL;
}
}