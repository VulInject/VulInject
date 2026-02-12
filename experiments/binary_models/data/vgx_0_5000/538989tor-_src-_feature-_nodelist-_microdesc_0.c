static void
warn_if_nul_found(const char *inp, size_t len, int64_t offset,
const char *activity)
{
const char *nul_found = memchr(inp, 0, len);
if (BUG(nul_found)) {
log_warn(LD_BUG, "Found unexpected NUL while %s, offset %"PRId64
"at position %"TOR_PRIuSZ"/%"TOR_PRIuSZ".",
activity, offset, (nul_found - inp), len);
const char *start_excerpt_at, *eos = inp + len;
if ((nul_found - inp) >= 16)
start_excerpt_at = nul_found - 16;
else
start_excerpt_at = inp;
size_t excerpt_len = MIN(32, eos - start_excerpt_at);
char tmp[65];
base16_encode(tmp, sizeof(tmp), start_excerpt_at, excerpt_len);
log_warn(LD_BUG, "      surrounding string: %s", tmp);
}
}