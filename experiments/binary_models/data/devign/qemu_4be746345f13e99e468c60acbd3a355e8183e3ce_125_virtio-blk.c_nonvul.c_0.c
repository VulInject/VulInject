void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 **VAR8)
{
    VAR5 *VAR9;
    VAR7 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2(FUN3(FUN4(VAR2)));
    VAR13 *VAR14 = FUN5(VAR12);
    *VAR6 = NULL;
    if (!VAR4->VAR15 && !VAR4->VAR16)
    {
        return;
    }
    if (!VAR14->VAR17 || !VAR14->VAR18)
    {
        FUN6(VAR8, ""
                         "");
        return;
    }
    if (FUN7(VAR4->VAR4.VAR19, VAR20, &VAR10))
    {
        FUN6(VAR8, "", FUN8(VAR10));
        FUN9(VAR10);
        return;
    }
    VAR9 = FUN10(VAR5, 1);
    VAR9->VAR2 = VAR2;
    VAR9->VAR4 = VAR4;
    if (VAR4->VAR16)
    {
        VAR9->VAR16 = VAR4->VAR16;
        FUN11(FUN12(VAR9->VAR16));
    }
    else
    {
        FUN13(&VAR9->VAR21, sizeof(VAR9->VAR21), VAR22);
        FUN14(FUN12(&VAR9->VAR21), &VAR23);
        VAR9->VAR16 = &VAR9->VAR21;
    }
    VAR9->VAR24 = FUN15(VAR9->VAR16);
    VAR9->VAR25 = FUN16(VAR9->VAR24, VAR26, VAR9);
    FUN6(&VAR9->VAR27, "");
    FUN17(VAR4->VAR4.VAR19, VAR9->VAR27);
    FUN18(VAR4->VAR4.VAR19, VAR28, VAR9->VAR27);
    FUN18(VAR4->VAR4.VAR19, VAR29, VAR9->VAR27);
    *VAR6 = VAR9;
}