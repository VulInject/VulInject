struct reply_info *
make_new_reply_info(const struct reply_info* rep, struct regional* region,
size_t an_numrrsets, size_t copy_rrsets)
{
struct reply_info* new_rep;
size_t i;


new_rep = construct_reply_info_base(region, rep->flags,
rep->qdcount, rep->ttl, rep->prefetch_ttl,
rep->serve_expired_ttl, an_numrrsets, 0, 0, an_numrrsets,
sec_status_insecure);
if(!new_rep)
return NULL;
if(!reply_info_alloc_rrset_keys(new_rep, NULL, region))
return NULL;
for(i=0; i<copy_rrsets; i++)
new_rep->rrsets[i] = rep->rrsets[i];

return new_rep;
}