static void atom_op_shift_left(atom_exec_context *ctx, int *ptr, int arg)
{
uint8_t attr = U8((*ptr)++), shift;
uint32_t saved, dst;
int dptr = *ptr;
attr &= 0x38;
attr |= atom_def_dst[attr >> 3] << 6;
SDEBUG("   dst: ");
dst = atom_get_dst(ctx, arg, attr, ptr, &saved, 1);
shift = atom_get_src_direct(ctx, ATOM_SRC_BYTE0, ptr);
SDEBUG("   shift: %d\n", shift);
dst <<= shift;
SDEBUG("   dst: ");
atom_put_dst(ctx, arg, attr, &dptr, dst, saved);
}