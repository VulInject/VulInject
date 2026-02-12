int
dmu_free_range(objset_t *os, uint64_t object, uint64_t offset,
uint64_t size, dmu_tx_t *tx)
{
dnode_t *dn;
int err = dnode_hold(os, object, FTAG, &dn);
if (err)
return (err);
ASSERT(offset < UINT64_MAX);
ASSERT(size == DMU_OBJECT_END || size <= UINT64_MAX - offset);
dnode_free_range(dn, offset, size, tx);
dnode_rele(dn, FTAG);
return (0);
}