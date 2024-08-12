static int FUN1(int argc, char **argv)
{
    int VAR1;
    OutputFormat VAR2 = VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    const char *VAR8, *VAR9, *VAR10;
    int64_t VAR11;
    MapEntry VAR12 = {.VAR11 = 0}, VAR13;
    int VAR14 = 0;
    bool VAR15 = false;
    VAR9 = NULL;
    VAR10 = NULL;
    for (;;)
    {
        int VAR16 = 0;
        static const struct option VAR17[] = {{"", VAR18, 0, ''}, {"", VAR19, 0, ''}, {"", VAR19, 0, VAR20}, {"", VAR19, 0, VAR21}, {"", VAR18, 0, VAR22}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR17, &VAR16);
        if (VAR1 == -1)
        {
            break;
        }
        switch (VAR1)
        {
        case '':
        case '':
            FUN2();
            break;
        case '':
            VAR9 = VAR23;
            break;
        case VAR20:
            VAR10 = VAR23;
            break;
        case VAR21:
        {
            VAR24 *VAR25;
            VAR25 = FUN3(&VAR26, VAR23, true);
            if (!VAR25)
            {
                return 1;
            }
        }
        break;
        case VAR22:
            VAR15 = true;
            break;
        }
    }
    if (VAR27 != argc - 1)
    {
        FUN4("");
    }
    VAR8 = argv[VAR27];
    if (VAR10 && !strcmp(VAR10, ""))
    {
        VAR2 = VAR28;
    }
    else if (VAR10 && !strcmp(VAR10, ""))
    {
        VAR2 = VAR3;
    }
    else if (VAR10)
    {
        FUN5("");
        return 1;
    }
    if (FUN6(&VAR26, VAR29, NULL, NULL))
    {
        return 1;
    }
    VAR5 = FUN7(VAR15, VAR8, VAR9, 0, false, false);
    if (!VAR5)
    {
        return 1;
    }
    VAR7 = FUN8(VAR5);
    if (VAR2 == VAR3)
    {
        FUN9("", "", "", "", "");
    }
    VAR11 = FUN10(VAR5);
    while (VAR12.VAR30 + VAR12.VAR11 < VAR11)
    {
        int64_t VAR31;
        int64_t VAR32;
        int VAR33;
        VAR32 = (VAR12.VAR30 + VAR12.VAR11) >> VAR34;
        VAR31 = FUN11(VAR11, VAR35) - VAR32;
        VAR33 = FUN12(1 << (30 - VAR34), VAR31);
        VAR14 = FUN13(VAR7, VAR32, VAR33, &VAR13);
        if (VAR14 < 0)
        {
            FUN5("", strerror(-VAR14));
            goto VAR36;
        }
        if (FUN14(&VAR12, &VAR13))
        {
            VAR12.VAR11 += VAR13.VAR11;
            continue;
        }
        if (VAR12.VAR11 > 0)
        {
            FUN15(VAR2, &VAR12, &VAR13);
        }
        VAR12 = VAR13;
    }
    FUN15(VAR2, &VAR12, NULL);
VAR36:
    FUN16(VAR5);
    return VAR14 < 0;
}