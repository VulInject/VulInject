char *MagicThreadLookup(magic_t *ctx, const uint8_t *buf, uint32_t buflen)
{
const char *result = NULL;
char *magic = NULL;

if (buf != NULL && buflen > 0) {
result = magic_buffer(*ctx, (void *)buf, (size_t)buflen);
if (result != NULL) {
magic = SCStrdup(result);
if (unlikely(magic == NULL)) {
SCLogError("Unable to dup magic");
}
}
}

SCReturnPtr(magic, "const char");
}