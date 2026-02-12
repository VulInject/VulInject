static int regcache_lzo_decompress_cache_block(struct regmap *map,
struct regcache_lzo_ctx *lzo_ctx)
{
int ret;

lzo_ctx->dst_len = lzo_ctx->decompressed_size;
lzo_ctx->dst = kmalloc(lzo_ctx->dst_len, GFP_KERNEL);
if (!lzo_ctx->dst) {
lzo_ctx->dst_len = 0;
return -ENOMEM;
}

ret = regcache_lzo_decompress(lzo_ctx);
if (ret < 0)
return ret;
return 0;
}