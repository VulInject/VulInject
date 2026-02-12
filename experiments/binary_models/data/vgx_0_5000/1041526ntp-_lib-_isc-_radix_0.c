isc_result_t
isc_radix_create(isc_mem_t *mctx, isc_radix_tree_t **target, int maxbits) {
isc_radix_tree_t *radix;

REQUIRE(target != NULL && *target == NULL);

radix = isc_mem_get(mctx, sizeof(isc_radix_tree_t));
if (radix == NULL)
return (ISC_R_NOMEMORY);

radix->mctx = mctx;
radix->maxbits = maxbits;
radix->head = NULL;
radix->num_active_node = 0;
radix->num_added_node = 0;
RUNTIME_CHECK(maxbits <= RADIX_MAXBITS); 
radix->magic = RADIX_TREE_MAGIC;
*target = radix;
return (ISC_R_SUCCESS);
}