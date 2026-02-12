PHP_HASH_API void PHP_MURMUR3AInit(PHP_MURMUR3A_CTX *ctx, HashTable *args)
{
if (args) {
zval *seed = zend_hash_str_find_deref(args, "seed", sizeof("seed") - 1);

if (seed && IS_LONG == Z_TYPE_P(seed)) {
ctx->h = (uint32_t)Z_LVAL_P(seed);
} else {
ctx->h = 0;
}
} else {
ctx->h = 0;
}
ctx->carry = 0;
ctx->len = 0;
}