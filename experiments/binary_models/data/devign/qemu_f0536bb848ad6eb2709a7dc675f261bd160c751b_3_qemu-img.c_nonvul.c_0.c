static int FUN1(int argc, char **argv)
{
    int VAR1;
    OutputFormat VAR2 = VAR3;
    const char *VAR4, *VAR5, *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR5 = NULL;
    VAR6 = NULL;
    for (;;)
    {
        int VAR11 = 0;
        static const struct option VAR12[] = {{"", VAR13, 0, ''}, {"", VAR14, 0, ''}, {"", VAR14, 0, VAR15}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR12, &VAR11);
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
            VAR5 = VAR16;
            break;
        case VAR15:
            VAR6 = VAR16;
            break;
        }
    }
    if (VAR17 >= argc)
    {
        FUN2();
    }
    VAR4 = argv[VAR17++];
    if (VAR6 && !strcmp(VAR6, ""))
    {
        VAR2 = VAR18;
    }
    else if (VAR6 && !strcmp(VAR6, ""))
    {
        VAR2 = VAR3;
    }
    else if (VAR6)
    {
        FUN3("");
        return 1;
    }
    VAR8 = FUN4(VAR4, VAR5, VAR19 | VAR20, false);
    if (!VAR8)
    {
        return 1;
    }
    VAR10 = FUN5(VAR9, 1);
    FUN6(VAR8, VAR10, VAR4, VAR5);
    switch (VAR2)
    {
    case VAR3:
        FUN7(VAR10);
        FUN8(VAR8);
        break;
    case VAR18:
        FUN9(VAR8, VAR10);
        FUN10(VAR10);
        break;
    }
    FUN11(VAR10);
    FUN12(VAR8);
    return 0;
}