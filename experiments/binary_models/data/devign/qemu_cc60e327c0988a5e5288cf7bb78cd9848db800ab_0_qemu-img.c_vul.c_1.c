static int FUN1(int argc, char **argv)
{
    VAR1 *VAR2, *VAR3, *VAR4;
    VAR5 *VAR6, *VAR7;
    char *VAR8;
    const char *VAR9, *VAR10, *VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15 = 0;
    VAR9 = NULL;
    VAR11 = NULL;
    VAR10 = NULL;
    for (;;)
    {
        VAR12 = getopt(argc, argv, "");
        if (VAR12 == -1)
            break;
        switch (VAR12)
        {
        case '':
            FUN2();
            return 0;
        case '':
            VAR9 = VAR16;
            break;
        case '':
            VAR10 = VAR16;
            break;
        case '':
            VAR11 = VAR16;
            break;
        case '':
            VAR15 = 1;
            break;
        }
    }
    if ((VAR17 >= argc) || !VAR11)
        FUN2();
    VAR8 = argv[VAR17++];
    VAR13 = VAR18 | VAR19 | (VAR15 ? VAR20 : 0);
    VAR2 = FUN3(VAR8, VAR9, VAR13);
    VAR6 = NULL;
    VAR7 = NULL;
    if (!VAR15 && VAR2->VAR21[0] != '')
    {
        VAR6 = FUN4(VAR2->VAR21);
        if (VAR6 == NULL)
        {
            FUN5("", VAR2->VAR21);
        }
    }
    if (VAR10 != NULL)
    {
        VAR7 = FUN4(VAR10);
        if (VAR7 == NULL)
        {
            FUN5("", VAR10);
        }
    }
    if (VAR15)
    {
        VAR3 = NULL;
        VAR4 = NULL;
    }
    else
    {
        char VAR22[1024];
        VAR3 = FUN6("");
        FUN7(VAR2, VAR22, sizeof(VAR22));
        if (FUN8(VAR3, VAR22, VAR18, VAR6))
        {
            FUN5("", VAR22);
            return -1;
        }
        VAR4 = FUN6("");
        if (FUN8(VAR4, VAR11, VAR18 | VAR19, VAR7))
        {
            FUN5("", VAR11);
            return -1;
        }
    }
    if (!VAR15)
    {
        uint64_t VAR23;
        uint64_t VAR24;
        int VAR25, VAR26;
        VAR27 *VAR28;
        VAR27 *VAR29;
        VAR28 = FUN9(VAR30);
        VAR29 = FUN9(VAR30);
        FUN10(VAR2, &VAR23);
        for (VAR24 = 0; VAR24 < VAR23; VAR24 += VAR25)
        {
            if (VAR24 + (VAR30 / 512) <= VAR23)
            {
                VAR25 = (VAR30 / 512);
            }
            else
            {
                VAR25 = VAR23 - VAR24;
            }
            if (FUN11(VAR2, VAR24, VAR25, &VAR26))
            {
                VAR25 = VAR26;
                continue;
            }
            if (FUN12(VAR3, VAR24, VAR28, VAR25) < 0)
            {
                FUN5("");
            }
            if (FUN12(VAR4, VAR24, VAR29, VAR25) < 0)
            {
                FUN5("");
            }
            uint64_t VAR31 = 0;
            while (VAR31 < VAR25)
            {
                int VAR32;
                if (FUN13(VAR28 + VAR31 * 512, VAR29 + VAR31 * 512, VAR25 - VAR31, &VAR32))
                {
                    VAR14 = FUN14(VAR2, VAR24 + VAR31, VAR28 + VAR31 * 512, VAR32);
                    if (VAR14 < 0)
                    {
                        FUN5("", strerror(-VAR14));
                    }
                }
                VAR31 += VAR32;
            }
        }
        FUN15(VAR28);
        FUN15(VAR29);
    }
    VAR14 = FUN16(VAR2, VAR11, VAR10);
    if (VAR14 == -VAR33)
    {
        FUN5(""
              "",
              VAR11);
    }
    else if (VAR14 < 0)
    {
        FUN5("", VAR11, strerror(-VAR14));
    }
    if (!VAR15)
    {
        FUN17(VAR3);
        FUN17(VAR4);
    }
    FUN17(VAR2);
    return 0;
}