static int FUN1(int argc, char **argv)
{
    VAR1 *VAR2, *VAR3 = NULL, *VAR4 = NULL;
    VAR5 *VAR6, *VAR7;
    char *VAR8;
    const char *VAR9, *VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    VAR9 = NULL;
    VAR10 = VAR18;
    VAR12 = NULL;
    VAR11 = NULL;
    for (;;)
    {
        VAR13 = getopt(argc, argv, "");
        if (VAR13 == -1)
        {
            break;
        }
        switch (VAR13)
        {
        case '':
        case '':
            FUN2();
            return 0;
        case '':
            VAR9 = VAR19;
            break;
        case '':
            VAR11 = VAR19;
            break;
        case '':
            VAR12 = VAR19;
            break;
        case '':
            VAR16 = 1;
            break;
        case '':
            VAR17 = 1;
            break;
        case '':
            VAR10 = VAR19;
            break;
        }
    }
    if ((VAR20 >= argc) || (!VAR16 && !VAR12))
    {
        FUN2();
    }
    VAR8 = argv[VAR20++];
    FUN3(VAR17, 2.0);
    FUN4(0, 100);
    VAR14 = VAR21 | (VAR16 ? VAR22 : 0);
    VAR15 = FUN5(VAR10, &VAR14);
    if (VAR15 < 0)
    {
        FUN6("", VAR10);
        return -1;
    }
    VAR2 = FUN7(VAR8, VAR9, VAR14, true);
    if (!VAR2)
    {
        return 1;
    }
    VAR6 = NULL;
    VAR7 = NULL;
    if (!VAR16 && VAR2->VAR23[0] != '')
    {
        VAR6 = FUN8(VAR2->VAR23);
        if (VAR6 == NULL)
        {
            FUN6("", VAR2->VAR23);
            VAR15 = -1;
            goto VAR24;
        }
    }
    if (VAR11 != NULL)
    {
        VAR7 = FUN8(VAR11);
        if (VAR7 == NULL)
        {
            FUN6("", VAR11);
            VAR15 = -1;
            goto VAR24;
        }
    }
    if (VAR16)
    {
        VAR3 = NULL;
        VAR4 = NULL;
    }
    else
    {
        char VAR25[1024];
        VAR3 = FUN9("");
        FUN10(VAR2, VAR25, sizeof(VAR25));
        VAR15 = FUN11(VAR3, VAR25, VAR26, VAR6);
        if (VAR15)
        {
            FUN6("", VAR25);
            goto VAR24;
        }
        VAR4 = FUN9("");
        VAR15 = FUN11(VAR4, VAR12, VAR26, VAR7);
        if (VAR15)
        {
            FUN6("", VAR12);
            goto VAR24;
        }
    }
    if (!VAR16)
    {
        uint64_t VAR27;
        uint64_t VAR28;
        uint64_t VAR29;
        uint64_t VAR30;
        int VAR31;
        VAR32 *VAR33;
        VAR32 *VAR34;
        float VAR35;
        VAR33 = FUN12(VAR2, VAR36);
        VAR34 = FUN12(VAR2, VAR36);
        FUN13(VAR2, &VAR27);
        FUN13(VAR3, &VAR28);
        FUN13(VAR4, &VAR29);
        VAR35 = (float)100 / (VAR27 / FUN14(VAR27, VAR36 / 512));
        for (VAR30 = 0; VAR30 < VAR27; VAR30 += VAR31)
        {
            if (VAR30 + (VAR36 / 512) <= VAR27)
            {
                VAR31 = (VAR36 / 512);
            }
            else
            {
                VAR31 = VAR27 - VAR30;
            }
            VAR15 = FUN15(VAR2, VAR30, VAR31, &VAR31);
            if (VAR15)
            {
                continue;
            }
            if (VAR30 >= VAR28)
            {
                memset(VAR33, 0, VAR31 * VAR37);
            }
            else
            {
                if (VAR30 + VAR31 > VAR28)
                {
                    VAR31 = VAR28 - VAR30;
                }
                VAR15 = FUN16(VAR3, VAR30, VAR33, VAR31);
                if (VAR15 < 0)
                {
                    FUN6("");
                    goto VAR24;
                }
            }
            if (VAR30 >= VAR29)
            {
                memset(VAR34, 0, VAR31 * VAR37);
            }
            else
            {
                if (VAR30 + VAR31 > VAR29)
                {
                    VAR31 = VAR29 - VAR30;
                }
                VAR15 = FUN16(VAR4, VAR30, VAR34, VAR31);
                if (VAR15 < 0)
                {
                    FUN6("");
                    goto VAR24;
                }
            }
            uint64_t VAR38 = 0;
            while (VAR38 < VAR31)
            {
                int VAR39;
                if (FUN17(VAR33 + VAR38 * 512, VAR34 + VAR38 * 512, VAR31 - VAR38, &VAR39))
                {
                    VAR15 = FUN18(VAR2, VAR30 + VAR38, VAR33 + VAR38 * 512, VAR39);
                    if (VAR15 < 0)
                    {
                        FUN6("", strerror(-VAR15));
                        goto VAR24;
                    }
                }
                VAR38 += VAR39;
            }
            FUN4(VAR35, 100);
        }
        FUN19(VAR33);
        FUN19(VAR34);
    }
    VAR15 = FUN20(VAR2, VAR12, VAR11);
    if (VAR15 == -VAR40)
    {
        FUN6(""
                     "",
                     VAR12);
    }
    else if (VAR15 < 0)
    {
        FUN6("", VAR12, strerror(-VAR15));
    }
    FUN4(100, 0);
VAR24:
    FUN21();
    if (!VAR16)
    {
        if (VAR3 != NULL)
        {
            FUN22(VAR3);
        }
        if (VAR4 != NULL)
        {
            FUN22(VAR4);
        }
    }
    FUN22(VAR2);
    if (VAR15)
    {
        return 1;
    }
    return 0;
}