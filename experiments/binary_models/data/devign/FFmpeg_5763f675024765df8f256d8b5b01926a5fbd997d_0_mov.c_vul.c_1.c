static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR7 = FUN2(VAR2->VAR11, NULL);
    if (!VAR7)
        return FUN3(VAR12);
    VAR7->VAR13 = VAR2->VAR11->VAR14;
    VAR9 = FUN4(sizeof(VAR8));
    if (!VAR9)
        return FUN3(VAR12);
    VAR7->VAR15 = VAR9;
    VAR7->VAR16->VAR17 = VAR18;
    VAR9->VAR19 = VAR7->VAR20;
    if ((VAR10 = FUN5(VAR2, VAR4, VAR5)) < 0)
        return VAR10;
    if (VAR9->VAR21 && (!VAR9->VAR22 || !VAR9->VAR23 || (!VAR9->VAR24 && !VAR9->VAR25)))
    {
        FUN6(VAR2->VAR11, VAR26, "", VAR7->VAR20);
        return 0;
    }
    FUN7(VAR2, VAR9);
    FUN8(VAR7, 64, 1, VAR9->VAR27);
    FUN9(VAR2, VAR7);
    if (VAR9->VAR28 - 1 < VAR9->VAR29 && VAR9->VAR30[VAR9->VAR28 - 1].VAR31)
    {
        VAR32 *VAR33 = &VAR9->VAR30[VAR9->VAR28 - 1];
        if (FUN10(&VAR9->VAR4, VAR2->VAR11->VAR34, VAR33, &VAR2->VAR11->VAR35, VAR2->VAR36, VAR2->VAR11) < 0)
            FUN6(VAR2->VAR11, VAR26, ""
                                        "",
                   VAR7->VAR20, VAR33->VAR31, VAR33->VAR37, VAR33->VAR34, VAR33->VAR38, VAR33->VAR39, VAR33->VAR40);
    }
    else
    {
        VAR9->VAR4 = VAR2->VAR11->VAR4;
        VAR9->VAR41 = 1;
    }
    if (VAR7->VAR16->VAR17 == VAR42)
    {
        if (!VAR7->VAR43.VAR44 && (VAR7->VAR16->VAR45 != VAR9->VAR45 || VAR7->VAR16->VAR46 != VAR9->VAR46))
        {
            VAR7->VAR43 = FUN11(((double)VAR7->VAR16->VAR46 * VAR9->VAR45) / ((double)VAR7->VAR16->VAR45 * VAR9->VAR46), VAR47);
        }
        if (VAR9->VAR22 == 1 || (VAR9->VAR22 == 2 && VAR9->VAR48[1].VAR49 == 1))
            FUN12(&VAR7->VAR50.VAR44, &VAR7->VAR50.VAR51, VAR9->VAR27, VAR9->VAR48[0].VAR52, VAR47);
    }
    if (!VAR7->VAR16->VAR53 && VAR7->VAR16->VAR54 == VAR55 && FUN13(VAR7->VAR16->VAR56))
    {
        VAR10 = FUN14(VAR7);
        if (VAR10 < 0)
            return VAR10;
    }
    switch (VAR7->VAR16->VAR54)
    {
    case VAR57:
    case VAR58:
    case VAR59:
        VAR7->VAR16->VAR45 = 0;
        VAR7->VAR16->VAR46 = 0;
        break;
    }
    FUN15(&VAR9->VAR60);
    FUN15(&VAR9->VAR61);
    FUN15(&VAR9->VAR62);
    FUN15(&VAR9->VAR63);
    FUN15(&VAR9->VAR48);
    FUN15(&VAR9->VAR64);
    FUN15(&VAR9->VAR65);
    FUN15(&VAR9->VAR66);
    return 0;
}