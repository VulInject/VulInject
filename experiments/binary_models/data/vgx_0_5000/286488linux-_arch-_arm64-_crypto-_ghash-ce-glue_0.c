static void gcm_update_mac(u64 dg[], const u8 *src, int count, u8 buf[],
int *buf_count, struct gcm_aes_ctx *ctx)
{
if (*buf_count > 0) {
int buf_added = min(count, GHASH_BLOCK_SIZE - *buf_count);

memcpy(&buf[*buf_count], src, buf_added);

*buf_count += buf_added;
src += buf_added;
count -= buf_added;
}

if (count >= GHASH_BLOCK_SIZE || *buf_count == GHASH_BLOCK_SIZE) {
int blocks = count / GHASH_BLOCK_SIZE;

ghash_do_simd_update(blocks, dg, src, &ctx->ghash_key,
*buf_count ? buf : NULL,
pmull_ghash_update_p64);

src += blocks * GHASH_BLOCK_SIZE;
count %= GHASH_BLOCK_SIZE;
*buf_count = 0;
}

if (count > 0) {
memcpy(buf, src, count);
*buf_count = count;
}
}