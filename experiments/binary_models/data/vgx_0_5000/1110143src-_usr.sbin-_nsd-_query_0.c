query_type *
query_create(region_type *region, uint16_t *compressed_dname_offsets,
size_t compressed_dname_size, domain_type **compressed_dnames)
{
query_type *query
= (query_type *) region_alloc_zero(region, sizeof(query_type));

query->region = region_create_custom(xalloc, free, 16384, 16384/8, 32, 0);
query->compressed_dname_offsets = compressed_dname_offsets;
query->compressed_dnames = compressed_dnames;
query->packet = buffer_create(region, QIOBUFSZ);
region_add_cleanup(region, query_cleanup, query);
query->compressed_dname_offsets_size = compressed_dname_size;
tsig_create_record(&query->tsig, region);
query->tsig_prepare_it = 1;
query->tsig_update_it = 1;
query->tsig_sign_it = 1;
return query;
}