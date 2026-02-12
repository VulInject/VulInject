static int AfalgHashCopy(wolfssl_AFALG_Hash* src, wolfssl_AFALG_Hash* dst)
{
if (src == NULL || dst == NULL) {
return BAD_FUNC_ARG;
}

XMEMCPY(dst, src, sizeof(wolfssl_AFALG_Hash));

dst->msg = (byte*)XMALLOC(src->len, dst->heap, DYNAMIC_TYPE_TMP_BUFFER);
if (dst->msg == NULL) {
return MEMORY_E;
}
if (src->len > 0)
XMEMCPY(dst->msg, src->msg, src->len);

dst->rdFd = accept(src->rdFd, NULL, 0);
dst->alFd = accept(src->alFd, NULL, 0);

if (dst->rdFd == -1 || dst->alFd == -1) {
AfalgHashFree(dst);
return -1;
}

return 0;
}