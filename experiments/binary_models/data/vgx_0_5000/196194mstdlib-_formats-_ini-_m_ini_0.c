M_ini_t *M_ini_create(M_bool ignore_whitespace)
{
M_ini_t *ini;

ini                    = M_malloc(sizeof(*ini));
ini->elements          = M_ini_elements_create();
ini->sections          = M_hash_strvp_create(16, 75, M_HASH_STRVP_KEYS_ORDERED|M_HASH_STRVP_CASECMP, M_ini_destroy_elements_vp);
ini->kvs               = M_ini_kvs_create();
ini->key_lookup        = M_hash_dict_create(8, 75, M_HASH_DICT_KEYS_ORDERED|M_HASH_DICT_CASECMP);
ini->ignore_whitespace = ignore_whitespace;

return ini;
}