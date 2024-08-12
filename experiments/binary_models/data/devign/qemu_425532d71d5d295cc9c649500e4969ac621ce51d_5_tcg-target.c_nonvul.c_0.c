static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5)
{
    tcg_target_long VAR6, VAR7 = (VAR8)VAR5;
    if (FUN2(VAR5, 13))
    {
        FUN3(VAR2, VAR4, VAR5);
        return;
    }
    if (VAR3 == VAR9 || VAR5 == (VAR10)VAR5)
    {
        FUN4(VAR2, VAR4, VAR5);
        if (VAR5 & 0x3ff)
        {
            FUN5(VAR2, VAR4, VAR4, VAR5 & 0x3ff, VAR11);
        }
        return;
    }
    if (VAR5 == VAR7)
    {
        FUN4(VAR2, VAR4, ~VAR5);
        FUN5(VAR2, VAR4, VAR4, (VAR5 & 0x3ff) | -0x400, VAR12);
        return;
    }
    if (FUN6(VAR7, 13))
    {
        VAR6 = (VAR5 - VAR7) >> 32;
        FUN1(VAR2, VAR9, VAR4, VAR6);
        FUN5(VAR2, VAR4, VAR4, 32, VAR13);
        FUN5(VAR2, VAR4, VAR4, VAR7, VAR14);
    }
    else
    {
        VAR6 = VAR5 >> 32;
        FUN1(VAR2, VAR9, VAR4, VAR6);
        FUN1(VAR2, VAR9, VAR15, VAR7);
        FUN5(VAR2, VAR4, VAR4, 32, VAR13);
        FUN7(VAR2, VAR4, VAR4, VAR15, VAR11);
    }
}