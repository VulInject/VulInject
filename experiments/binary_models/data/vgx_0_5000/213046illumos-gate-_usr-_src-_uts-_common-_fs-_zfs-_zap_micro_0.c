static int
zap_add_impl(zap_t *zap, const char *key,
int integer_size, uint64_t num_integers,
const void *val, dmu_tx_t *tx, void *tag)
{
const uint64_t *intval = val;
int err = 0;

zap_name_t *zn = zap_name_alloc(zap, key, 0);
if (zn == NULL) {
zap_unlockdir(zap, tag);
return (SET_ERROR(ENOTSUP));
}
if (!zap->zap_ismicro) {
err = fzap_add(zn, integer_size, num_integers, val, tag, tx);
zap = zn->zn_zap;	
} else if (integer_size != 8 || num_integers != 1 ||
strlen(key) >= MZAP_NAME_LEN) {
err = mzap_upgrade(&zn->zn_zap, tag, tx, 0);
if (err == 0) {
err = fzap_add(zn, integer_size, num_integers, val,
tag, tx);
}
zap = zn->zn_zap;	
} else {
if (mze_find(zn) != NULL) {
err = SET_ERROR(EEXIST);
} else {
mzap_addent(zn, *intval);
}
}
ASSERT(zap == zn->zn_zap);
zap_name_free(zn);
if (zap != NULL)	
zap_unlockdir(zap, tag);
return (err);
}