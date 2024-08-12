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
    int64_t VAR26;
    int64_t VAR27 = 0;
    int64_t VAR28;
    int VAR29, VAR30;
    uint64_t VAR31;
    VAR3 = VAR32;
    for (;;)
    {
        VAR29 = getopt(argc, argv, "");
        if (VAR29 == -1)
        {
            break;
        }
        switch (VAR29)
        {
        case '':
        case '':
            FUN2();
            break;
        case '':
            VAR1 = VAR33;
            break;
        case '':
            VAR2 = VAR33;
            break;
        case '':
            VAR3 = VAR33;
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
        }
    }
    if (VAR23)
    {
        VAR22 = false;
    }
    if (VAR34 != argc - 2)
    {
        FUN3("");
    }
    VAR4 = argv[VAR34++];
    VAR5 = argv[VAR34++];
    FUN4(VAR22, 2.0);
    VAR25 = VAR35;
    VAR21 = FUN5(VAR3, &VAR25);
    if (VAR21 < 0)
    {
        FUN6("", VAR3);
        VAR21 = 2;
        goto VAR36;
    }
    VAR7 = FUN7("", VAR4, VAR1, VAR25, true, VAR23);
    if (!VAR7)
    {
        VAR21 = 2;
        goto VAR36;
    }
    VAR10 = FUN8(VAR7);
    VAR8 = FUN7("", VAR5, VAR2, VAR25, true, VAR23);
    if (!VAR8)
    {
        VAR21 = 2;
        goto VAR37;
    }
    VAR11 = FUN8(VAR8);
    VAR15 = FUN9(VAR7, VAR38);
    VAR16 = FUN9(VAR8, VAR38);
    VAR12 = FUN10(VAR7);
    if (VAR12 < 0)
    {
        FUN6("", VAR4, strerror(-VAR12));
        VAR21 = 4;
        goto VAR39;
    }
    VAR13 = FUN10(VAR8);
    if (VAR13 < 0)
    {
        FUN6("", VAR5, strerror(-VAR13));
        VAR21 = 4;
        goto VAR39;
    }
    VAR26 = FUN11(VAR12, VAR13);
    VAR31 = FUN12(VAR12, VAR13);
    FUN13(0, 100);
    if (VAR24 && VAR12 != VAR13)
    {
        VAR21 = 1;
        FUN14(VAR23, "");
        goto VAR39;
    }
    for (;;)
    {
        int64_t VAR40, VAR41;
        VAR9 *VAR42;
        VAR28 = FUN15(VAR26, VAR27);
        if (VAR28 <= 0)
        {
            break;
        }
        VAR40 = FUN16(VAR10, NULL, VAR27, VAR12 - VAR27, &VAR17, &VAR42);
        if (VAR40 < 0)
        {
            VAR21 = 3;
            FUN6("", VAR4);
            goto VAR39;
        }
        VAR19 = VAR40 & VAR43;
        VAR41 = FUN16(VAR11, NULL, VAR27, VAR13 - VAR27, &VAR18, &VAR42);
        if (VAR41 < 0)
        {
            VAR21 = 3;
            FUN6("", VAR5);
            goto VAR39;
        }
        VAR20 = VAR41 & VAR43;
        if (VAR17)
        {
            VAR28 = FUN11(VAR28, VAR17);
        }
        if (VAR18)
        {
            VAR28 = FUN11(VAR28, VAR18);
        }
        if (VAR24)
        {
            if ((VAR40 & ~VAR44) != (VAR41 & ~VAR44))
            {
                VAR21 = 1;
                FUN14(VAR23, "" VAR45 "", FUN17(VAR27));
                goto VAR39;
            }
        }
        if ((VAR40 & VAR46) && (VAR41 & VAR46))
        {
            VAR28 = FUN11(VAR17, VAR18);
        }
        else if (VAR19 == VAR20)
        {
            if (VAR19)
            {
                VAR21 = FUN18(VAR7, VAR27, VAR15, VAR28);
                if (VAR21 < 0)
                {
                    FUN6("" VAR45 ""
                                 "",
                                 FUN17(VAR27), VAR4, strerror(-VAR21));
                    VAR21 = 4;
                    goto VAR39;
                }
                VAR21 = FUN18(VAR8, VAR27, VAR16, VAR28);
                if (VAR21 < 0)
                {
                    FUN6("" VAR45 "", FUN17(VAR27), VAR5, strerror(-VAR21));
                    VAR21 = 4;
                    goto VAR39;
                }
                VAR21 = FUN19(VAR15, VAR16, VAR28, &VAR30);
                if (VAR21 || VAR30 != VAR28)
                {
                    FUN14(VAR23, "" VAR45 "", FUN17(VAR21 ? VAR27 : VAR27 + VAR30));
                    VAR21 = 1;
                    goto VAR39;
                }
            }
        }
        else
        {
            if (VAR19)
            {
                VAR21 = FUN20(VAR7, VAR27, VAR28, VAR4, VAR15, VAR23);
            }
            else
            {
                VAR21 = FUN20(VAR8, VAR27, VAR28, VAR5, VAR15, VAR23);
            }
            if (VAR21)
            {
                if (VAR21 < 0)
                {
                    FUN6("" VAR45 "", FUN17(VAR27), strerror(-VAR21));
                    VAR21 = 4;
                }
                goto VAR39;
            }
        }
        VAR27 += VAR28;
        FUN13(((float)VAR28 / VAR31) * 100, 100);
    }
    if (VAR12 != VAR13)
    {
        VAR6 *VAR47;
        int64_t VAR48;
        const char *VAR49;
        FUN14(VAR23, "");
        if (VAR12 > VAR13)
        {
            VAR48 = VAR12;
            VAR47 = VAR7;
            VAR49 = VAR4;
        }
        else
        {
            VAR48 = VAR13;
            VAR47 = VAR8;
            VAR49 = VAR5;
        }
        for (;;)
        {
            VAR28 = FUN15(VAR48, VAR27);
            if (VAR28 <= 0)
            {
                break;
            }
            VAR21 = FUN21(FUN8(VAR47), NULL, VAR27, VAR28, &VAR30);
            if (VAR21 < 0)
            {
                VAR21 = 3;
                FUN6("", VAR49);
                goto VAR39;
            }
            VAR28 = VAR30;
            if (VAR21)
            {
                VAR21 = FUN20(VAR47, VAR27, VAR28, VAR49, VAR15, VAR23);
                if (VAR21)
                {
                    if (VAR21 < 0)
                    {
                        FUN6("" VAR45 "", FUN17(VAR27), VAR49, strerror(-VAR21));
                        VAR21 = 4;
                    }
                    goto VAR39;
                }
            }
            VAR27 += VAR28;
            FUN13(((float)VAR28 / VAR31) * 100, 100);
        }
    }
    FUN14(VAR23, "");
    VAR21 = 0;
VAR39:
    FUN22(VAR15);
    FUN22(VAR16);
    FUN23(VAR8);
VAR37:
    FUN23(VAR7);
VAR36:
    FUN24();
    return VAR21;
}