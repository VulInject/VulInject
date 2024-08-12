static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, TCGReg VAR5)
{
    if (VAR6 & VAR7)
    {
        FUN2(VAR2, VAR8, VAR9, VAR4, VAR5);
        return;
    }
    if (VAR3 == VAR10)
    {
        if (VAR4 == VAR5)
        {
            FUN3(VAR2, VAR11, VAR4, VAR12, 16);
        }
        else
        {
            FUN4(VAR2, VAR13, VAR4, VAR5, VAR12, 16);
        }
        FUN3(VAR2, VAR14, VAR4, VAR12, 16);
    }
    else
    {
        FUN4(VAR2, VAR13, VAR4, VAR5, VAR12, 48);
        FUN4(VAR2, VAR15, VAR4, VAR4, VAR12, 48);
    }
}