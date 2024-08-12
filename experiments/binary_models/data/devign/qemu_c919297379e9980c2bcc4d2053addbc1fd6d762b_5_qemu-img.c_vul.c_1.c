static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2, VAR3;
    const char *VAR4, *VAR5, *VAR6, *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11, *VAR12;
    VAR13 *VAR14;
    bool VAR15 = false, VAR16 = false, VAR17 = false;
    bool VAR18;
    VAR19 *VAR20 = NULL;
    CommonBlockJobCBInfo VAR21;
    bool VAR22 = false;
    VAR23 *VAR24;
    VAR5 = NULL;
    VAR6 = VAR25;
    VAR7 = NULL;
    for (;;)
    {
        static const struct option VAR26[] = {{"", VAR27, 0, ''}, {"", VAR28, 0, VAR29}, {"", VAR27, 0, VAR30}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR26, NULL);
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
            VAR5 = VAR31;
            break;
        case '':
            VAR6 = VAR31;
            break;
        case '':
            VAR7 = VAR31;
            VAR17 = true;
            break;
        case '':
            VAR17 = true;
            break;
        case '':
            VAR15 = true;
            break;
        case '':
            VAR16 = true;
            break;
        case VAR29:
        {
            VAR32 *VAR33;
            VAR33 = FUN3(&VAR34, VAR31, true);
            if (!VAR33)
            {
                return 1;
            }
        }
        break;
        case VAR30:
            VAR22 = true;
            break;
        }
    }
    if (VAR16)
    {
        VAR15 = false;
    }
    if (VAR35 != argc - 1)
    {
        FUN4("");
    }
    VAR4 = argv[VAR35++];
    if (FUN5(&VAR34, VAR36, NULL, NULL))
    {
        return 1;
    }
    VAR3 = VAR37 | VAR38;
    VAR2 = FUN6(VAR6, &VAR3, &VAR18);
    if (VAR2 < 0)
    {
        FUN7("", VAR6);
        return 1;
    }
    VAR9 = FUN8(VAR22, VAR4, VAR5, VAR3, VAR18, VAR16);
    if (!VAR9)
    {
        return 1;
    }
    VAR11 = FUN9(VAR9);
    FUN10(VAR15, 1.VAR39);
    FUN11(0.VAR39, 100);
    if (VAR7)
    {
        VAR12 = FUN12(VAR11, VAR7);
        if (!VAR12)
        {
            FUN13(&VAR20, "", VAR7, VAR4);
            goto VAR40;
        }
    }
    else
    {
        VAR12 = FUN14(VAR11);
        if (!VAR12)
        {
            FUN13(&VAR20, "");
            goto VAR40;
        }
    }
    VAR21 = (VAR41){
        .VAR42 = &VAR20,
        .VAR11 = VAR11,
    };
    VAR24 = FUN15(VAR11);
    FUN16(VAR24);
    FUN17("", VAR11, VAR12, VAR43, 0, VAR44, NULL, VAR45, &VAR21, &VAR20, false);
    FUN18(VAR24);
    if (VAR20)
    {
        goto VAR40;
    }
    if (!VAR17)
    {
        FUN19(VAR11);
    }
    VAR14 = FUN20("");
    FUN21(VAR14, &VAR20);
    if (VAR20)
    {
        goto VAR46;
    }
    if (!VAR17 && VAR11->VAR47->VAR48)
    {
        VAR2 = VAR11->VAR47->FUN22(VAR11);
        if (VAR2)
        {
            FUN23(&VAR20, -VAR2, "", VAR4);
            goto VAR46;
        }
    }
VAR46:
    if (!VAR17)
    {
        FUN24(VAR11);
    }
VAR40:
    FUN25();
    FUN26(VAR9);
    if (VAR20)
    {
        FUN27(VAR20);
        return 1;
    }
    FUN28(VAR16, "");
    return 0;
}