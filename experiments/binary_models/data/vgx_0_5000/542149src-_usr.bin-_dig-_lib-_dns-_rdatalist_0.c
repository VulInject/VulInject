isc_result_t
dns_rdatalist_tordataset(dns_rdatalist_t *rdatalist,
dns_rdataset_t *rdataset)
{


REQUIRE(rdatalist != NULL);
REQUIRE(! dns_rdataset_isassociated(rdataset));

rdataset->methods = &methods;
rdataset->rdclass = rdatalist->rdclass;
rdataset->type = rdatalist->type;
rdataset->covers = rdatalist->covers;
rdataset->ttl = rdatalist->ttl;
rdataset->private1 = rdatalist;
rdataset->private2 = NULL;

return (ISC_R_SUCCESS);
}