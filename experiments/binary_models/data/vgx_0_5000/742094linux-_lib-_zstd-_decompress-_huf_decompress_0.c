FORCE_INLINE_TEMPLATE U32
HUF_decodeLastSymbolX2(void* op, BIT_DStream_t* DStream, const HUF_DEltX2* dt, const U32 dtLog)
{
size_t const val = BIT_lookBitsFast(DStream, dtLog);   
ZSTD_memcpy(op, &dt[val].sequence, 1);
if (dt[val].length==1) {
BIT_skipBits(DStream, dt[val].nbBits);
} else {
if (DStream->bitsConsumed < (sizeof(DStream->bitContainer)*8)) {
BIT_skipBits(DStream, dt[val].nbBits);
if (DStream->bitsConsumed > (sizeof(DStream->bitContainer)*8))

DStream->bitsConsumed = (sizeof(DStream->bitContainer)*8);
}
}
return 1;
}