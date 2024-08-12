static int FUN1(int argc, char **argv)
{
    VAR1 *VAR2 = NULL;
    int VAR3, VAR4 = 0;
    char *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    const char *VAR10 = NULL, *VAR11, *VAR12;
    int VAR13;
    bool VAR14 = false, VAR15 = false;
    VAR16 *VAR17 = NULL;
    VAR18 *VAR19 = NULL;
    VAR12 = VAR20;
    for (;;)
    {
        VAR3 = getopt(argc, argv, "");
        if (VAR3 == -1)
        {
            break;
        }
        switch (VAR3)
        {
        case '':
        case '':
            FUN2();
            break;
        case '':
            if (!FUN3(VAR21))
            {
                FUN4("", VAR21);
                VAR4 = -1;
                goto VAR22;
            }
            if (!VAR5)
            {
                VAR5 = FUN5(VAR21);
            }
            else
            {
                char *VAR23 = VAR5;
                VAR5 = FUN6("", VAR5, VAR21);
                FUN7(VAR23);
            }
            break;
        case '':
            VAR10 = VAR21;
            break;
        case '':
            VAR12 = VAR21;
            break;
        case '':
            VAR15 = true;
            break;
        case '':
            VAR14 = true;
            break;
        }
    }
    if (!VAR5)
    {
        FUN8("");
    }
    if (VAR14)
    {
        VAR15 = false;
    }
    FUN9(VAR15, 1.0);
    VAR11 = (VAR24 == argc - 1) ? argv[argc - 1] : NULL;
    if (VAR10 && FUN10(VAR5))
    {
        VAR4 = FUN11(VAR11, VAR10);
        goto VAR22;
    }
    if (VAR24 != argc - 1)
    {
        FUN4("");
        VAR4 = -1;
        goto VAR22;
    }
    VAR13 = VAR25 | VAR26;
    VAR4 = FUN12(VAR12, &VAR13);
    if (VAR4 < 0)
    {
        FUN4("", VAR12);
        goto VAR22;
    }
    VAR17 = FUN13("", VAR11, VAR10, VAR13, true, VAR14);
    if (!VAR17)
    {
        VAR4 = -1;
        goto VAR22;
    }
    VAR19 = FUN14(VAR17);
    VAR10 = VAR19->VAR27->VAR28;
    if (FUN10(VAR5))
    {
        VAR4 = FUN11(VAR11, VAR10);
        goto VAR22;
    }
    if (!VAR19->VAR27->VAR7)
    {
        FUN4("", VAR10);
        VAR4 = -1;
        goto VAR22;
    }
    VAR7 = FUN15(VAR7, VAR19->VAR27->VAR7);
    VAR9 = FUN16(VAR7, NULL, 0, &VAR29);
    if (VAR5)
    {
        FUN17(VAR9, VAR5, NULL, &VAR2);
        if (VAR2)
        {
            FUN4("", VAR10);
            FUN18(VAR2);
            VAR4 = -1;
            goto VAR22;
        }
    }
    FUN19(0.VAR30, 0);
    VAR4 = FUN20(VAR19, VAR9, &VAR31);
    FUN19(100.VAR30, 0);
    if (VAR4 < 0)
    {
        FUN4("", strerror(-VAR4));
        goto VAR22;
    }
VAR22:
    FUN21();
    FUN22(VAR17);
    FUN23(VAR9);
    FUN24(VAR7);
    FUN7(VAR5);
    if (VAR4)
    {
        return 1;
    }
    return 0;
}