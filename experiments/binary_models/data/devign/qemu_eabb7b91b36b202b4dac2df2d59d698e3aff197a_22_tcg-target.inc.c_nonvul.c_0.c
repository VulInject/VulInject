static void FUN1(VAR1 *VAR2, AArch64Insn VAR3, TCGType VAR4, TCGReg VAR5, uint16_t VAR6, unsigned VAR7)
{
    FUN2((VAR7 & ~0x30) == 0);
    FUN3(VAR2, VAR3 | VAR4 << 31 | VAR7 << (21 - 4) | VAR6 << 5 | VAR5);
}