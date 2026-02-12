static void
post_update_tecmp_interfaces_cb(void) {
guint  i;
int   *key = NULL;


if (data_tecmp_interfaces) {
g_hash_table_destroy(data_tecmp_interfaces);
data_tecmp_interfaces = NULL;
}


data_tecmp_interfaces = g_hash_table_new_full(g_int_hash, g_int_equal, &tecmp_free_key, NULL);

if (data_tecmp_interfaces == NULL || tecmp_interfaces == NULL || tecmp_interfaces_num == 0) {
return;
}

for (i = 0; i < tecmp_interfaces_num; i++) {
key = wmem_new(wmem_epan_scope(), int);
*key = tecmp_interfaces[i].id;
g_hash_table_insert(data_tecmp_interfaces, key, &tecmp_interfaces[i]);
}
}