static void FUN1(VAR1 *VAR2, AArch64Insn VAR3, TCGReg VAR4, TCGReg VAR5, TCGReg VAR6, tcg_target_long VAR7, bool VAR8, bool VAR9)
{
    VAR3 |= 1u << 31;
    VAR3 |= VAR8 << 24;
    VAR3 |= VAR9 << 23;
    FUN2(VAR7 >= -0x200 && VAR7 < 0x200 && (VAR7 & 7) == 0);
    VAR3 |= (VAR7 & (0x7f << 3)) << (15 - 3);
    FUN3(VAR2, VAR3 | VAR5 << 10 | VAR6 << 5 | VAR4);
}