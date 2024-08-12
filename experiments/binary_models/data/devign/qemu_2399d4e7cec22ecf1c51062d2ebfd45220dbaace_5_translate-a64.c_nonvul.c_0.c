static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, TCGv_i64 VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN2();
    TCGv_i64 VAR12;
    FUN3(VAR13, VAR6, VAR14, VAR10);
    VAR12 = FUN4();
    if (VAR8)
    {
        if (VAR7 == 2)
        {
            if (VAR2->VAR15 == VAR16)
            {
                FUN5(VAR12, FUN6(VAR2, VAR4), FUN6(VAR2, VAR5));
            }
            else
            {
                FUN5(VAR12, FUN6(VAR2, VAR5), FUN6(VAR2, VAR4));
            }
            FUN7(VAR12, VAR14, VAR17, VAR12, FUN8(VAR2), VAR18 | VAR19 | VAR2->VAR15);
            FUN9(VAR13, VAR12, VAR12, VAR17);
        }
        else if (VAR2->VAR15 == VAR16)
        {
            if (FUN10(VAR2->VAR20.VAR21) & VAR22)
            {
                FUN11(VAR12, VAR23, VAR14, FUN6(VAR2, VAR4), FUN6(VAR2, VAR5));
            }
            else
            {
                FUN12(VAR12, VAR23, VAR14, FUN6(VAR2, VAR4), FUN6(VAR2, VAR5));
            }
        }
        else
        {
            if (FUN10(VAR2->VAR20.VAR21) & VAR22)
            {
                FUN13(VAR12, VAR23, VAR14, FUN6(VAR2, VAR4), FUN6(VAR2, VAR5));
            }
            else
            {
                FUN14(VAR12, VAR23, VAR14, FUN6(VAR2, VAR4), FUN6(VAR2, VAR5));
            }
        }
    }
    else
    {
        FUN7(VAR12, VAR14, VAR17, FUN6(VAR2, VAR4), FUN8(VAR2), VAR7 | VAR19 | VAR2->VAR15);
        FUN9(VAR13, VAR12, VAR12, VAR17);
    }
    FUN15(FUN6(VAR2, VAR3), VAR12);
    FUN16(VAR12);
    FUN17(VAR11);
    FUN18(VAR10);
    FUN19(FUN6(VAR2, VAR3), 1);
    FUN18(VAR11);
    FUN19(VAR14, -1);
}