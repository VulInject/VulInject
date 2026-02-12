void s_p_hashtbl_merge(s_p_hashtbl_t *to_tbl, s_p_hashtbl_t *from_tbl)
{
int i;
s_p_values_t **val_pptr, *val_ptr, *match_ptr;

if (!to_tbl || !from_tbl)
return;

for (i = 0; i < CONF_HASH_LEN; i++) {
val_pptr = &from_tbl->hash[i];
val_ptr = from_tbl->hash[i];
while (val_ptr) {
if (val_ptr->data_count == 0) {

val_pptr = &val_ptr->next;
val_ptr = val_ptr->next;
continue;
}
match_ptr = _conf_hashtbl_lookup(to_tbl, val_ptr->key);
if (match_ptr) {	
if (match_ptr->data_count == 0) {
_conf_hashtbl_swap_data(val_ptr,
match_ptr);
}
val_pptr = &val_ptr->next;
val_ptr = val_ptr->next;
} else {	
*val_pptr = val_ptr->next;
val_ptr->next = NULL;
_conf_hashtbl_insert(to_tbl, val_ptr);
val_ptr = *val_pptr;
}
}
}
}