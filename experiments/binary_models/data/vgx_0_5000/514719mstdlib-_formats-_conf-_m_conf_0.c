void M_conf_destroy(M_conf_t *conf)
{
M_list_str_t *keys;
size_t        num_keys;
size_t        i;

if (conf != NULL) {

keys     = M_conf_unused_keys(conf);
num_keys = M_list_str_len(keys);
for (i=0; i<num_keys; i++) {
conf_log_debug(conf, "Unused key: %s", M_list_str_at(keys, i));
}
M_list_str_destroy(keys);

M_free(conf->ini_path);
M_ini_destroy(conf->ini);
M_list_destroy(conf->registrations, M_TRUE);
M_list_destroy(conf->validators, M_TRUE);
M_list_destroy(conf->debug_loggers, M_FALSE);
M_list_destroy(conf->error_loggers, M_FALSE);
M_hash_stru64_destroy(conf->unused_keys);
M_free(conf);
}
}