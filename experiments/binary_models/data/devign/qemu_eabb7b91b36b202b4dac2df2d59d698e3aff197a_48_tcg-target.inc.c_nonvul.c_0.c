static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, TCGReg VAR5, TCGReg VAR6, TCGReg VAR7, TCGReg VAR8)
{
    TCGReg VAR9 = VAR10;
    TCGReg VAR11 = VAR4;
    FUN2(VAR4 != VAR10);
    if (VAR4 == VAR6 || VAR4 == VAR8)
    {
        FUN2(VAR4 != VAR12);
        VAR11 = VAR12;
    }
    switch (VAR3)
    {
    case VAR13:
    case VAR14:
        VAR11 = FUN3(VAR2, VAR9, VAR11, VAR5, VAR6, VAR7, VAR8);
        FUN4(VAR2, VAR3, VAR4, VAR11, VAR15);
        break;
    default:
        FUN4(VAR2, VAR13, VAR9, VAR6, VAR8);
        FUN4(VAR2, FUN5(VAR3), VAR11, VAR5, VAR7);
        FUN6(VAR2, VAR16, VAR11, VAR11, VAR9);
        FUN4(VAR2, FUN7(VAR3), VAR9, VAR6, VAR8);
        FUN6(VAR2, VAR17, VAR4, VAR11, VAR9);
        break;
    }
}