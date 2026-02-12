int wc_Sha256Update(wc_Sha256* sha, const byte* in, word32 sz)
{
if (sha == NULL || (sz > 0 && in == NULL)) {
return BAD_FUNC_ARG;
}


if (sha->len < sha->used + sz) {
if (sha->msg == NULL) {
sha->msg = (byte*)XMALLOC(sha->used + sz, sha->heap,
DYNAMIC_TYPE_TMP_BUFFER);
} else {
byte* pt = (byte*)XREALLOC(sha->msg, sha->used + sz, sha->heap,
DYNAMIC_TYPE_TMP_BUFFER);
if (pt == NULL) {
return MEMORY_E;
}
sha->msg = pt;
}
if (sha->msg == NULL) {
return MEMORY_E;
}
sha->len = sha->used + sz;
}
XMEMCPY(sha->msg + sha->used, in, sz);
sha->used += sz;
return 0;
return HashUpdate(sha, CRYPTO_SHA2_256, in, sz);
}