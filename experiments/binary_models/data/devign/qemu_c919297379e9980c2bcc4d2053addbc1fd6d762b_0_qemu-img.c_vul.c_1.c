static int FUN1(int argc, char **argv)
{
    const char *VAR1 = NULL, *VAR2 = NULL, *VAR3, *VAR4, *VAR5;
    VAR6 *VAR7, *VAR8;
    VAR9 *VAR10, *VAR11;
    int64_t VAR12, VAR13;
    VAR14 *VAR15 = NULL, *VAR16 = NULL;
    int VAR17, VAR18;
    int VAR19, VAR20;
    int VAR21 = 0;
    bool VAR22 = false, VAR23 = false, VAR24 = false;
    int VAR25;
    bool VAR26;
    int64_t VAR27;
    int64_t VAR28 = 0;
    int64_t VAR29;
    int VAR30, VAR31;
    uint64_t VAR32;
    bool VAR33 = false;
    VAR3 = VAR34;
    for (;;)
    {
        static const struct option VAR35[] = {{"", VAR36, 0, ''}, {"", VAR37, 0, VAR38}, {"", VAR36, 0, VAR39}, {0, 0, 0, 0}};
        VAR30 = getopt_long(argc, argv, "", VAR35, NULL);
        if (VAR30 == -1)
        {
            break;
        }
        switch (VAR30)
        {
        case '':
        case '':
            FUN2();
            break;
        case '':
            VAR1 = VAR40;
            break;
        case '':
            VAR2 = VAR40;
            break;
        case '':
            VAR3 = VAR40;
            break;
        case '':
            VAR22 = true;
            break;
        case '':
            VAR23 = true;
            break;
        case '':
            VAR24 = true;
            break;
        case VAR38:
        {
            VAR41 *VAR42;
            VAR42 = FUN3(&VAR43, VAR40, true);
            if (!VAR42)
            {
                VAR21 = 2;
                goto VAR44;
            }
        }
        break;
        case VAR39:
            VAR33 = true;
            break;
        }
    }
    if (VAR23)
    {
        VAR22 = false;
    }
    if (VAR45 != argc - 2)
    {
        FUN4("");
    }
    VAR4 = argv[VAR45++];
    VAR5 = argv[VAR45++];
    if (FUN5(&VAR43, VAR46, NULL, NULL))
    {
        VAR21 = 2;
        goto VAR44;
    }
    FUN6(VAR22, 2.0);
    VAR25 = 0;
    VAR21 = FUN7(VAR3, &VAR25, &VAR26);
    if (VAR21 < 0)
    {
        FUN8("", VAR3);
        VAR21 = 2;
        goto VAR47;
    }
    VAR7 = FUN9(VAR33, VAR4, VAR1, VAR25, VAR26, VAR23);
    if (!VAR7)
    {
        VAR21 = 2;
        goto VAR47;
    }
    VAR8 = FUN9(VAR33, VAR5, VAR2, VAR25, VAR26, VAR23);
    if (!VAR8)
    {
        VAR21 = 2;
        goto VAR48;
    }
    VAR10 = FUN10(VAR7);
    VAR11 = FUN10(VAR8);
    VAR15 = FUN11(VAR7, VAR49);
    VAR16 = FUN11(VAR8, VAR49);
    VAR12 = FUN12(VAR7);
    if (VAR12 < 0)
    {
        FUN8("", VAR4, strerror(-VAR12));
        VAR21 = 4;
        goto VAR50;
    }
    VAR13 = FUN12(VAR8);
    if (VAR13 < 0)
    {
        FUN8("", VAR5, strerror(-VAR13));
        VAR21 = 4;
        goto VAR50;
    }
    VAR27 = FUN13(VAR12, VAR13);
    VAR32 = FUN14(VAR12, VAR13);
    FUN15(0, 100);
    if (VAR24 && VAR12 != VAR13)
    {
        VAR21 = 1;
        FUN16(VAR23, "");
        goto VAR50;
    }
    for (;;)
    {
        int64_t VAR51, VAR52;
        VAR9 *VAR53;
        VAR29 = FUN17(VAR27, VAR28);
        if (VAR29 <= 0)
        {
            break;
        }
        VAR51 = FUN18(VAR10, NULL, VAR28, VAR12 - VAR28, &VAR17, &VAR53);
        if (VAR51 < 0)
        {
            VAR21 = 3;
            FUN8("", VAR4);
            goto VAR50;
        }
        VAR19 = VAR51 & VAR54;
        VAR52 = FUN18(VAR11, NULL, VAR28, VAR13 - VAR28, &VAR18, &VAR53);
        if (VAR52 < 0)
        {
            VAR21 = 3;
            FUN8("", VAR5);
            goto VAR50;
        }
        VAR20 = VAR52 & VAR54;
        if (VAR17)
        {
            VAR29 = FUN13(VAR29, VAR17);
        }
        if (VAR18)
        {
            VAR29 = FUN13(VAR29, VAR18);
        }
        if (VAR24)
        {
            if ((VAR51 & ~VAR55) != (VAR52 & ~VAR55))
            {
                VAR21 = 1;
                FUN16(VAR23, "" VAR56 "", FUN19(VAR28));
                goto VAR50;
            }
        }
        if ((VAR51 & VAR57) && (VAR52 & VAR57))
        {
            VAR29 = FUN13(VAR17, VAR18);
        }
        else if (VAR19 == VAR20)
        {
            if (VAR19)
            {
                VAR21 = FUN20(VAR7, VAR28 << VAR58, VAR15, VAR29 << VAR58);
                if (VAR21 < 0)
                {
                    FUN8("" VAR56 ""
                                 "",
                                 FUN19(VAR28), VAR4, strerror(-VAR21));
                    VAR21 = 4;
                    goto VAR50;
                }
                VAR21 = FUN20(VAR8, VAR28 << VAR58, VAR16, VAR29 << VAR58);
                if (VAR21 < 0)
                {
                    FUN8("" VAR56 "", FUN19(VAR28), VAR5, strerror(-VAR21));
                    VAR21 = 4;
                    goto VAR50;
                }
                VAR21 = FUN21(VAR15, VAR16, VAR29, &VAR31);
                if (VAR21 || VAR31 != VAR29)
                {
                    FUN16(VAR23, "" VAR56 "", FUN19(VAR21 ? VAR28 : VAR28 + VAR31));
                    VAR21 = 1;
                    goto VAR50;
                }
            }
        }
        else
        {
            if (VAR19)
            {
                VAR21 = FUN22(VAR7, VAR28, VAR29, VAR4, VAR15, VAR23);
            }
            else
            {
                VAR21 = FUN22(VAR8, VAR28, VAR29, VAR5, VAR15, VAR23);
            }
            if (VAR21)
            {
                if (VAR21 < 0)
                {
                    FUN8("" VAR56 "", FUN19(VAR28), strerror(-VAR21));
                    VAR21 = 4;
                }
                goto VAR50;
            }
        }
        VAR28 += VAR29;
        FUN15(((float)VAR29 / VAR32) * 100, 100);
    }
    if (VAR12 != VAR13)
    {
        VAR6 *VAR59;
        int64_t VAR60;
        const char *VAR61;
        FUN16(VAR23, "");
        if (VAR12 > VAR13)
        {
            VAR60 = VAR12;
            VAR59 = VAR7;
            VAR61 = VAR4;
        }
        else
        {
            VAR60 = VAR13;
            VAR59 = VAR8;
            VAR61 = VAR5;
        }
        for (;;)
        {
            VAR29 = FUN17(VAR60, VAR28);
            if (VAR29 <= 0)
            {
                break;
            }
            VAR21 = FUN23(FUN10(VAR59), NULL, VAR28, VAR29, &VAR31);
            if (VAR21 < 0)
            {
                VAR21 = 3;
                FUN8("", VAR61);
                goto VAR50;
            }
            VAR29 = VAR31;
            if (VAR21)
            {
                VAR21 = FUN22(VAR59, VAR28, VAR29, VAR61, VAR15, VAR23);
                if (VAR21)
                {
                    if (VAR21 < 0)
                    {
                        FUN8("" VAR56 "", FUN19(VAR28), VAR61, strerror(-VAR21));
                        VAR21 = 4;
                    }
                    goto VAR50;
                }
            }
            VAR28 += VAR29;
            FUN15(((float)VAR29 / VAR32) * 100, 100);
        }
    }
    FUN16(VAR23, "");
    VAR21 = 0;
VAR50:
    FUN24(VAR15);
    FUN24(VAR16);
    FUN25(VAR8);
VAR48:
    FUN25(VAR7);
VAR47:
    FUN26();
VAR44:
    return VAR21;
}