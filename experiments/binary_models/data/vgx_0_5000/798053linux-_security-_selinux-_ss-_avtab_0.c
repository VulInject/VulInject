int avtab_alloc(struct avtab *h, u32 nrules)
{
int rc;
u32 nslot = 0;

if (nrules != 0) {
u32 shift = 1;
u32 work = nrules >> 3;
while (work) {
work >>= 1;
shift++;
}
nslot = 1 << shift;
if (nslot > MAX_AVTAB_HASH_BUCKETS)
nslot = MAX_AVTAB_HASH_BUCKETS;

rc = avtab_alloc_common(h, nslot);
if (rc)
return rc;
}

pr_debug("SELinux: %d avtab hash slots, %d rules.\n", nslot, nrules);
return 0;
}