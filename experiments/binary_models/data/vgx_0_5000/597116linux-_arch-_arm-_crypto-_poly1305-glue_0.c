static void arm_poly1305_blocks(struct poly1305_desc_ctx *dctx, const u8 *src,
u32 len, u32 hibit, bool do_neon)
{
if (unlikely(!dctx->sset)) {
if (!dctx->rset) {
poly1305_init_arm(&dctx->h, src);
src += POLY1305_BLOCK_SIZE;
len -= POLY1305_BLOCK_SIZE;
dctx->rset = 1;
}
if (len >= POLY1305_BLOCK_SIZE) {
dctx->s[0] = get_unaligned_le32(src +  0);
dctx->s[1] = get_unaligned_le32(src +  4);
dctx->s[2] = get_unaligned_le32(src +  8);
dctx->s[3] = get_unaligned_le32(src + 12);
src += POLY1305_BLOCK_SIZE;
len -= POLY1305_BLOCK_SIZE;
dctx->sset = true;
}
if (len < POLY1305_BLOCK_SIZE)
return;
}

len &= ~(POLY1305_BLOCK_SIZE - 1);

if (static_branch_likely(&have_neon) && likely(do_neon))
poly1305_blocks_neon(&dctx->h, src, len, hibit);
else
poly1305_blocks_arm(&dctx->h, src, len, hibit);
}