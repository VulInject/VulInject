static int FUN1(VAR1 *VAR2)
{
    AVBPrint VAR3;
    VAR4 *VAR5 = VAR2->VAR5;
    char VAR6[VAR7];
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13, VAR14;
    VAR15 *VAR16 = FUN2(VAR2, NULL);
    if (!VAR16)
        return FUN3(VAR17);
    FUN4(VAR16, 64, 1, 100);
    VAR16->VAR18->VAR19 = VAR20;
    VAR16->VAR18->VAR21 = VAR22;
    VAR9->VAR23 = 30;
    FUN5(&VAR3, 1024 + VAR24, 4096);
    while (!FUN6(VAR5))
    {
        int VAR25;
        const char *VAR26 = VAR6;
        int64_t VAR27 = FUN7(VAR5);
        int VAR28 = FUN8(VAR5, VAR6, sizeof(VAR6));
        VAR26 = FUN9(VAR26);
        if (VAR12 || FUN10(VAR26))
        {
            VAR29 *VAR30;
            VAR30 = FUN11(&VAR9->VAR31, VAR6, VAR28, VAR12);
            if (!VAR30)
                return FUN3(VAR17);
            VAR30->VAR27 = VAR27;
            VAR12 = VAR28 > 1 && !strcmp(&VAR6[VAR28 - 2], "");
            continue;
        }
        if (*VAR26 != '')
            continue;
        VAR26++;
        VAR13 = FUN12(VAR26[0]);
        if (VAR13 == -1)
            continue;
        VAR25 = strlen(VAR32[VAR13]);
        if (FUN13(VAR26, VAR32[VAR13], VAR25) == 0)
            VAR26 += VAR25;
        else
            VAR26++;
        VAR26 = FUN9(VAR26);
        switch (VAR32[VAR13][0])
        {
        case '':
            if (!VAR11)
            {
                VAR9->VAR33 = FUN14(VAR9->VAR23, VAR26);
                VAR11 = 1;
            }
            FUN15(&VAR3, "", VAR26);
            break;
        case '':
            VAR9->VAR23 = FUN16(VAR26, NULL, 10);
            if (!VAR9->VAR23)
                VAR9->VAR23 = 30;
            else
                FUN15(&VAR3, "", VAR26);
            break;
        }
    }
    VAR14 = FUN17(VAR16->VAR18, &VAR3);
    if (VAR14 < 0)
        return VAR14;
    for (VAR13 = 0; VAR13 < VAR9->VAR31.VAR34; VAR13++)
    {
        VAR29 *VAR30 = &VAR9->VAR31.VAR35[VAR13];
        FUN18(VAR9, VAR30->VAR36, &VAR30->VAR37, &VAR30->VAR38);
    }
    FUN19(&VAR9->VAR31);
    return 0;
}