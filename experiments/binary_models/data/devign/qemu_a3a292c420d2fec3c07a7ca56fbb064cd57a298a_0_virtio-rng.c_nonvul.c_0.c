static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    if (VAR8->VAR10.VAR11 <= 0)
    {
        FUN4(VAR4, "");
        return;
    }
    if (VAR8->VAR10.VAR12 > VAR13)
    {
        FUN4(VAR4, ""
                         "");
        return;
    }
    if (VAR8->VAR10.VAR14 == NULL)
    {
        VAR8->VAR10.VAR15 = FUN5(FUN6(VAR16));
        FUN7(FUN8(VAR8->VAR10.VAR15), &VAR9);
        if (VAR9)
        {
            FUN9(VAR4, VAR9);
            FUN10(FUN8(VAR8->VAR10.VAR15));
            return;
        }
        FUN11(FUN8(VAR2), "", FUN8(VAR8->VAR10.VAR15), NULL);
        FUN10(FUN8(VAR8->VAR10.VAR15));
        FUN12(FUN8(VAR2), FUN8(VAR8->VAR10.VAR15), "", NULL);
    }
    VAR8->VAR14 = VAR8->VAR10.VAR14;
    if (VAR8->VAR14 == NULL)
    {
        FUN4(VAR4, "");
        return;
    }
    FUN13(VAR6, "", VAR17, 0);
    VAR8->VAR18 = FUN14(VAR6, 8, VAR19);
    VAR8->VAR20 = VAR8->VAR10.VAR12;
    VAR8->VAR21 = FUN15(VAR22, VAR23, VAR8);
    FUN16(VAR8->VAR21, FUN17(VAR22) + VAR8->VAR10.VAR11);
    FUN18(VAR2, "", -1, 1, VAR24, VAR25, VAR8);
}