static bool _initializeDatakey(iobnet_t *obj, ut8 *resbuf, int size) {
RHash *ctx = r_hash_new (true, R_HASH_SHA256);
if (!ctx) {
return false;
}

r_hash_do_begin (ctx, R_HASH_SHA256);
r_hash_do_sha256 (ctx, obj->key, R_HASH_SIZE_SHA256);
r_hash_do_sha256 (ctx, resbuf, size);
r_hash_do_end (ctx, R_HASH_SHA256);
memcpy (obj->datakey, ctx->digest, R_HASH_SIZE_SHA256);

r_hash_free (ctx);
return true;
}