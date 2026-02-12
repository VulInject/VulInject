static void atom_op_compare(atom_exec_context *ctx, int *ptr, int arg)
{
uint8_t attr = U8((*ptr)++);
uint32_t dst, src;
SDEBUG("   src1: ");
dst = atom_get_dst(ctx, arg, attr, ptr, NULL, 1);
SDEBUG("   src2: ");
src = atom_get_src(ctx, attr, ptr);
ctx->ctx->cs_equal = (dst == src);
ctx->ctx->cs_above = (dst > src);
SDEBUG("   result: %s %s\n", ctx->ctx->cs_equal ? "EQ" : "NE",
ctx->ctx->cs_above ? "GT" : "LE");
}