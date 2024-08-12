static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    if (!VAR8->VAR10.VAR11 > 0)
    {
        FUN4(VAR4, VAR12, "", "");
        return;
    }
    if (VAR8->VAR10.VAR13 == NULL)
    {
        VAR8->VAR10.VAR14 = FUN5(FUN6(VAR15));
        FUN7(FUN8(VAR8->VAR10.VAR14), &VAR9);
        if (VAR9)
        {
            FUN9(VAR4, VAR9);
            FUN10(FUN8(VAR8->VAR10.VAR14));
            return;
        }
        FUN11(FUN8(VAR2), "", FUN8(VAR8->VAR10.VAR14), NULL);
        FUN10(FUN8(VAR8->VAR10.VAR14));
        FUN12(FUN8(VAR2), FUN8(VAR8->VAR10.VAR14), "", NULL);
    }
    FUN13(VAR6, "", VAR16, 0);
    VAR8->VAR13 = VAR8->VAR10.VAR13;
    if (VAR8->VAR13 == NULL)
    {
        FUN4(VAR4, VAR12, "", "");
        return;
    }
    VAR8->VAR17 = FUN14(VAR6, 8, VAR18);
    if (VAR8->VAR10.VAR19 > VAR20)
    {
        FUN4(VAR4, VAR12, "", "");
        return;
    }
    VAR8->VAR21 = VAR8->VAR10.VAR19;
    VAR8->VAR22 = FUN15(VAR23, VAR24, VAR8);
    FUN16(VAR8->VAR22, FUN17(VAR23) + VAR8->VAR10.VAR11);
    FUN18(VAR2, "", -1, 1, VAR25, VAR26, VAR8);
}