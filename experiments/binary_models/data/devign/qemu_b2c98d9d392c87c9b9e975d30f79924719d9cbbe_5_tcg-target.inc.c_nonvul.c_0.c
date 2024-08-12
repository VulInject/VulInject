static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, TCGReg VAR5)
{
    if (VAR6 & VAR7)
    {
        FUN2(VAR2, VAR8, VAR9, VAR4, VAR5);
        return;
    }
    if (VAR4 == VAR5)
    {
        FUN3(VAR2, VAR3, VAR10, 0xff);
        VAR5 = VAR10;
    }
    else
    {
        FUN3(VAR2, VAR3, VAR4, 0xff);
    }
    if (VAR3 == VAR11)
    {
        FUN2(VAR2, VAR12, VAR13, VAR4, VAR5);
    }
    else
    {
        FUN2(VAR2, VAR8, VAR14, VAR4, VAR5);
    }
}