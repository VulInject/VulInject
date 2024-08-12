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
    VAR2->VAR21 = VAR7->VAR20;
    if ((VAR10 = FUN5(VAR2, VAR4, VAR5)) < 0)
        return VAR10;
    VAR2->VAR21 = -1;
    if (VAR9->VAR22 && (!VAR9->VAR23 || !VAR9->VAR24 || (!VAR9->VAR25 && !VAR9->VAR26)))
    {
        FUN6(VAR2->VAR11, VAR27, "", VAR7->VAR20);
        return 0;
    }
    FUN7(VAR2, VAR9);
    FUN8(VAR7, 64, 1, VAR9->VAR28);
    FUN9(VAR2, VAR7);
    if (VAR9->VAR29 - 1 < VAR9->VAR30 && VAR9->VAR31[VAR9->VAR29 - 1].VAR32)
    {
        VAR33 *VAR34 = &VAR9->VAR31[VAR9->VAR29 - 1];
        if (VAR2->VAR35)
        {
            if (FUN10(VAR2, &VAR9->VAR4, VAR2->VAR11->VAR36, VAR34, &VAR2->VAR11->VAR37) < 0)
                FUN6(VAR2->VAR11, VAR27, ""
                                            "",
                       VAR7->VAR20, VAR34->VAR32, VAR34->VAR38, VAR34->VAR36, VAR34->VAR39, VAR34->VAR40, VAR34->VAR41);
        }
        else
        {
            FUN6(VAR2->VAR11, VAR42, ""
                                          ""
                                          ""
                                          "",
                   VAR7->VAR20, VAR34->VAR32, VAR34->VAR38, VAR34->VAR36, VAR34->VAR39, VAR34->VAR40, VAR34->VAR41);
        }
    }
    else
    {
        VAR9->VAR4 = VAR2->VAR11->VAR4;
        VAR9->VAR43 = 1;
    }
    if (VAR7->VAR16->VAR17 == VAR44)
    {
        if (!VAR7->VAR45.VAR46 && VAR7->VAR16->VAR47 && VAR7->VAR16->VAR48 && VAR9->VAR48 && VAR9->VAR47 && (VAR7->VAR16->VAR47 != VAR9->VAR47 || VAR7->VAR16->VAR48 != VAR9->VAR48))
        {
            VAR7->VAR45 = FUN11(((double)VAR7->VAR16->VAR48 * VAR9->VAR47) / ((double)VAR7->VAR16->VAR47 * VAR9->VAR48), VAR49);
        }
        if (VAR9->VAR23 == 1 || (VAR9->VAR23 == 2 && VAR9->VAR50[1].VAR51 == 1))
            FUN12(&VAR7->VAR52.VAR46, &VAR7->VAR52.VAR53, VAR9->VAR28, VAR9->VAR50[0].VAR54, VAR49);
    }
    if (!VAR7->VAR16->VAR55 && VAR7->VAR16->VAR56 == VAR57 && FUN13(VAR7->VAR16->VAR58))
    {
        VAR10 = FUN14(VAR7);
        if (VAR10 < 0)
            return VAR10;
    }
    switch (VAR7->VAR16->VAR56)
    {
    case VAR59:
    case VAR60:
    case VAR61:
        VAR7->VAR16->VAR47 = 0;
        VAR7->VAR16->VAR48 = 0;
        break;
    }
    if (VAR7->VAR16->VAR56 == VAR62 && VAR9->VAR23 > 3 && VAR9->VAR23 * 10 > VAR7->VAR63 && VAR9->VAR28 == VAR7->VAR16->VAR64)
    {
        VAR7->VAR65 = VAR66;
    }
    FUN15(&VAR9->VAR67);
    FUN15(&VAR9->VAR68);
    FUN15(&VAR9->VAR69);
    FUN15(&VAR9->VAR70);
    FUN15(&VAR9->VAR50);
    FUN15(&VAR9->VAR71);
    FUN15(&VAR9->VAR72);
    FUN15(&VAR9->VAR73);
    return 0;
}