static const ZSTD_DDict* ZSTD_DDictHashSet_getDDict(ZSTD_DDictHashSet* hashSet, U32 dictID) {
size_t idx = ZSTD_DDictHashSet_getIndex(hashSet, dictID);
const size_t idxRangeMask = hashSet->ddictPtrTableSize - 1;
DEBUGLOG(4, "Hashed index: for dictID: %u is %zu", dictID, idx);
for (;;) {
size_t currDictID = ZSTD_getDictID_fromDDict(hashSet->ddictPtrTable[idx]);
if (currDictID == dictID || currDictID == 0) {

break;
} else {
idx &= idxRangeMask;    
idx++;
}
}
DEBUGLOG(4, "Final idx after probing for dictID %u is: %zu", dictID, idx);
return hashSet->ddictPtrTable[idx];
}