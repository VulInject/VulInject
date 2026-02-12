size_t M_hash_strvp_enumerate(const M_hash_strvp_t *h, M_hash_strvp_enum_t **hashenum)
{
M_hashtable_enum_t *myhashenum = M_malloc(sizeof(*myhashenum));
size_t              rv;

*hashenum = (M_hash_strvp_enum_t *)myhashenum;
rv        = M_hashtable_enumerate((const M_hashtable_t *)h, myhashenum);

if (rv == 0) {
M_free(*hashenum);
*hashenum = NULL;
}

return rv;
}