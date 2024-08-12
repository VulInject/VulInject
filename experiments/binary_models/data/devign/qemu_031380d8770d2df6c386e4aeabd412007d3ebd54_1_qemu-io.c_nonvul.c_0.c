static int FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0, VAR6 = 0;
    int VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0;
    int VAR11, VAR12;
    char *VAR13;
    int64_t VAR14;
    int VAR15;
    int VAR16 = 0;
    int VAR17 = 0, VAR18 = 0, VAR19 = 0;
    while ((VAR11 = getopt(argc, argv, "")) != VAR20)
    {
        switch (VAR11)
        {
        case '':
            VAR10 = 1;
            break;
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR9 = 1;
            VAR19 = FUN2(VAR21);
            if (VAR19 < 0)
            {
                FUN3("", VAR21);
                return 0;
            }
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR7 = 1;
            VAR17 = FUN4(VAR21);
            if (VAR17 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR8 = 1;
            VAR18 = FUN2(VAR21);
            if (VAR18 < 0)
            {
                FUN3("", VAR21);
                return 0;
            }
            break;
        case '':
            VAR6 = 1;
            break;
        default:
            return FUN5(&VAR22);
        }
    }
    if (VAR23 != argc - 2)
    {
        return FUN5(&VAR22);
    }
    if (VAR10 && VAR4)
    {
        FUN3("");
        return 0;
    }
    VAR14 = FUN2(argv[VAR23]);
    if (VAR14 < 0)
    {
        FUN3("", argv[VAR23]);
        return 0;
    }
    VAR23++;
    VAR15 = FUN2(argv[VAR23]);
    if (VAR15 < 0)
    {
        FUN3("", argv[VAR23]);
        return 0;
    }
    if (!VAR7 && (VAR9 || VAR8))
    {
        return FUN5(&VAR22);
    }
    if (!VAR9)
    {
        VAR19 = VAR15 - VAR18;
    }
    if ((VAR19 < 0) || (VAR19 + VAR18 > VAR15))
    {
        FUN3("");
        return 0;
    }
    if (!VAR4)
    {
        if (VAR14 & 0x1ff)
        {
            FUN3("" VAR24 "", VAR14);
            return 0;
        }
        if (VAR15 & 0x1ff)
        {
            FUN3("", VAR15);
            return 0;
        }
    }
    VAR13 = FUN6(VAR15, 0xab);
    FUN7(&VAR1, NULL);
    if (VAR4)
    {
        VAR12 = FUN8(VAR13, VAR14, VAR15, &VAR16);
    }
    else if (VAR10)
    {
        VAR12 = FUN9(VAR13, VAR14, VAR15, &VAR16);
    }
    else
    {
        VAR12 = FUN10(VAR13, VAR14, VAR15, &VAR16);
    }
    FUN7(&VAR2, NULL);
    if (VAR12 < 0)
    {
        FUN3("", strerror(-VAR12));
        goto VAR25;
    }
    if (VAR7)
    {
        void *VAR26 = FUN11(VAR19);
        memset(VAR26, VAR17, VAR19);
        if (memcmp(VAR13 + VAR18, VAR26, VAR19))
        {
            FUN3("" VAR24 "", VAR14 + VAR18, VAR19);
        }
        FUN12(VAR26);
    }
    if (VAR5)
    {
        goto VAR25;
    }
    if (VAR6)
    {
        FUN13(VAR13, VAR14, VAR15);
    }
    VAR2 = FUN14(VAR2, VAR1);
    FUN15("", &VAR2, VAR14, VAR15, VAR16, VAR12, VAR3);
VAR25:
    FUN16(VAR13);
    return 0;
}