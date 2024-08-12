static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    hwaddr VAR7, VAR8;
    Int128 VAR9, VAR10;
    int VAR11;
    if (FUN3(VAR4))
    {
        FUN4(VAR4->VAR12, VAR4->VAR12 + FUN5(FUN6(VAR4->VAR13, FUN7())));
        return;
    }
    if (FUN8((VAR4->VAR12 & ~VAR14) != (VAR4->VAR15 & ~VAR14)))
    {
        FUN9("", VAR16);
        return;
    }
    if (FUN10(VAR4->VAR17))
    {
        VAR18 *VAR19;
        FUN11(VAR19, &VAR6->VAR20, VAR21)
        {
            if (VAR19->VAR22 == VAR4->VAR17 && VAR19->VAR23.VAR24 == VAR4->VAR15)
            {
                FUN12(VAR19->VAR22, &VAR19->VAR23);
                FUN13(VAR19, VAR21);
                FUN14(VAR19);
                break;
            }
        }
    }
    VAR7 = FUN15(VAR4->VAR12);
    VAR9 = FUN16(VAR4->VAR12);
    VAR9 = FUN17(VAR9, VAR4->VAR13);
    VAR9 = FUN18(VAR9, FUN19(VAR14));
    if (FUN20(FUN16(VAR7), VAR9))
    {
        return;
    }
    VAR8 = FUN5(FUN6(VAR9, FUN7()));
    VAR10 = FUN6(VAR9, FUN16(VAR7));
    FUN21(VAR7, VAR8);
    VAR11 = FUN22(VAR6, VAR7, FUN5(VAR10));
    FUN23(VAR4->VAR17);
    if (VAR11)
    {
        FUN9("" VAR25 ""
                     "" VAR25 "",
                     VAR6, VAR7, FUN5(VAR10), VAR11);
    }
    if (VAR6->VAR26 == VAR27)
    {
        FUN24(VAR6, VAR4->VAR12);
        if (FUN25(VAR6, VAR4->VAR12, VAR4->VAR12 + FUN5(VAR4->VAR13) - 1) < 0)
        {
            FUN26("" VAR25, VAR16, VAR4->VAR12);
        }
    }
}