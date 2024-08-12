static int FUN1(int argc, char **argv)
{
    int VAR1;
    OutputFormat VAR2 = VAR3;
    bool VAR4 = false;
    const char *VAR5, *VAR6, *VAR7;
    VAR8 *VAR9;
    bool VAR10 = false;
    VAR6 = NULL;
    VAR7 = NULL;
    for (;;)
    {
        int VAR11 = 0;
        static const struct option VAR12[] = {{"", VAR13, 0, ''}, {"", VAR14, 0, ''}, {"", VAR14, 0, VAR15}, {"", VAR13, 0, VAR16}, {"", VAR14, 0, VAR17}, {"", VAR13, 0, VAR18}, {0, 0, 0, 0}};
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
            VAR6 = VAR19;
            break;
        case VAR15:
            VAR7 = VAR19;
            break;
        case VAR16:
            VAR4 = true;
            break;
        case VAR17:
        {
            VAR20 *VAR21;
            VAR21 = FUN3(&VAR22, VAR19, true);
            if (!VAR21)
            {
                return 1;
            }
        }
        break;
        case VAR18:
            VAR10 = true;
            break;
        }
    }
    if (VAR23 != argc - 1)
    {
        FUN4("");
    }
    VAR5 = argv[VAR23++];
    if (VAR7 && !strcmp(VAR7, ""))
    {
        VAR2 = VAR24;
    }
    else if (VAR7 && !strcmp(VAR7, ""))
    {
        VAR2 = VAR3;
    }
    else if (VAR7)
    {
        FUN5("");
        return 1;
    }
    if (FUN6(&VAR22, VAR25, NULL, NULL))
    {
        return 1;
    }
    VAR9 = FUN7(VAR10, VAR5, VAR6, VAR4);
    if (!VAR9)
    {
        return 1;
    }
    switch (VAR2)
    {
    case VAR3:
        FUN8(VAR9);
        break;
    case VAR24:
        if (VAR4)
        {
            FUN9(VAR9);
        }
        else
        {
            FUN10(VAR9->VAR26);
        }
        break;
    }
    FUN11(VAR9);
    return 0;
}