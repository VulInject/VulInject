static void gen_jal(DisasContext *ctx, int rd, target_ulong imm)
{
target_ulong next_pc;


next_pc = ctx->base.pc_next + imm;
if (!has_ext(ctx, RVC)) {
if ((next_pc & 0x3) != 0) {
gen_exception_inst_addr_mis(ctx);
return;
}
}

gen_set_gpri(ctx, rd, ctx->pc_succ_insn);
gen_goto_tb(ctx, 0, ctx->base.pc_next + imm); 
ctx->base.is_jmp = DISAS_NORETURN;
}