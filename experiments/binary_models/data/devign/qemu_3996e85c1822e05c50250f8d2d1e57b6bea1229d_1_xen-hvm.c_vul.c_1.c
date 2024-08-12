int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 **VAR5)
{
    int VAR6, VAR7;
    unsigned long VAR8;
    unsigned long VAR9;
    VAR10 *VAR11;
    VAR11 = FUN2(sizeof(VAR10));
    VAR11->VAR12 = FUN3(NULL, 0);
    if (VAR11->VAR12 == VAR13)
    {
        FUN4("");
        return -1;
    }
    VAR11->VAR14 = FUN5();
    if (VAR11->VAR14 == NULL)
    {
        FUN4("");
        return -1;
    }
    VAR11->VAR15.VAR16 = VAR17;
    FUN6(&VAR11->VAR15);
    VAR11->VAR18.VAR16 = VAR19;
    FUN7(&VAR11->VAR18);
    VAR11->VAR20.VAR16 = VAR21;
    FUN8(&VAR11->VAR20);
    FUN9(VAR22, VAR23, VAR24, &VAR8);
    FUN10("", VAR8);
    VAR11->VAR25 = FUN11(VAR22, VAR23, VAR26, VAR27 | VAR28, VAR8);
    if (VAR11->VAR25 == NULL)
    {
        FUN12("" VAR29, VAR30, VAR22);
    }
    VAR7 = FUN13(VAR22, VAR23, &VAR8);
    if (!VAR7)
    {
        FUN10("", VAR8);
        VAR11->VAR31 = FUN11(VAR22, VAR23, VAR26, VAR27 | VAR28, VAR8);
        if (VAR11->VAR31 == NULL)
        {
            FUN12("" VAR29, VAR30, VAR22);
        }
    }
    else if (VAR7 != -VAR32)
    {
        FUN12("", VAR30, VAR7);
    }
    FUN9(VAR22, VAR23, VAR33, &VAR8);
    FUN10("", VAR8);
    VAR11->VAR34 = FUN11(VAR22, VAR23, VAR26, VAR27 | VAR28, VAR8);
    if (VAR11->VAR34 == NULL)
    {
        FUN12("", VAR30);
    }
    VAR11->VAR35 = FUN2(VAR36 * sizeof(VAR37 *));
    VAR11->VAR38 = FUN2(VAR36 * sizeof(VAR39));
    for (VAR6 = 0; VAR6 < VAR36; VAR6++)
    {
        VAR7 = FUN14(VAR11->VAR12, VAR23, FUN15(VAR11->VAR25, VAR6));
        if (VAR7 == -1)
        {
            fprintf(VAR40, "", VAR30);
            return -1;
        }
        VAR11->VAR38[VAR6] = VAR7;
    }
    VAR7 = FUN9(VAR22, VAR23, VAR41, &VAR9);
    if (VAR7 < 0)
    {
        fprintf(VAR40, "");
        return -1;
    }
    VAR7 = FUN14(VAR11->VAR12, VAR23, (VAR42)VAR9);
    if (VAR7 == -1)
    {
        fprintf(VAR40, "", VAR30);
        return -1;
    }
    VAR11->VAR43 = VAR7;
    FUN16(VAR44, VAR11);
    FUN17(VAR2, VAR3, VAR45, VAR5);
    FUN18(VAR46, VAR11);
    VAR11->VAR47 = VAR48;
    FUN19(&VAR11->VAR49);
    FUN20(&VAR11->VAR47, &VAR50);
    VAR11->VAR51 = NULL;
    if (FUN21() != 0)
    {
        fprintf(VAR40, "", VAR52);
        return -1;
    }
    FUN22("", &VAR53);
    FUN22("", &VAR54);
    FUN22("", &VAR55);
    FUN23(VAR11);
    return 0;
}