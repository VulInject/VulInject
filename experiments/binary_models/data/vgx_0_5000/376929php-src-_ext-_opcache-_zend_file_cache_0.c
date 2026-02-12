static void zend_file_cache_serialize_hash(HashTable                *ht,
zend_persistent_script   *script,
zend_file_cache_metainfo *info,
void                     *buf,
serialize_callback_t      func)
{
if (HT_FLAGS(ht) & HASH_FLAG_UNINITIALIZED) {
ht->arData = NULL;
return;
}
if (IS_SERIALIZED(ht->arData)) {
return;
}
if (HT_IS_PACKED(ht)) {
zval *p, *end;

SERIALIZE_PTR(ht->arPacked);
p = ht->arPacked;
UNSERIALIZE_PTR(p);
end = p + ht->nNumUsed;
while (p < end) {
if (Z_TYPE_P(p) != IS_UNDEF) {
func(p, script, info, buf);
}
p++;
}
} else {
Bucket *p, *end;

SERIALIZE_PTR(ht->arData);
p = ht->arData;
UNSERIALIZE_PTR(p);
end = p + ht->nNumUsed;
while (p < end) {
if (Z_TYPE(p->val) != IS_UNDEF) {
SERIALIZE_STR(p->key);
func(&p->val, script, info, buf);
}
p++;
}
}
}