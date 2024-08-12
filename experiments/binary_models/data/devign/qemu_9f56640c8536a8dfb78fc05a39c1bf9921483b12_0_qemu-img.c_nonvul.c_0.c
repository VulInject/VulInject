static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2, VAR3;
    const char *VAR4 = "";
    const char *VAR5 = NULL;
    const char *VAR6;
    const char *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    char *VAR12 = NULL;
    VAR3 = 0;
    for (;;)
    {
        VAR1 = getopt(argc, argv, "");
        if (VAR1 == -1)
            break;
        switch (VAR1)
        {
        case '':
            FUN2();
            break;
        case '':
            VAR5 = VAR13;
            break;
        case '':
            VAR7 = VAR13;
            break;
        case '':
            VAR4 = VAR13;
            break;
        case '':
            VAR3 |= VAR14;
            break;
        case '':
            VAR3 |= VAR15;
            break;
        case '':
            VAR12 = VAR13;
            break;
        }
    }
    VAR9 = FUN3(VAR4);
    if (!VAR9)
        FUN4("", VAR4);
    if (VAR12 && !strcmp(VAR12, ""))
    {
        FUN5(VAR9->VAR16);
        return 0;
    }
    VAR11 = FUN6("", VAR9->VAR16, VAR11);
    FUN7(VAR11, VAR17, -1);
    if (VAR12)
    {
        VAR11 = FUN6(VAR12, VAR9->VAR16, VAR11);
        if (VAR11 == NULL)
        {
            FUN4("", VAR4);
        }
    }
    if (VAR18 >= argc)
        FUN2();
    VAR6 = argv[VAR18++];
    if (VAR18 < argc)
    {
        FUN8(VAR11, VAR17, argv[VAR18++]);
    }
    FUN9(VAR4, VAR11, VAR3, VAR7, VAR5);
    if (FUN10(VAR11, VAR17)->VAR19.VAR20 == -1)
    {
        VAR10 *VAR21 = FUN10(VAR11, VAR22);
        VAR10 *VAR23 = FUN10(VAR11, VAR24);
        if (VAR21 && VAR21->VAR19.VAR25)
        {
            VAR26 *VAR27;
            uint64_t VAR28;
            const char *VAR4 = NULL;
            char VAR29[32];
            if (VAR23 && VAR23->VAR19.VAR25)
            {
                if (FUN3(VAR23->VAR19.VAR25))
                {
                    VAR4 = VAR23->VAR19.VAR25;
                }
                else
                {
                    FUN4("", VAR23->VAR19.VAR25);
                }
            }
            VAR27 = FUN11(VAR21->VAR19.VAR25, VAR4);
            FUN12(VAR27, &VAR28);
            VAR28 *= 512;
            FUN13(VAR27);
            snprintf(VAR29, sizeof(VAR29), "" VAR30, VAR28);
            FUN8(VAR11, VAR17, VAR29);
        }
        else
        {
            FUN4("");
        }
    }
    FUN14("", VAR6, VAR4);
    FUN15(VAR11);
    FUN16("");
    VAR2 = FUN17(VAR9, VAR6, VAR11);
    FUN18(VAR11);
    if (VAR2 < 0)
    {
        if (VAR2 == -VAR31)
        {
            FUN4("", VAR4);
        }
        else if (VAR2 == -VAR32)
        {
            FUN4("", VAR4);
        }
        else
        {
            FUN4("");
        }
    }
    return 0;
}