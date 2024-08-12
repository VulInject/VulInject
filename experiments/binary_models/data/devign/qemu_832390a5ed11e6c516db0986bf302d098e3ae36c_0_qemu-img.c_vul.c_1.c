static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    OutputFormat VAR3 = VAR4;
    const char *VAR5, *VAR6, *VAR7, *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    int VAR13 = 0;
    int VAR14 = VAR15 | VAR16;
    VAR17 *VAR18;
    bool VAR19 = false;
    VAR6 = NULL;
    VAR7 = NULL;
    VAR8 = VAR20;
    for (;;)
    {
        int VAR21 = 0;
        static const struct option VAR22[] = {{"", VAR23, 0, ''}, {"", VAR24, 0, ''}, {"", VAR24, 0, ''}, {"", VAR24, 0, VAR25}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR22, &VAR21);
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
            VAR6 = VAR26;
            break;
        case '':
            VAR14 |= VAR27;
            if (!strcmp(VAR26, ""))
            {
                VAR13 = VAR28;
            }
            else if (!strcmp(VAR26, ""))
            {
                VAR13 = VAR28 | VAR29;
            }
            else
            {
                FUN3(""
                           "",
                           VAR26);
            }
            break;
        case VAR25:
            VAR7 = VAR26;
            break;
        case '':
            VAR8 = VAR26;
            break;
        case '':
            VAR19 = true;
            break;
        }
    }
    if (VAR30 != argc - 1)
    {
        FUN3("");
    }
    VAR5 = argv[VAR30++];
    if (VAR7 && !strcmp(VAR7, ""))
    {
        VAR3 = VAR31;
    }
    else if (VAR7 && !strcmp(VAR7, ""))
    {
        VAR3 = VAR4;
    }
    else if (VAR7)
    {
        FUN4("");
        return 1;
    }
    VAR2 = FUN5(VAR8, &VAR14);
    if (VAR2 < 0)
    {
        FUN4("", VAR8);
        return 1;
    }
    VAR10 = FUN6("", VAR5, VAR6, VAR14, true, VAR19);
    if (!VAR10)
    {
        return 1;
    }
    VAR12 = FUN7(VAR10);
    VAR18 = FUN8(VAR17, 1);
    VAR2 = FUN9(VAR12, VAR18, VAR5, VAR6, VAR13);
    if (VAR2 == -VAR32)
    {
        FUN4("");
        VAR2 = 63;
        goto VAR33;
    }
    if (VAR18->VAR34 || VAR18->VAR35)
    {
        int VAR34, VAR35;
        VAR35 = VAR18->VAR35;
        VAR34 = VAR18->VAR34;
        if (VAR3 == VAR4)
        {
            FUN10(VAR19, ""
                           "" VAR36 ""
                           "" VAR36 ""
                           "",
                    VAR18->VAR35, VAR18->VAR34);
        }
        VAR2 = FUN9(VAR12, VAR18, VAR5, VAR6, 0);
        VAR18->VAR35 = VAR35;
        VAR18->VAR34 = VAR34;
    }
    switch (VAR3)
    {
    case VAR4:
        FUN11(VAR18, VAR19);
        break;
    case VAR31:
        FUN12(VAR18, VAR19);
        break;
    }
    if (VAR2 || VAR18->VAR37)
    {
        VAR2 = 1;
        goto VAR33;
    }
    if (VAR18->VAR38)
    {
        VAR2 = 2;
    }
    else if (VAR18->VAR39)
    {
        VAR2 = 3;
    }
    else
    {
        VAR2 = 0;
    }
VAR33:
    FUN13(VAR18);
    FUN14(VAR10);
    return VAR2;
}