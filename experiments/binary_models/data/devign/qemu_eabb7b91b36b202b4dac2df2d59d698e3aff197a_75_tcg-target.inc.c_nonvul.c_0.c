static void FUN1(VAR1 *VAR2, AArch64Insn VAR3, TCGType VAR4, TCGReg VAR5, TCGReg VAR6, uint64_t VAR7)
{
    if (VAR7 > 0xfff)
    {
        FUN2((VAR7 & 0xfff) == 0);
        VAR7 >>= 12;
        FUN2(VAR7 <= 0xfff);
        VAR7 |= 1 << 12;
    }
    FUN3(VAR2, VAR3 | VAR4 << 31 | VAR7 << 10 | VAR6 << 5 | VAR5);
}