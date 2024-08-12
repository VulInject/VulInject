static int FUN1(int argc, char **argv)
{
    VAR1 *VAR2 = NULL;
    int VAR3, VAR4, VAR5;
    const char *VAR6, *VAR7, *VAR8;
    int64_t VAR9, VAR10;
    bool VAR11 = false;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15;
    static QemuOptsList VAR16 = {
        .VAR17 = "",
        .VAR18 = FUN2(VAR16.VAR18),
        .VAR19 = {{.VAR17 = VAR20, .VAR21 = VAR22, .VAR23 = ""}, {}},
    };
    bool VAR24 = false;
    if (argc < 3)
    {
        FUN3("");
        return 1;
    }
    VAR8 = argv[--argc];
    VAR7 = NULL;
    for (;;)
    {
        static const struct option VAR25[] = {{"", VAR26, 0, ''}, {"", VAR27, 0, VAR28}, {"", VAR26, 0, VAR29}, {0, 0, 0, 0}};
        VAR3 = getopt_long(argc, argv, "", VAR25, NULL);
        if (VAR3 == -1)
        {
            break;
        }
        switch (VAR3)
        {
        case '':
        case '':
            FUN4();
            break;
        case '':
            VAR7 = VAR30;
            break;
        case '':
            VAR11 = true;
            break;
        case VAR28:
        {
            VAR14 *VAR31;
            VAR31 = FUN5(&VAR32, VAR30, true);
            if (!VAR31)
            {
                return 1;
            }
        }
        break;
        case VAR29:
            VAR24 = true;
            break;
        }
    }
    if (VAR33 != argc - 1)
    {
        FUN3("");
    }
    VAR6 = argv[VAR33++];
    if (FUN6(&VAR32, VAR34, NULL, NULL))
    {
        return 1;
    }
    switch (VAR8[0])
    {
    case '':
        VAR5 = 1;
        VAR8++;
        break;
    case '':
        VAR5 = -1;
        VAR8++;
        break;
    default:
        VAR5 = 0;
        break;
    }
    VAR15 = FUN7(&VAR16, NULL, 0, &VAR35);
    FUN8(VAR15, VAR20, VAR8, &VAR2);
    if (VAR2)
    {
        FUN9(VAR2);
        VAR4 = -1;
        FUN10(VAR15);
        goto VAR36;
    }
    VAR9 = FUN11(VAR15, VAR20, 0);
    FUN10(VAR15);
    VAR13 = FUN12(VAR24, VAR6, VAR7, VAR37 | VAR38, false, VAR11);
    if (!VAR13)
    {
        VAR4 = -1;
        goto VAR36;
    }
    if (VAR5)
    {
        VAR10 = FUN13(VAR13) + VAR9 * VAR5;
    }
    else
    {
        VAR10 = VAR9;
    }
    if (VAR10 <= 0)
    {
        FUN14("");
        VAR4 = -1;
        goto VAR36;
    }
    VAR4 = FUN15(VAR13, VAR10);
    switch (VAR4)
    {
    case 0:
        FUN16(VAR11, "");
        break;
    case -VAR39:
        FUN14("");
        break;
    case -VAR40:
        FUN14("");
        break;
    default:
        FUN14("", strerror(-VAR4));
        break;
    }
VAR36:
    FUN17(VAR13);
    if (VAR4)
    {
        return 1;
    }
    return 0;
}