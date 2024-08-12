static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2 = 0;
    const char *VAR3 = NULL, *VAR4;
    bool VAR5 = false;
    bool VAR6 = false;
    bool VAR7 = false;
    int VAR8 = 75000;
    int VAR9 = 64;
    int64_t VAR10 = 0;
    size_t VAR11 = 4096;
    int VAR12 = 0;
    size_t VAR13 = 0;
    int VAR14 = 0;
    bool VAR15 = true;
    int64_t VAR16;
    VAR17 *VAR18 = NULL;
    BenchData VAR19 = {};
    int VAR20 = 0;
    bool VAR21 = false;
    struct timeval VAR22, VAR23;
    int VAR24;
    for (;;)
    {
        static const struct option VAR25[] = {{"", VAR26, 0, ''}, {"", VAR27, 0, VAR28}, {"", VAR26, 0, VAR29}, {"", VAR27, 0, VAR30}, {"", VAR26, 0, VAR31}, {0, 0, 0, 0}};
        VAR1 = getopt_long(argc, argv, "", VAR25, NULL);
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
        {
            unsigned long VAR32;
            if (FUN3(VAR33, NULL, 0, &VAR32) < 0 || VAR32 > VAR34)
            {
                FUN4("");
                return 1;
            }
            VAR8 = VAR32;
            break;
        }
        case '':
        {
            unsigned long VAR32;
            if (FUN3(VAR33, NULL, 0, &VAR32) < 0 || VAR32 > VAR34)
            {
                FUN4("");
                return 1;
            }
            VAR9 = VAR32;
            break;
        }
        case '':
            VAR3 = VAR33;
            break;
        case '':
            VAR20 |= VAR35;
            break;
        case '':
        {
            VAR10 = FUN5(VAR33);
            if (VAR10 < 0)
            {
                FUN4("");
                return 1;
            }
            break;
        }
        break;
        case '':
            VAR5 = true;
            break;
        case '':
        {
            int64_t VAR36;
            VAR36 = FUN5(VAR33);
            if (VAR36 < 0 || VAR36 > VAR34)
            {
                FUN4("");
                return 1;
            }
            VAR11 = VAR36;
            break;
        }
        case '':
        {
            int64_t VAR36;
            VAR36 = FUN5(VAR33);
            if (VAR36 < 0 || VAR36 > VAR34)
            {
                FUN4("");
                return 1;
            }
            VAR13 = VAR36;
            break;
        }
        case '':
            VAR2 = FUN6(VAR33, &VAR20, &VAR21);
            if (VAR2 < 0)
            {
                FUN4("");
                VAR2 = -1;
                goto VAR37;
            }
            break;
        case '':
            VAR20 |= VAR38;
            VAR7 = true;
            break;
        case VAR30:
        {
            unsigned long VAR32;
            if (FUN3(VAR33, NULL, 0, &VAR32) < 0 || VAR32 > 0xff)
            {
                FUN4("");
                return 1;
            }
            VAR12 = VAR32;
            break;
        }
        case VAR28:
        {
            unsigned long VAR32;
            if (FUN3(VAR33, NULL, 0, &VAR32) < 0 || VAR32 > VAR34)
            {
                FUN4("");
                return 1;
            }
            VAR14 = VAR32;
            break;
        }
        case VAR31:
            VAR15 = false;
            break;
        case VAR29:
            VAR6 = true;
            break;
        }
    }
    if (VAR39 != argc - 1)
    {
        FUN7("");
    }
    VAR4 = argv[argc - 1];
    if (!VAR7 && VAR14)
    {
        FUN4("");
        VAR2 = -1;
        goto VAR37;
    }
    if (VAR14 && VAR14 < VAR9)
    {
        FUN4("");
        VAR2 = -1;
        goto VAR37;
    }
    VAR18 = FUN8(VAR6, VAR4, VAR3, VAR20, VAR21, VAR5);
    if (!VAR18)
    {
        VAR2 = -1;
        goto VAR37;
    }
    VAR16 = FUN9(VAR18);
    if (VAR16 < 0)
    {
        VAR2 = VAR16;
        goto VAR37;
    }
    VAR19 = (VAR40){
        .VAR18 = VAR18,
        .VAR16 = VAR16,
        .VAR11 = VAR11,
        .VAR13 = VAR13 ?: VAR11,
        .VAR41 = VAR9,
        .VAR42 = VAR8,
        .VAR10 = VAR10,
        .write = VAR7,
        .VAR14 = VAR14,
        .VAR15 = VAR15,
    };
    FUN10(""
           "" VAR43 "",
           VAR19.VAR42, VAR19.write ? "" : "", VAR19.VAR11, VAR19.VAR41, VAR19.VAR10, VAR19.VAR13);
    if (VAR14)
    {
        FUN10("", VAR14);
    }
    VAR19.VAR44 = FUN11(VAR18, VAR19.VAR41 * VAR19.VAR11);
    memset(VAR19.VAR44, VAR12, VAR19.VAR41 * VAR19.VAR11);
    VAR19.VAR45 = FUN12(VAR46, VAR19.VAR41);
    for (VAR24 = 0; VAR24 < VAR19.VAR41; VAR24++)
    {
        FUN13(&VAR19.VAR45[VAR24], 1);
        FUN14(&VAR19.VAR45[VAR24], VAR19.VAR44 + VAR24 * VAR19.VAR11, VAR19.VAR11);
    }
    FUN15(&VAR22, NULL);
    FUN16(&VAR19, 0);
    while (VAR19.VAR42 > 0)
    {
        FUN17(false);
    }
    FUN15(&VAR23, NULL);
    FUN10("", (VAR23.VAR47 - VAR22.VAR47) + ((double)(VAR23.VAR48 - VAR22.VAR48) / 1000000));
VAR37:
    FUN18(VAR19.VAR44);
    FUN19(VAR18);
    if (VAR2)
    {
        return 1;
    }
    return 0;
}