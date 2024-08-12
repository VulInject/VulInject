int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5, *VAR6;
    int VAR7, VAR8, VAR9 = !VAR2->VAR10;
    const char *VAR10 = VAR9 ? VAR2->VAR5[0]->VAR11->VAR12 : VAR2->VAR10;
    FUN2(&VAR2->VAR13);
    if (!(VAR2->VAR13 = FUN3()))
        return FUN4(VAR14);
    if (VAR9)
    {
        VAR15 *VAR11 = VAR2->VAR5[0]->VAR11;
        char VAR16[512];
        VAR17 *VAR18 = NULL;
        VAR16[0] = 0;
        while ((VAR18 = FUN5(VAR11->VAR19, "", VAR18, VAR20)))
        {
            FUN6(VAR16, sizeof(VAR16), "", VAR18->VAR21, VAR18->VAR22);
        }
        if (strlen(VAR16))
            VAR16[strlen(VAR16) - 1] = 0;
        VAR2->VAR13->VAR23 = FUN7(VAR16);
        VAR16[0] = 0;
        while ((VAR18 = FUN5(VAR11->VAR24, "", VAR18, VAR20)))
        {
            FUN6(VAR16, sizeof(VAR16), "", VAR18->VAR21, VAR18->VAR22);
        }
        if (strlen(VAR16))
            VAR16[strlen(VAR16) - 1] = 0;
        FUN8(VAR2->VAR13, "", VAR16, 0);
        VAR16[0] = '';
        while ((VAR18 = FUN5(VAR2->VAR5[0]->VAR11->VAR25, "", VAR18, VAR20)))
        {
            FUN6(VAR16, sizeof(VAR16), "", VAR18->VAR21, VAR18->VAR22);
        }
        if (strlen(VAR16))
            VAR16[strlen(VAR16) - 1] = '';
        VAR2->VAR13->VAR26 = FUN7(VAR16);
        VAR18 = FUN5(VAR11->VAR27, "", NULL, 0);
        if (VAR18)
            FUN8(VAR2->VAR13, "", VAR18->VAR22, 0);
    }
    if ((VAR7 = FUN9(VAR2->VAR13, VAR10, &VAR4, &VAR5)) < 0)
        return VAR7;
    if (VAR9 && (!VAR4 || VAR4->VAR28 || !VAR5 || VAR5->VAR28))
    {
        const char *VAR29;
        const char *VAR30;
        if (!VAR5)
        {
            VAR30 = "";
        }
        else if (VAR5->VAR28)
        {
            VAR30 = "";
        }
        else
        {
            VAR30 = "";
        }
        if (!VAR4)
        {
            VAR29 = "";
        }
        else if (VAR4->VAR28)
        {
            VAR29 = "";
        }
        else
        {
            VAR29 = "";
        }
        FUN10(NULL, VAR31, ""
                                   ""
                                   ""
                                   "",
               VAR10, VAR29, VAR30);
        return FUN4(VAR32);
    }
    for (VAR6 = VAR4, VAR8 = 0; VAR6; VAR6 = VAR6->VAR28, VAR8++)
        if ((VAR7 = FUN11(VAR2, VAR2->VAR4[VAR8], VAR6)) < 0)
        {
            FUN12(&VAR4);
            FUN12(&VAR5);
            return VAR7;
        }
    FUN12(&VAR4);
    for (VAR6 = VAR5, VAR8 = 0; VAR6; VAR6 = VAR6->VAR28, VAR8++)
        FUN13(VAR2, VAR2->VAR5[VAR8], VAR6);
    FUN12(&VAR5);
    if ((VAR7 = FUN14(VAR2->VAR13, NULL)) < 0)
        return VAR7;
    VAR2->VAR33 = 1;
    for (VAR8 = 0; VAR8 < VAR2->VAR34; VAR8++)
    {
        VAR15 *VAR11 = VAR2->VAR5[VAR8]->VAR11;
        if (!VAR11->VAR35)
        {
            FUN10(NULL, VAR31, "", FUN15(VAR11->VAR36->VAR37->VAR38), VAR11->VAR39, VAR11->VAR40);
            return FUN4(VAR32);
        }
        if (VAR11->VAR35->VAR41 == VAR42 && !(VAR11->VAR35->VAR43 & VAR44))
            FUN16(VAR11->VAR45->VAR45, VAR11->VAR46->VAR47);
    }
    return 0;
}