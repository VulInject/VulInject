static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = (VAR5 *)FUN2(FUN3(), VAR7);
    VAR8 *VAR9 = FUN4(FUN5(VAR2));
    VAR10 *VAR11 = FUN6(FUN5(VAR2));
    VAR12 *VAR13 = FUN7(FUN5(VAR2));
    VAR3 *VAR14 = NULL;
    VAR15 *VAR16;
    int VAR17, VAR18;
    if (!VAR6)
    {
        FUN8(VAR4, VAR19 "");
        return;
    }
    VAR9->VAR20 = FUN9(VAR21 *, VAR13->VAR22);
    for (VAR17 = 0; VAR17 < VAR13->VAR22; VAR17++)
    {
        char VAR23[32];
        VAR24 *VAR25;
        VAR21 *VAR26;
        VAR16 = FUN10(VAR11->VAR27);
        VAR25 = FUN11(VAR16);
        VAR26 = VAR9->VAR20[VAR17] = FUN12(VAR16);
        VAR25->VAR28 = VAR13->VAR29 + VAR17;
        VAR26->VAR30 = (VAR13->VAR29 * VAR6->VAR31 / VAR32) + VAR17;
        if (FUN13() && !FUN14(VAR26->VAR30))
        {
            FUN8(&VAR14, "", VAR26->VAR30);
            FUN15(&VAR14, ""
                                          "",
                              VAR26->VAR30 * VAR32 / VAR6->VAR31);
            goto VAR33;
        }
        VAR26->VAR34 = VAR9->VAR34;
        snprintf(VAR23, sizeof(VAR23), "", VAR17);
        FUN16(FUN5(VAR9), VAR23, VAR16, &VAR14);
        if (VAR14)
        {
            goto VAR33;
        }
        FUN17(VAR16);
    }
    for (VAR18 = 0; VAR18 < VAR13->VAR22; VAR18++)
    {
        VAR16 = FUN5(VAR9->VAR20[VAR18]);
        FUN18(VAR16, VAR6, &VAR14);
        if (VAR14)
        {
            goto VAR33;
        }
    }
    return;
VAR33:
    while (--VAR17 >= 0)
    {
        VAR16 = FUN5(VAR9->VAR20[VAR17]);
        FUN19(VAR16);
    }
    FUN20(VAR9->VAR20);
    FUN21(VAR4, VAR14);
}