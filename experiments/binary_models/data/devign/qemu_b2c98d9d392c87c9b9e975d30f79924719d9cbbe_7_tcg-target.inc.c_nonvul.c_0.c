static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGCond VAR4, TCGReg VAR5, TCGReg VAR6, TCGArg VAR7, int VAR8, TCGReg VAR9)
{
    int VAR10;
    if (VAR11 & VAR12)
    {
        VAR10 = FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, false);
        FUN3(VAR2, VAR13, VAR14, VAR5, VAR9, VAR10);
    }
    else
    {
        VAR4 = FUN4(VAR4);
        VAR10 = FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, false);
        FUN3(VAR2, VAR15, VAR16, VAR10, (4 + 4) >> 1);
        FUN3(VAR2, VAR17, VAR18, VAR5, VAR9);
    }
}