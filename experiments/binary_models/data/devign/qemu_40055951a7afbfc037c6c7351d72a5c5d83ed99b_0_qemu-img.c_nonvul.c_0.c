static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    int64_t VAR9 = 0;
    int VAR10 = 0, VAR11, VAR12;
    const char *VAR13, *VAR14, *VAR15, *VAR16, *VAR17, *VAR18;
    VAR19 *VAR20, *VAR21;
    VAR22 **VAR23 = NULL, *VAR24 = NULL;
    int64_t VAR25, VAR26, VAR27, VAR28;
    VAR29 *VAR30 = NULL;
    VAR31 *VAR32 = NULL;
    size_t VAR33 = VAR34 / VAR35;
    const VAR31 *VAR36;
    BlockDriverInfo VAR37;
    VAR38 *VAR39 = NULL;
    VAR40 *VAR41 = NULL;
    const char *VAR42;
    char *VAR43 = NULL;
    const char *VAR44 = NULL;
    int VAR45 = 8;
    bool VAR46 = false;
    VAR47 *VAR48 = NULL;
    VAR38 *VAR49 = NULL;
    VAR13 = NULL;
    VAR14 = "";
    VAR15 = "";
    VAR16 = VAR50;
    VAR17 = NULL;
    VAR6 = 0;
    VAR8 = 0;
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
            VAR13 = VAR51;
            break;
        case '':
            VAR14 = VAR51;
            break;
        case '':
            VAR17 = VAR51;
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            FUN3(""
                         "");
            VAR9 = -1;
            goto VAR52;
        case '':
            FUN3(""
                         "");
            VAR9 = -1;
            goto VAR52;
        case '':
            if (!FUN4(VAR51))
            {
                FUN3("", VAR51);
                VAR9 = -1;
                goto VAR52;
            }
            if (!VAR43)
            {
                VAR43 = FUN5(VAR51);
            }
            else
            {
                char *VAR53 = VAR43;
                VAR43 = FUN6("", VAR43, VAR51);
                FUN7(VAR53);
            }
            break;
        case '':
            VAR44 = VAR51;
            break;
        case '':
            if (FUN8(VAR51, VAR54, NULL))
            {
                VAR49 = FUN9(&VAR55, VAR51, 0);
                if (!VAR49)
                {
                    FUN3("", VAR51);
                    VAR9 = -1;
                    goto VAR52;
                }
            }
            else
            {
                VAR44 = VAR51;
            }
            break;
        case '':
        {
            int64_t VAR56;
            char *VAR57;
            VAR56 = FUN10(VAR51, &VAR57, VAR58);
            if (VAR56 < 0 || *VAR57)
            {
                FUN3("");
                VAR9 = -1;
                goto VAR52;
            }
            VAR45 = VAR56 / VAR35;
            break;
        }
        case '':
            VAR10 = 1;
            break;
        case '':
            VAR15 = VAR51;
            break;
        case '':
            VAR16 = VAR51;
            break;
        case '':
            VAR46 = true;
            break;
        case '':
            VAR8 = 1;
            break;
        }
    }
    if (VAR46)
    {
        VAR10 = 0;
    }
    FUN11(VAR10, 1.0);
    VAR4 = argc - VAR59 - 1;
    VAR18 = VAR4 >= 1 ? argv[argc - 1] : NULL;
    if (VAR43 && FUN12(VAR43))
    {
        VAR9 = FUN13(VAR18, VAR14);
        goto VAR60;
    }
    if (VAR4 < 1)
    {
        FUN14("");
    }
    if (VAR4 > 1 && VAR17)
    {
        FUN3(""
                     "");
        VAR9 = -1;
        goto VAR60;
    }
    VAR12 = VAR61;
    VAR9 = FUN15(VAR16, &VAR12);
    if (VAR9 < 0)
    {
        FUN3("", VAR16);
        goto VAR60;
    }
    FUN16(0, 100);
    VAR23 = FUN17(VAR22 *, VAR4);
    VAR30 = FUN18(VAR29, VAR4);
    VAR25 = 0;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        char *VAR62 = VAR4 > 1 ? FUN6("", VAR5) : FUN5("");
        VAR23[VAR5] = FUN19(VAR62, argv[VAR59 + VAR5], VAR13, VAR12, true, VAR46);
        FUN7(VAR62);
        if (!VAR23[VAR5])
        {
            FUN3("", argv[VAR59 + VAR5]);
            VAR9 = -1;
            goto VAR60;
        }
        VAR30[VAR5] = FUN20(VAR23[VAR5]);
        if (VAR30[VAR5] < 0)
        {
            FUN3("", argv[VAR59 + VAR5], strerror(-VAR30[VAR5]));
            VAR9 = -1;
            goto VAR60;
        }
        VAR25 += VAR30[VAR5];
    }
    if (VAR49)
    {
        VAR9 = FUN21(VAR23[0], FUN22(VAR49, VAR63), FUN22(VAR49, VAR64), &VAR48);
    }
    else if (VAR44 != NULL)
    {
        if (VAR4 > 1)
        {
            FUN3("");
            VAR9 = -1;
            goto VAR60;
        }
        FUN23(VAR23[0], VAR44, &VAR48);
    }
    if (VAR48)
    {
        FUN3("", FUN24(VAR48));
        FUN25(VAR48);
        VAR9 = -1;
        goto VAR60;
    }
    VAR20 = FUN26(VAR14);
    if (!VAR20)
    {
        FUN3("", VAR14);
        VAR9 = -1;
        goto VAR60;
    }
    VAR21 = FUN27(VAR18, true);
    if (!VAR21)
    {
        FUN3("", VAR18);
        VAR9 = -1;
        goto VAR60;
    }
    VAR41 = FUN28(VAR41, VAR20->VAR41);
    VAR41 = FUN28(VAR41, VAR21->VAR41);
    VAR39 = FUN29(VAR41, NULL, 0, &VAR65);
    if (VAR43 && FUN30(VAR39, VAR43, NULL))
    {
        FUN3("", VAR14);
        VAR9 = -1;
        goto VAR60;
    }
    FUN31(VAR39, VAR66, VAR25 * 512);
    VAR9 = FUN32(VAR14, VAR39, VAR17, NULL);
    if (VAR9 < 0)
    {
        goto VAR60;
    }
    VAR42 = FUN22(VAR39, VAR67);
    if (VAR42)
    {
        VAR17 = VAR42;
    }
    if (VAR6)
    {
        bool VAR68 = FUN33(VAR39, VAR69, false);
        const char *VAR70 = FUN22(VAR39, VAR71);
        if (!VAR20->VAR72)
        {
            FUN3("");
            VAR9 = -1;
            goto VAR60;
        }
        if (VAR68)
        {
            FUN3(""
                         "");
            VAR9 = -1;
            goto VAR60;
        }
        if (VAR70 && strcmp(VAR70, ""))
        {
            FUN3(""
                         "");
            VAR9 = -1;
            goto VAR60;
        }
    }
    if (!VAR8)
    {
        VAR9 = FUN34(VAR20, VAR18, VAR39, &VAR48);
        if (VAR9 < 0)
        {
            FUN3("", VAR18, VAR14, FUN24(VAR48));
            FUN25(VAR48);
            goto VAR60;
        }
    }
    VAR11 = VAR45 ? (VAR73 | VAR74) : VAR73;
    VAR9 = FUN15(VAR15, &VAR11);
    if (VAR9 < 0)
    {
        FUN3("", VAR15);
        goto VAR60;
    }
    VAR24 = FUN19("", VAR18, VAR14, VAR11, true, VAR46);
    if (!VAR24)
    {
        VAR9 = -1;
        goto VAR60;
    }
    VAR5 = 0;
    VAR28 = 0;
    VAR33 = FUN35(32768, FUN36(VAR33, FUN36(VAR24->VAR75.VAR76, VAR24->VAR75.VAR77)));
    VAR32 = FUN37(VAR24, VAR33 * VAR35);
    if (VAR8)
    {
        int64_t VAR78 = FUN20(VAR24);
        if (VAR78 < 0)
        {
            FUN3("", strerror(-VAR78));
            VAR9 = -1;
            goto VAR60;
        }
        else if (VAR78 < VAR25)
        {
            FUN3("");
            VAR9 = -1;
            goto VAR60;
        }
    }
    VAR7 = 0;
    VAR9 = FUN38(VAR24, &VAR37);
    if (VAR9 < 0)
    {
        if (VAR6)
        {
            FUN3("");
            goto VAR60;
        }
    }
    else
    {
        VAR6 = VAR6 || VAR37.VAR79;
        VAR7 = VAR37.VAR80 / VAR35;
    }
    if (VAR6)
    {
        if (VAR7 <= 0 || VAR7 > VAR33)
        {
            FUN3("");
            VAR9 = -1;
            goto VAR60;
        }
        VAR27 = 0;
        VAR26 = VAR25;
        for (;;)
        {
            int64_t VAR81;
            int VAR82;
            VAR31 *VAR83;
            VAR26 = VAR25 - VAR27;
            if (VAR26 <= 0)
                break;
            if (VAR26 >= VAR7)
                VAR2 = VAR7;
            else
                VAR2 = VAR26;
            VAR81 = VAR27 - VAR28;
            assert(VAR81 >= 0);
            VAR82 = VAR2;
            VAR83 = VAR32;
            while (VAR82 > 0)
            {
                int VAR84;
                while (VAR81 == VAR30[VAR5])
                {
                    VAR28 += VAR30[VAR5];
                    VAR5++;
                    assert(VAR5 < VAR4);
                    VAR81 = 0;
                }
                assert(VAR81 < VAR30[VAR5]);
                VAR84 = VAR82 > VAR30[VAR5] - VAR81 ? VAR30[VAR5] - VAR81 : VAR82;
                VAR9 = FUN39(VAR23[VAR5], VAR81, VAR83, VAR84);
                if (VAR9 < 0)
                {
                    FUN3("" VAR85 "", VAR81, strerror(-VAR9));
                    goto VAR60;
                }
                VAR83 += VAR84 * 512;
                VAR81 += VAR84;
                VAR82 -= VAR84;
            }
            assert(VAR82 == 0);
            if (!FUN40(VAR32, VAR2 * VAR35))
            {
                VAR9 = FUN41(VAR24, VAR27, VAR32, VAR2);
                if (VAR9 != 0)
                {
                    FUN3("" VAR85 "", VAR27, strerror(-VAR9));
                    goto VAR60;
                }
            }
            VAR27 += VAR2;
            FUN16(100.0 * VAR27 / VAR25, 0);
        }
        FUN41(VAR24, 0, NULL, 0);
    }
    else
    {
        int64_t VAR86, VAR87, VAR88;
        bool VAR89;
        int VAR90 = VAR45 ? FUN42(VAR24) : 0;
        if (!VAR90 && FUN43(VAR24))
        {
            VAR9 = FUN44(VAR24, VAR91);
            if (VAR9 < 0)
            {
                goto VAR60;
            }
            VAR90 = 1;
        }
        VAR86 = VAR25;
        VAR89 = VAR10 && (VAR17 || VAR90);
    VAR92:
        VAR27 = 0;
        VAR87 = 0;
        VAR88 = 0;
        for (;;)
        {
            VAR26 = VAR25 - VAR27;
            if (VAR26 <= 0)
            {
                if (VAR89)
                {
                    VAR86 = VAR87;
                    VAR89 = false;
                    goto VAR92;
                }
                VAR9 = 0;
                break;
            }
            while (VAR27 - VAR28 >= VAR30[VAR5])
            {
                VAR28 += VAR30[VAR5];
                VAR5++;
                assert(VAR5 < VAR4);
            }
            if ((VAR17 || VAR90) && VAR27 >= VAR88)
            {
                VAR2 = VAR26 > VAR93 ? VAR93 : VAR26;
                VAR9 = FUN45(VAR23[VAR5], VAR27 - VAR28, VAR2, &VAR3);
                if (VAR9 < 0)
                {
                    FUN3("" VAR85 "", VAR27 - VAR28, strerror(-VAR9));
                    goto VAR60;
                }
                if (VAR90 && !VAR17 && (VAR9 & VAR94))
                {
                    VAR27 += VAR3;
                    continue;
                }
                if (VAR17)
                {
                    if (!(VAR9 & VAR95))
                    {
                        VAR27 += VAR3;
                        continue;
                    }
                    VAR26 = VAR3;
                }
                VAR88 = VAR27 + VAR3;
            }
            VAR2 = FUN35(VAR26, VAR33);
            if (VAR7 > 0 && VAR2 >= VAR7)
            {
                int64_t VAR96 = (VAR27 + VAR2);
                VAR96 -= VAR96 % VAR7;
                if (VAR27 + VAR2 > VAR96)
                {
                    VAR2 = VAR96 - VAR27;
                }
            }
            VAR2 = FUN35(VAR2, VAR30[VAR5] - (VAR27 - VAR28));
            VAR87 += VAR2;
            if (VAR89)
            {
                VAR27 += VAR2;
                continue;
            }
            VAR3 = VAR2;
            VAR9 = FUN39(VAR23[VAR5], VAR27 - VAR28, VAR32, VAR2);
            if (VAR9 < 0)
            {
                FUN3("" VAR85 "", VAR27 - VAR28, strerror(-VAR9));
                goto VAR60;
            }
            VAR36 = VAR32;
            while (VAR2 > 0)
            {
                if (!VAR90 || FUN46(VAR36, VAR2, &VAR3, VAR45))
                {
                    VAR9 = FUN47(VAR24, VAR27, VAR36, VAR3);
                    if (VAR9 < 0)
                    {
                        FUN3("" VAR85 "", VAR27, strerror(-VAR9));
                        goto VAR60;
                    }
                }
                VAR27 += VAR3;
                VAR2 -= VAR3;
                VAR36 += VAR3 * 512;
            }
            FUN16(100.0 * VAR87 / VAR86, 0);
        }
    }
VAR60:
    if (!VAR9)
    {
        FUN16(100, 0);
    }
    FUN48();
    FUN49(VAR39);
    FUN50(VAR41);
    FUN51(VAR32);
    if (VAR49)
    {
        FUN49(VAR49);
    }
    if (VAR24)
    {
        FUN52(VAR24);
    }
    if (VAR23)
    {
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        {
            if (VAR23[VAR5])
            {
                FUN52(VAR23[VAR5]);
            }
        }
        FUN7(VAR23);
    }
    FUN7(VAR30);
VAR52:
    FUN7(VAR43);
    if (VAR9)
    {
        return 1;
    }
    return 0;
}