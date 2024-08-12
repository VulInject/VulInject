static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, TCGReg VAR5, TCGReg VAR6, TCGReg VAR7, VAR8 *VAR9)
{
    TCGCond VAR10 = VAR11;
    TCGReg VAR12 = VAR13;
    switch (VAR3)
    {
    case VAR14:
    case VAR11:
        VAR10 = VAR3;
        VAR12 = FUN2(VAR2, VAR15, VAR13, VAR4, VAR5, VAR6, VAR7);
        break;
    default:
        if (VAR16[VAR3] & VAR17)
        {
            VAR3 = FUN3(VAR3);
            VAR10 = VAR14;
        }
        FUN4(VAR2, VAR3, VAR12, VAR4, VAR5, VAR6, VAR7);
        break;
    }
    FUN5(VAR2, VAR10, VAR12, VAR18, VAR9);
}