static void FUN1(VAR1 *VAR2, AArch64Insn VAR3, TCGType VAR4, TCGReg VAR5, TCGReg VAR6, uint64_t VAR7)
{
    unsigned VAR8, VAR9, VAR10, VAR11;
    FUN2(FUN3(VAR7));
    VAR8 = FUN4(VAR7);
    VAR9 = FUN5(VAR7);
    if (VAR9 == 0)
    {
        VAR10 = 0;
        VAR11 = FUN5(~VAR7) - 1;
        if (VAR8 == 0)
        {
            VAR10 = FUN4(~VAR7);
            VAR11 += VAR10;
        }
    }
    else
    {
        VAR10 = 64 - VAR9;
        VAR11 = VAR10 - VAR8 - 1;
    }
    if (VAR4 == VAR12)
    {
        VAR10 &= 31;
        VAR11 &= 31;
    }
    FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR4, VAR10, VAR11);
}