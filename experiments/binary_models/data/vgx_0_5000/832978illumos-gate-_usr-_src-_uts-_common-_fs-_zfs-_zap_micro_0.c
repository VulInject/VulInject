static int
zap_lockdir_by_dnode(dnode_t *dn, dmu_tx_t *tx,
krw_t lti, boolean_t fatreader, boolean_t adding, void *tag, zap_t **zapp)
{
dmu_buf_t *db;

int err = dmu_buf_hold_by_dnode(dn, 0, tag, &db, DMU_READ_NO_PREFETCH);
if (err != 0) {
return (err);
}
{
dmu_object_info_t doi;
dmu_object_info_from_db(db, &doi);
ASSERT3U(DMU_OT_BYTESWAP(doi.doi_type), ==, DMU_BSWAP_ZAP);
}

err = zap_lockdir_impl(db, tag, tx, lti, fatreader, adding, zapp);
if (err != 0) {
dmu_buf_rele(db, tag);
}
return (err);
}