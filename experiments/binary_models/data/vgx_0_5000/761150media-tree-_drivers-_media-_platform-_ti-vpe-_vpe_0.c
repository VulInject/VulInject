static void config_edi_input_mode(struct vpe_ctx *ctx, int mode)
{
struct vpe_mmr_adb *mmr_adb = ctx->mmr_adb.addr;
u32 *edi_config_reg = &mmr_adb->dei_regs[3];

if (mode & 0x2)
write_field(edi_config_reg, 1, 1, 2);	

if (mode & 0x3)
write_field(edi_config_reg, 1, 1, 3);	

write_field(edi_config_reg, mode, VPE_EDI_INP_MODE_MASK,
VPE_EDI_INP_MODE_SHIFT);

ctx->load_mmrs = true;
}