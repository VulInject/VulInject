static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    bool VAR5 = false, VAR6 = false, VAR7 = false;
    bool VAR8 = false, VAR9 = false, VAR10 = false, VAR11 = false;
    int VAR12, VAR13;
    char *VAR14;
    int64_t VAR15;
    int64_t VAR16;
    int64_t VAR17 = 0;
    int VAR18 = 0;
    int64_t VAR19 = 0, VAR20 = 0;
    while ((VAR12 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR12)
        {
        case '':
            VAR11 = true;
            break;
        case '':
            VAR5 = true;
            break;
        case '':
            VAR10 = true;
            VAR20 = FUN2(VAR21);
            if (VAR20 < 0)
            {
                FUN3(VAR20, VAR21);
                return 0;
            }
            break;
        case '':
            break;
        case '':
            VAR8 = true;
            VAR18 = FUN4(VAR21);
            if (VAR18 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR6 = true;
            break;
        case '':
            VAR9 = true;
            VAR19 = FUN2(VAR21);
            if (VAR19 < 0)
            {
                FUN3(VAR19, VAR21);
                return 0;
            }
            break;
        case '':
            VAR7 = true;
            break;
        default:
            return FUN5(&VAR22);
        }
    }
    if (VAR23 != argc - 2)
    {
        return FUN5(&VAR22);
    }
    VAR15 = FUN2(argv[VAR23]);
    if (VAR15 < 0)
    {
        FUN3(VAR15, argv[VAR23]);
        return 0;
    }
    VAR23++;
    VAR16 = FUN2(argv[VAR23]);
    if (VAR16 < 0)
    {
        FUN3(VAR16, argv[VAR23]);
        return 0;
    }
    else if (VAR16 > VAR24)
    {
        FUN6("" VAR25 "", (VAR26)VAR24, argv[VAR23]);
        return 0;
    }
    if (!VAR8 && (VAR10 || VAR9))
    {
        return FUN5(&VAR22);
    }
    if (!VAR10)
    {
        VAR20 = VAR16 - VAR19;
    }
    if ((VAR20 < 0) || (VAR20 + VAR19 > VAR16))
    {
        FUN6("");
        return 0;
    }
    if (VAR11)
    {
        if (VAR15 & 0x1ff)
        {
            FUN6("" VAR27 "", VAR15);
            return 0;
        }
        if (VAR16 & 0x1ff)
        {
            FUN6("" VAR27 "", VAR16);
            return 0;
        }
    }
    VAR14 = FUN7(VAR2, VAR16, 0xab);
    FUN8(&VAR3, NULL);
    if (VAR11)
    {
        VAR13 = FUN9(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else
    {
        VAR13 = FUN10(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    FUN8(&VAR4, NULL);
    if (VAR13 < 0)
    {
        FUN6("", strerror(-VAR13));
        goto VAR28;
    }
    if (VAR8)
    {
        void *VAR29 = FUN11(VAR20);
        memset(VAR29, VAR18, VAR20);
        if (memcmp(VAR14 + VAR19, VAR29, VAR20))
        {
            FUN6("" VAR27 "" VAR27 "", VAR15 + VAR19, VAR20);
        }
        FUN12(VAR29);
    }
    if (VAR6)
    {
        goto VAR28;
    }
    if (VAR7)
    {
        FUN13(VAR14, VAR15, VAR16);
    }
    VAR4 = FUN14(VAR4, VAR3);
    FUN15("", &VAR4, VAR15, VAR16, VAR17, VAR13, VAR5);
VAR28:
    FUN16(VAR14);
    return 0;
}