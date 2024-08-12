static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2, VAR3;
    const char *VAR4, *VAR5, *VAR6, *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11, *VAR12;
    bool VAR13 = false, VAR14 = false, VAR15 = false;
    bool VAR16;
    VAR17 *VAR18 = NULL;
    CommonBlockJobCBInfo VAR19;
    bool VAR20 = false;
    VAR21 *VAR22;
    VAR5 = NULL;
    VAR6 = VAR23;
    VAR7 = NULL;
    for (;;)
    {
        static const struct option VAR24[] = {{"", VAR25, 0, ''}, {"", VAR26, 0, VAR27}, {"", VAR25, 0, VAR28}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR24, NULL);
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
            VAR5 = VAR29;
            break;
        case '':
            VAR6 = VAR29;
            break;
        case '':
            VAR7 = VAR29;
            VAR15 = true;
            break;
        case '':
            VAR15 = true;
            break;
        case '':
            VAR13 = true;
            break;
        case '':
            VAR14 = true;
            break;
        case VAR27:
        {
            VAR30 *VAR31;
            VAR31 = FUN3(&VAR32, VAR29, true);
            if (!VAR31)
            {
                return 1;
            }
        }
        break;
        case VAR28:
            VAR20 = true;
            break;
        }
    }
    if (VAR14)
    {
        VAR13 = false;
    }
    if (VAR33 != argc - 1)
    {
        FUN4("");
    }
    VAR4 = argv[VAR33++];
    if (FUN5(&VAR32, VAR34, NULL, NULL))
    {
        return 1;
    }
    VAR3 = VAR35 | VAR36;
    VAR2 = FUN6(VAR6, &VAR3, &VAR16);
    if (VAR2 < 0)
    {
        FUN7("", VAR6);
        return 1;
    }
    VAR9 = FUN8(VAR20, VAR4, VAR5, VAR3, VAR16, VAR14);
    if (!VAR9)
    {
        return 1;
    }
    VAR11 = FUN9(VAR9);
    FUN10(VAR13, 1.VAR37);
    FUN11(0.VAR37, 100);
    if (VAR7)
    {
        VAR12 = FUN12(VAR11, VAR7);
        if (!VAR12)
        {
            FUN13(&VAR18, "", VAR7, VAR4);
            goto VAR38;
        }
    }
    else
    {
        VAR12 = FUN14(VAR11);
        if (!VAR12)
        {
            FUN13(&VAR18, "");
            goto VAR38;
        }
    }
    VAR19 = (VAR39){
        .VAR40 = &VAR18,
        .VAR11 = VAR11,
    };
    VAR22 = FUN15(VAR11);
    FUN16(VAR22);
    FUN17("", VAR11, VAR12, VAR41, 0, VAR42, VAR43, &VAR19, &VAR18, false);
    FUN18(VAR22);
    if (VAR18)
    {
        goto VAR38;
    }
    if (!VAR15)
    {
        FUN19(VAR11);
    }
    FUN20(VAR11->VAR44, &VAR18);
    if (VAR18)
    {
        goto VAR45;
    }
    if (!VAR15 && VAR11->VAR46->VAR47)
    {
        VAR2 = VAR11->VAR46->FUN21(VAR11);
        if (VAR2)
        {
            FUN22(&VAR18, -VAR2, "", VAR4);
            goto VAR45;
        }
    }
VAR45:
    if (!VAR15)
    {
        FUN23(VAR11);
    }
VAR38:
    FUN24();
    FUN25(VAR9);
    if (VAR18)
    {
        FUN26(VAR18);
        return 1;
    }
    FUN27(VAR14, "");
    return 0;
}