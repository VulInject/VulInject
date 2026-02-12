static void emit_sltiu_r64(struct jit_context *ctx, u8 rd,
const u8 rs[], s64 imm)
{
u8 tmp = MIPS_R_T9;

if (imm < 0) {
emit_mov_i(ctx, rd, imm);                 
emit(ctx, sltu, rd, lo(rs), rd);          
emit(ctx, sltiu, tmp, hi(rs), -1);        
emit(ctx, or, rd, rd, tmp);               
} else { 
if (imm > 0x7fff) {
emit_mov_i(ctx, rd, (s32)imm);     
emit(ctx, sltu, rd, lo(rs), rd);   
} else {
emit(ctx, sltiu, rd, lo(rs), imm); 
}
emit_movn_r(ctx, rd, MIPS_R_ZERO, hi(rs)); 
}
}