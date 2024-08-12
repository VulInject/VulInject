static int FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0;
    int VAR5, VAR6;
    char **VAR7;
    int64_t VAR8, VAR9 = 0;
    int VAR10 = 0;
    int VAR11;
    int VAR12;
    int VAR13 = 0xcd;
    VAR14 *VAR15;
    int VAR16;
    VAR17 *VAR18;
    while ((VAR5 = getopt(argc, argv, "")) != VAR19)
    {
        switch (VAR5)
        {
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR13 = FUN2(VAR20);
            if (VAR13 < 0)
            {
                return 0;
            }
            break;
        default:
            return FUN3(&VAR21);
        }
    }
    if (VAR22 > argc - 2)
    {
        return FUN3(&VAR21);
    }
    VAR12 = 1;
    for (VAR16 = VAR22; VAR16 < argc; VAR16++)
    {
        if (!strcmp(argv[VAR16], ""))
        {
            VAR12++;
        }
    }
    VAR18 = FUN4(VAR12 * sizeof(*VAR18));
    VAR7 = FUN4(VAR12 * sizeof(*VAR7));
    VAR15 = FUN5(VAR12 * sizeof(*VAR15));
    for (VAR16 = 0; VAR16 < VAR12; VAR16++)
    {
        int VAR23;
        VAR8 = FUN6(argv[VAR22]);
        if (VAR8 < 0)
        {
            FUN7("", argv[VAR22]);
            return 0;
        }
        VAR22++;
        if (VAR8 & 0x1ff)
        {
            FUN7("", (long long)VAR8);
            return 0;
        }
        if (VAR16 == 0)
        {
            VAR9 = VAR8;
        }
        for (VAR23 = VAR22; VAR23 < argc; VAR23++)
        {
            if (!strcmp(argv[VAR23], ""))
            {
                break;
            }
        }
        VAR11 = VAR23 - VAR22;
        VAR7[VAR16] = FUN8(&VAR15[VAR16], &argv[VAR22], VAR11, VAR13);
        if (VAR7[VAR16] == NULL)
        {
            goto VAR24;
        }
        VAR18[VAR16].VAR25 = &VAR15[VAR16];
        VAR18[VAR16].VAR26 = VAR8 >> 9;
        VAR18[VAR16].VAR27 = VAR18[VAR16].VAR25->VAR28 >> 9;
        VAR22 = VAR23 + 1;
        VAR13++;
    }
    FUN9(&VAR1, NULL);
    VAR6 = FUN10(VAR18, VAR12, &VAR10);
    FUN9(&VAR2, NULL);
    if (VAR6 < 0)
    {
        FUN7("", strerror(-VAR6));
        goto VAR24;
    }
    if (VAR4)
    {
        goto VAR24;
    }
    VAR2 = FUN11(VAR2, VAR1);
    FUN12("", &VAR2, VAR9, VAR10, VAR10, VAR6, VAR3);
VAR24:
    for (VAR16 = 0; VAR16 < VAR12; VAR16++)
    {
        FUN13(VAR7[VAR16]);
        if (VAR18[VAR16].VAR25 != NULL)
        {
            FUN14(&VAR15[VAR16]);
        }
    }
    FUN15(VAR7);
    FUN15(VAR18);
    FUN15(VAR15);
    return 0;
}