FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0, VAR6 = 0;
    int VAR7 = 0, VAR8 = 0, VAR9 = 0;
    int VAR10, VAR11;
    char *VAR12;
    int64_t VAR13;
    int VAR14;
    int VAR15 = 0;
    int VAR16 = 0, VAR17 = 0, VAR18 = 0;
    while ((VAR10 = getopt(argc, argv, "")) != VAR19)
    {
        switch (VAR10)
        {
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR9 = 1;
            VAR18 = FUN2(VAR20);
            if (VAR18 < 0)
            {
                FUN3("", VAR20);
                return 0;
            }
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR7 = 1;
            VAR16 = FUN4(VAR20);
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR8 = 1;
            VAR17 = FUN2(VAR20);
            if (VAR17 < 0)
            {
                FUN3("", VAR20);
                return 0;
            }
            break;
        case '':
            VAR6 = 1;
            break;
        default:
            return FUN5(&VAR21);
        }
    }
    if (VAR22 != argc - 2)
        return FUN5(&VAR21);
    VAR13 = FUN2(argv[VAR22]);
    if (VAR13 < 0)
    {
        FUN3("", argv[VAR22]);
        return 0;
    }
    VAR22++;
    VAR14 = FUN2(argv[VAR22]);
    if (VAR14 < 0)
    {
        FUN3("", argv[VAR22]);
        return 0;
    }
    if (!VAR7 && (VAR9 || VAR8))
    {
        return FUN5(&VAR21);
    }
    if (!VAR9)
    {
        VAR18 = VAR14 - VAR17;
    }
    if ((VAR18 < 0) || (VAR18 + VAR17 > VAR14))
    {
        FUN3("");
        return 0;
    }
    if (!VAR4)
        if (VAR13 & 0x1ff)
        {
            FUN3("", (long long)VAR13);
            return 0;
            if (VAR14 & 0x1ff)
            {
                FUN3("", VAR14);
                return 0;
            }
        }
    VAR12 = FUN6(VAR14, 0xab);
    FUN7(&VAR1, NULL);
    if (VAR4)
        VAR11 = FUN8(VAR12, VAR13, VAR14, &VAR15);
    else
        VAR11 = FUN9(VAR12, VAR13, VAR14, &VAR15);
    FUN7(&VAR2, NULL);
    if (VAR11 < 0)
    {
        FUN3("", strerror(-VAR11));
        return 0;
    }
    if (VAR7)
    {
        void *VAR23 = malloc(VAR18);
        memset(VAR23, VAR16, VAR18);
        if (memcmp(VAR12 + VAR17, VAR23, VAR18))
        {
            FUN3(""
                   "",
                   (long long)VAR13 + VAR17, VAR18);
        }
        free(VAR23);
    }
    if (VAR5)
        return 0;
    if (VAR6)
        FUN10(VAR12, VAR13, VAR14);
    VAR2 = FUN11(VAR2, VAR1);
    FUN12("", &VAR2, VAR13, VAR14, VAR15, VAR11, VAR3);
    FUN13(VAR12);
    return 0;
}