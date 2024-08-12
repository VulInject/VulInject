static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    int VAR5 = 0, VAR6 = 0;
    int VAR7, VAR8;
    char **VAR9;
    int64_t VAR10, VAR11 = 0;
    int VAR12 = 0;
    int VAR13;
    int VAR14;
    int VAR15 = 0xcd;
    VAR16 *VAR17;
    int VAR18;
    VAR19 *VAR20;
    while ((VAR7 = getopt(argc, argv, "")) != VAR21)
    {
        switch (VAR7)
        {
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR15 = FUN2(VAR22);
            if (VAR15 < 0)
            {
                return 0;
            }
            break;
        default:
            return FUN3(&VAR23);
        }
    }
    if (VAR24 > argc - 2)
    {
        return FUN3(&VAR23);
    }
    VAR14 = 1;
    for (VAR18 = VAR24; VAR18 < argc; VAR18++)
    {
        if (!strcmp(argv[VAR18], ""))
        {
            VAR14++;
        }
    }
    VAR20 = FUN4(VAR14 * sizeof(*VAR20));
    VAR9 = FUN4(VAR14 * sizeof(*VAR9));
    VAR17 = FUN5(VAR14 * sizeof(*VAR17));
    for (VAR18 = 0; VAR18 < VAR14 && VAR24 < argc; VAR18++)
    {
        int VAR25;
        VAR10 = FUN6(argv[VAR24]);
        if (VAR10 < 0)
        {
            FUN7("", argv[VAR24]);
            goto VAR26;
        }
        VAR24++;
        if (VAR10 & 0x1ff)
        {
            FUN7("", (long long)VAR10);
            goto VAR26;
        }
        if (VAR18 == 0)
        {
            VAR11 = VAR10;
        }
        for (VAR25 = VAR24; VAR25 < argc; VAR25++)
        {
            if (!strcmp(argv[VAR25], ""))
            {
                break;
            }
        }
        VAR13 = VAR25 - VAR24;
        VAR9[VAR18] = FUN8(VAR2, &VAR17[VAR18], &argv[VAR24], VAR13, VAR15);
        if (VAR9[VAR18] == NULL)
        {
            goto VAR26;
        }
        VAR20[VAR18].VAR27 = &VAR17[VAR18];
        VAR20[VAR18].VAR28 = VAR10 >> 9;
        VAR20[VAR18].VAR29 = VAR20[VAR18].VAR27->VAR30 >> 9;
        VAR24 = VAR25 + 1;
        VAR15++;
    }
    VAR14 = VAR18;
    FUN9(&VAR3, NULL);
    VAR8 = FUN10(VAR2, VAR20, VAR14, &VAR12);
    FUN9(&VAR4, NULL);
    if (VAR8 < 0)
    {
        FUN7("", strerror(-VAR8));
        goto VAR26;
    }
    if (VAR6)
    {
        goto VAR26;
    }
    VAR4 = FUN11(VAR4, VAR3);
    FUN12("", &VAR4, VAR11, VAR12, VAR12, VAR8, VAR5);
VAR26:
    for (VAR18 = 0; VAR18 < VAR14; VAR18++)
    {
        FUN13(VAR9[VAR18]);
        if (VAR20[VAR18].VAR27 != NULL)
        {
            FUN14(&VAR17[VAR18]);
        }
    }
    FUN15(VAR9);
    FUN15(VAR20);
    FUN15(VAR17);
    return 0;
}