static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2 = 0, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10 = 0, VAR11;
    const char *VAR12, *VAR13, *VAR14, *VAR15, *VAR16;
    VAR17 *VAR18, *VAR19;
    VAR20 **VAR21 = NULL, *VAR22 = NULL;
    int64_t VAR23, VAR24, VAR25, VAR26;
    uint64_t VAR27;
    VAR28 *VAR29 = NULL;
    const VAR28 *VAR30;
    BlockDriverInfo VAR31;
    VAR32 *VAR33 = NULL, *VAR34 = NULL;
    VAR32 *VAR35;
    char *VAR36 = NULL;
    const char *VAR37 = NULL;
    float VAR38;
    int VAR39 = 8;
    VAR12 = NULL;
    VAR13 = "";
    VAR14 = "";
    VAR15 = NULL;
    VAR7 = 0;
    for (;;)
    {
        VAR1 = getopt(argc, argv, "");
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
            VAR12 = VAR40;
            break;
        case '':
            VAR13 = VAR40;
            break;
        case '':
            VAR15 = VAR40;
            break;
        case '':
            VAR7 = 1;
            break;
        case '':
            FUN3(""
                         "");
            return 1;
        case '':
            FUN3(""
                         "");
            return 1;
        case '':
            VAR36 = VAR40;
            break;
        case '':
            VAR37 = VAR40;
            break;
        case '':
        {
            int64_t VAR41;
            char *VAR42;
            VAR41 = FUN4(VAR40, &VAR42, VAR43);
            if (VAR41 < 0 || *VAR42)
            {
                FUN3("");
                return 1;
            }
            VAR39 = VAR41 / VAR44;
            break;
        }
        case '':
            VAR10 = 1;
            break;
        case '':
            VAR14 = VAR40;
            break;
        }
    }
    VAR5 = argc - VAR45 - 1;
    if (VAR5 < 1)
    {
        FUN2();
    }
    VAR16 = argv[argc - 1];
    FUN5(VAR10, 2.0);
    if (VAR36 && !strcmp(VAR36, ""))
    {
        VAR2 = FUN6(VAR16, VAR13);
        goto VAR46;
    }
    if (VAR5 > 1 && VAR15)
    {
        FUN3(""
                     "");
        VAR2 = -1;
        goto VAR46;
    }
    FUN7(0, 100);
    VAR21 = FUN8(VAR5 * sizeof(VAR20 *));
    VAR23 = 0;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR21[VAR6] = FUN9(argv[VAR45 + VAR6], VAR12, VAR47);
        if (!VAR21[VAR6])
        {
            FUN3("", argv[VAR45 + VAR6]);
            VAR2 = -1;
            goto VAR46;
        }
        FUN10(VAR21[VAR6], &VAR27);
        VAR23 += VAR27;
    }
    if (VAR37 != NULL)
    {
        if (VAR5 > 1)
        {
            FUN3("");
            VAR2 = -1;
            goto VAR46;
        }
        if (FUN11(VAR21[0], VAR37) < 0)
        {
            FUN3("");
            VAR2 = -1;
            goto VAR46;
        }
    }
    VAR18 = FUN12(VAR13);
    if (!VAR18)
    {
        FUN3("", VAR13);
        VAR2 = -1;
        goto VAR46;
    }
    VAR19 = FUN13(VAR16);
    if (!VAR19)
    {
        FUN3("", VAR16);
        VAR2 = -1;
        goto VAR46;
    }
    VAR34 = FUN14(VAR34, VAR18->VAR34);
    VAR34 = FUN14(VAR34, VAR19->VAR34);
    if (VAR36)
    {
        VAR33 = FUN15(VAR36, VAR34, VAR33);
        if (VAR33 == NULL)
        {
            FUN3("", VAR13);
            VAR2 = -1;
            goto VAR46;
        }
    }
    else
    {
        VAR33 = FUN15("", VAR34, VAR33);
    }
    FUN16(VAR33, VAR48, VAR23 * 512);
    VAR2 = FUN17(VAR13, VAR33, VAR15, NULL);
    if (VAR2 < 0)
    {
        goto VAR46;
    }
    VAR35 = FUN18(VAR33, VAR49);
    if (VAR35)
    {
        VAR15 = VAR35->VAR50.VAR51;
    }
    if (VAR7)
    {
        VAR32 *VAR52 = FUN18(VAR33, VAR53);
        VAR32 *VAR54 = FUN18(VAR33, VAR55);
        if (!VAR18->VAR56)
        {
            FUN3("");
            VAR2 = -1;
            goto VAR46;
        }
        if (VAR52 && VAR52->VAR50.VAR3)
        {
            FUN3(""
                         "");
            VAR2 = -1;
            goto VAR46;
        }
        if (VAR54 && VAR54->VAR50.VAR51 && strcmp(VAR54->VAR50.VAR51, ""))
        {
            FUN3(""
                         "");
            VAR2 = -1;
            goto VAR46;
        }
    }
    VAR2 = FUN19(VAR18, VAR16, VAR33);
    if (VAR2 < 0)
    {
        if (VAR2 == -VAR57)
        {
            FUN3("", VAR13);
        }
        else if (VAR2 == -VAR58)
        {
            FUN3("", VAR13);
        }
        else
        {
            FUN3("", VAR16, VAR13, strerror(-VAR2));
        }
        goto VAR46;
    }
    VAR11 = VAR59;
    VAR2 = FUN20(VAR14, &VAR11);
    if (VAR2 < 0)
    {
        FUN3("", VAR14);
        return -1;
    }
    VAR22 = FUN9(VAR16, VAR13, VAR11);
    if (!VAR22)
    {
        VAR2 = -1;
        goto VAR46;
    }
    VAR6 = 0;
    VAR26 = 0;
    FUN10(VAR21[0], &VAR27);
    VAR29 = FUN21(VAR22, VAR60);
    if (VAR7)
    {
        VAR2 = FUN22(VAR22, &VAR31);
        if (VAR2 < 0)
        {
            FUN3("");
            goto VAR46;
        }
        VAR8 = VAR31.VAR8;
        if (VAR8 <= 0 || VAR8 > VAR60)
        {
            FUN3("");
            VAR2 = -1;
            goto VAR46;
        }
        VAR9 = VAR8 >> 9;
        VAR25 = 0;
        VAR24 = VAR23;
        VAR38 = (float)100 / (VAR24 / FUN23(VAR24, VAR9));
        for (;;)
        {
            int64_t VAR61;
            int VAR62;
            VAR28 *VAR63;
            VAR24 = VAR23 - VAR25;
            if (VAR24 <= 0)
                break;
            if (VAR24 >= VAR9)
                VAR3 = VAR9;
            else
                VAR3 = VAR24;
            VAR61 = VAR25 - VAR26;
            assert(VAR61 >= 0);
            VAR62 = VAR3;
            VAR63 = VAR29;
            while (VAR62 > 0)
            {
                int VAR64;
                while (VAR61 == VAR27)
                {
                    VAR6++;
                    assert(VAR6 < VAR5);
                    VAR26 += VAR27;
                    FUN10(VAR21[VAR6], &VAR27);
                    VAR61 = 0;
                }
                assert(VAR61 < VAR27);
                VAR64 = (VAR62 > VAR27 - VAR61) ? VAR27 - VAR61 : VAR62;
                VAR2 = FUN24(VAR21[VAR6], VAR61, VAR63, VAR64);
                if (VAR2 < 0)
                {
                    FUN3("" VAR65 "", VAR61, strerror(-VAR2));
                    goto VAR46;
                }
                VAR63 += VAR64 * 512;
                VAR61 += VAR64;
                VAR62 -= VAR64;
            }
            assert(VAR62 == 0);
            if (VAR3 < VAR9)
            {
                memset(VAR29 + VAR3 * 512, 0, VAR8 - VAR3 * 512);
            }
            if (!FUN25(VAR29, VAR8))
            {
                VAR2 = FUN26(VAR22, VAR25, VAR29, VAR9);
                if (VAR2 != 0)
                {
                    FUN3("" VAR65 "", VAR25, strerror(-VAR2));
                    goto VAR46;
                }
            }
            VAR25 += VAR3;
            FUN7(VAR38, 100);
        }
        FUN26(VAR22, 0, NULL, 0);
    }
    else
    {
        int VAR66 = FUN27(VAR22);
        VAR25 = 0;
        VAR24 = VAR23 - VAR25;
        VAR38 = (float)100 / (VAR24 / FUN23(VAR24, VAR60 / 512));
        for (;;)
        {
            VAR24 = VAR23 - VAR25;
            if (VAR24 <= 0)
            {
                break;
            }
            if (VAR24 >= (VAR60 / 512))
            {
                VAR3 = (VAR60 / 512);
            }
            else
            {
                VAR3 = VAR24;
            }
            while (VAR25 - VAR26 >= VAR27)
            {
                VAR6++;
                assert(VAR6 < VAR5);
                VAR26 += VAR27;
                FUN10(VAR21[VAR6], &VAR27);
            }
            if (VAR3 > VAR26 + VAR27 - VAR25)
            {
                VAR3 = VAR26 + VAR27 - VAR25;
            }
            if (VAR66)
            {
                if (VAR15)
                {
                    if (!FUN28(VAR21[VAR6], VAR25 - VAR26, VAR3, &VAR4))
                    {
                        VAR25 += VAR4;
                        continue;
                    }
                    VAR3 = VAR4;
                }
            }
            else
            {
                VAR4 = VAR3;
            }
            VAR2 = FUN24(VAR21[VAR6], VAR25 - VAR26, VAR29, VAR3);
            if (VAR2 < 0)
            {
                FUN3("" VAR65 "", VAR25 - VAR26, strerror(-VAR2));
                goto VAR46;
            }
            VAR30 = VAR29;
            while (VAR3 > 0)
            {
                if (!VAR66 || VAR15 || FUN29(VAR30, VAR3, &VAR4, VAR39))
                {
                    VAR2 = FUN30(VAR22, VAR25, VAR30, VAR4);
                    if (VAR2 < 0)
                    {
                        FUN3("" VAR65 "", VAR25, strerror(-VAR2));
                        goto VAR46;
                    }
                }
                VAR25 += VAR4;
                VAR3 -= VAR4;
                VAR30 += VAR4 * 512;
            }
            FUN7(VAR38, 100);
        }
    }
VAR46:
    FUN31();
    FUN32(VAR34);
    FUN32(VAR33);
    FUN33(VAR29);
    if (VAR22)
    {
        FUN34(VAR22);
    }
    if (VAR21)
    {
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        {
            if (VAR21[VAR6])
            {
                FUN34(VAR21[VAR6]);
            }
        }
        FUN35(VAR21);
    }
    if (VAR2)
    {
        return 1;
    }
    return 0;
}