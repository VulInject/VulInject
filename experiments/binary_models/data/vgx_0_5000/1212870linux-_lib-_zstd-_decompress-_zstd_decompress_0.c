static size_t ZSTD_DDictHashSet_expand(ZSTD_DDictHashSet* hashSet, ZSTD_customMem customMem) {
size_t newTableSize = hashSet->ddictPtrTableSize * DDICT_HASHSET_RESIZE_FACTOR;
const ZSTD_DDict** newTable = (const ZSTD_DDict**)ZSTD_customCalloc(sizeof(ZSTD_DDict*) * newTableSize, customMem);
const ZSTD_DDict** oldTable = hashSet->ddictPtrTable;
size_t oldTableSize = hashSet->ddictPtrTableSize;
size_t i;

DEBUGLOG(4, "Expanding DDict hash table! Old size: %zu new size: %zu", oldTableSize, newTableSize);
RETURN_ERROR_IF(!newTable, memory_allocation, "Expanded hashset allocation failed!");
hashSet->ddictPtrTable = newTable;
hashSet->ddictPtrTableSize = newTableSize;
hashSet->ddictPtrCount = 0;
for (i = 0; i < oldTableSize; ++i) {
if (oldTable[i] != NULL) {
FORWARD_IF_ERROR(ZSTD_DDictHashSet_emplaceDDict(hashSet, oldTable[i]), "");
}
}
ZSTD_customFree((void*)oldTable, customMem);
DEBUGLOG(4, "Finished re-hash");
return 0;
}