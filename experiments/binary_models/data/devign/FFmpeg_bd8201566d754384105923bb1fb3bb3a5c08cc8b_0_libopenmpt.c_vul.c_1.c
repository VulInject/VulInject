static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8 = FUN2(VAR2->VAR9);
    if (!VAR8)
        return VAR10;
    char *VAR11 = FUN3(VAR8);
    int VAR12;
    if (!VAR11)
        return FUN4(VAR13);
    VAR8 = FUN5(VAR2->VAR9, VAR11, VAR8);
    if (VAR8 < 0)
    {
        FUN6(VAR2, VAR14, "");
        FUN7(&VAR11);
        return VAR8;
    }
    VAR6->VAR15 = FUN8(VAR11, VAR8, VAR16, VAR2, NULL);
    FUN7(&VAR11);
    if (!VAR6->VAR15)
        return VAR10;
    VAR6->VAR17 = FUN9(VAR6->VAR18);
    VAR6->VAR19 = FUN10(VAR6->VAR15);
    FUN11(VAR2, "", FUN12(VAR6->VAR15, ""));
    FUN11(VAR2, "", FUN12(VAR6->VAR15, ""));
    FUN11(VAR2, "", FUN12(VAR6->VAR15, ""));
    FUN11(VAR2, "", FUN12(VAR6->VAR15, ""));
    FUN11(VAR2, "", FUN12(VAR6->VAR15, ""));
    if (VAR6->VAR20 >= FUN13(VAR6->VAR15))
    {
        FUN14(VAR6->VAR15);
        FUN6(VAR2, VAR14, "", VAR6->VAR20);
        return FUN4(VAR21);
    }
    if (VAR6->VAR20 != -2)
    {
        if (VAR6->VAR20 >= 0)
        {
            FUN15(&VAR2->VAR22, "", VAR6->VAR20 + 1, 0);
        }
        VAR12 = FUN16(VAR6->VAR15, VAR6->VAR20);
        if (!VAR12)
        {
            FUN14(VAR6->VAR15);
            FUN6(VAR2, VAR14, "", VAR6->VAR20);
            return FUN4(VAR21);
        }
    }
    VAR4 = FUN17(VAR2, NULL);
    if (!VAR4)
    {
        FUN14(VAR6->VAR15);
        VAR6->VAR15 = NULL;
        return FUN4(VAR13);
    }
    FUN18(VAR4, 64, 1, VAR23);
    VAR4->VAR19 = FUN19(VAR6->VAR19 * VAR23);
    VAR4->VAR24->VAR25 = VAR26;
    VAR4->VAR24->VAR27 = FUN20(VAR28, VAR29);
    VAR4->VAR24->VAR17 = VAR6->VAR17;
    VAR4->VAR24->VAR30 = VAR6->VAR30;
    return 0;
}