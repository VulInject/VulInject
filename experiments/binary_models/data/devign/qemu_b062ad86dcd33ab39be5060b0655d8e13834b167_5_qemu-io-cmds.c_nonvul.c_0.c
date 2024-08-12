static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
    int VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0;
    int VAR13, VAR14;
    char *VAR15;
    int64_t VAR16;
    int VAR17;
    int VAR18 = 0;
    int VAR19 = 0, VAR20 = 0, VAR21 = 0;
    while ((VAR13 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR13)
        {
        case '':
            VAR12 = 1;
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR11 = 1;
            VAR21 = FUN2(VAR22);
            if (VAR21 < 0)
            {
                FUN3("", VAR22);
                return 0;
            }
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR9 = 1;
            VAR19 = FUN4(VAR22);
            if (VAR19 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR7 = 1;
            break;
        case '':
            VAR10 = 1;
            VAR20 = FUN2(VAR22);
            if (VAR20 < 0)
            {
                FUN3("", VAR22);
                return 0;
            }
            break;
        case '':
            VAR8 = 1;
            break;
        default:
            return FUN5(&VAR23);
        }
    }
    if (VAR24 != argc - 2)
    {
        return FUN5(&VAR23);
    }
    if (VAR12 && VAR6)
    {
        FUN3("");
        return 0;
    }
    VAR16 = FUN2(argv[VAR24]);
    if (VAR16 < 0)
    {
        FUN3("", argv[VAR24]);
        return 0;
    }
    VAR24++;
    VAR17 = FUN2(argv[VAR24]);
    if (VAR17 < 0)
    {
        FUN3("", argv[VAR24]);
        return 0;
    }
    if (!VAR9 && (VAR11 || VAR10))
    {
        return FUN5(&VAR23);
    }
    if (!VAR11)
    {
        VAR21 = VAR17 - VAR20;
    }
    if ((VAR21 < 0) || (VAR21 + VAR20 > VAR17))
    {
        FUN3("");
        return 0;
    }
    if (!VAR6)
    {
        if (VAR16 & 0x1ff)
        {
            FUN3("" VAR25 "", VAR16);
            return 0;
        }
        if (VAR17 & 0x1ff)
        {
            FUN3("", VAR17);
            return 0;
        }
    }
    VAR15 = FUN6(VAR2, VAR17, 0xab);
    FUN7(&VAR3, NULL);
    if (VAR6)
    {
        VAR14 = FUN8(VAR2, VAR15, VAR16, VAR17, &VAR18);
    }
    else if (VAR12)
    {
        VAR14 = FUN9(VAR2, VAR15, VAR16, VAR17, &VAR18);
    }
    else
    {
        VAR14 = FUN10(VAR2, VAR15, VAR16, VAR17, &VAR18);
    }
    FUN7(&VAR4, NULL);
    if (VAR14 < 0)
    {
        FUN3("", strerror(-VAR14));
        goto VAR26;
    }
    if (VAR9)
    {
        void *VAR27 = FUN11(VAR21);
        memset(VAR27, VAR19, VAR21);
        if (memcmp(VAR15 + VAR20, VAR27, VAR21))
        {
            FUN3("" VAR25 "", VAR16 + VAR20, VAR21);
        }
        FUN12(VAR27);
    }
    if (VAR7)
    {
        goto VAR26;
    }
    if (VAR8)
    {
        FUN13(VAR15, VAR16, VAR17);
    }
    VAR4 = FUN14(VAR4, VAR3);
    FUN15("", &VAR4, VAR16, VAR17, VAR18, VAR14, VAR5);
VAR26:
    FUN16(VAR15);
    return 0;
}