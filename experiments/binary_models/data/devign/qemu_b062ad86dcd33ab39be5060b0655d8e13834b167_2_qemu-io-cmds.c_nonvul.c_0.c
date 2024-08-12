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
    while ((VAR7 = getopt(argc, argv, "")) != -1)
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
            VAR15 = FUN2(VAR21);
            if (VAR15 < 0)
            {
                return 0;
            }
            break;
        default:
            return FUN3(&VAR22);
        }
    }
    if (VAR23 > argc - 2)
    {
        return FUN3(&VAR22);
    }
    VAR14 = 1;
    for (VAR18 = VAR23; VAR18 < argc; VAR18++)
    {
        if (!strcmp(argv[VAR18], ""))
        {
            VAR14++;
        }
    }
    VAR20 = FUN4(VAR19, VAR14);
    VAR9 = FUN4(char *, VAR14);
    VAR17 = FUN5(VAR16, VAR14);
    for (VAR18 = 0; VAR18 < VAR14 && VAR23 < argc; VAR18++)
    {
        int VAR24;
        VAR10 = FUN6(argv[VAR23]);
        if (VAR10 < 0)
        {
            FUN7("", argv[VAR23]);
            goto VAR25;
        }
        VAR23++;
        if (VAR10 & 0x1ff)
        {
            FUN7("", (long long)VAR10);
            goto VAR25;
        }
        if (VAR18 == 0)
        {
            VAR11 = VAR10;
        }
        for (VAR24 = VAR23; VAR24 < argc; VAR24++)
        {
            if (!strcmp(argv[VAR24], ""))
            {
                break;
            }
        }
        VAR13 = VAR24 - VAR23;
        VAR9[VAR18] = FUN8(VAR2, &VAR17[VAR18], &argv[VAR23], VAR13, VAR15);
        if (VAR9[VAR18] == NULL)
        {
            goto VAR25;
        }
        VAR20[VAR18].VAR26 = &VAR17[VAR18];
        VAR20[VAR18].VAR27 = VAR10 >> 9;
        VAR20[VAR18].VAR28 = VAR20[VAR18].VAR26->VAR29 >> 9;
        VAR23 = VAR24 + 1;
        VAR15++;
    }
    VAR14 = VAR18;
    FUN9(&VAR3, NULL);
    VAR8 = FUN10(VAR2, VAR20, VAR14, &VAR12);
    FUN9(&VAR4, NULL);
    if (VAR8 < 0)
    {
        FUN7("", strerror(-VAR8));
        goto VAR25;
    }
    if (VAR6)
    {
        goto VAR25;
    }
    VAR4 = FUN11(VAR4, VAR3);
    FUN12("", &VAR4, VAR11, VAR12, VAR12, VAR8, VAR5);
VAR25:
    for (VAR18 = 0; VAR18 < VAR14; VAR18++)
    {
        FUN13(VAR9[VAR18]);
        if (VAR20[VAR18].VAR26 != NULL)
        {
            FUN14(&VAR17[VAR18]);
        }
    }
    FUN15(VAR9);
    FUN15(VAR20);
    FUN15(VAR17);
    return 0;
}