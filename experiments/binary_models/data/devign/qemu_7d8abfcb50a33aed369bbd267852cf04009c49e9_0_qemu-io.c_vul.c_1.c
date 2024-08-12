FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0;
    int VAR6, VAR7;
    char *VAR8;
    int64_t VAR9;
    int VAR10;
    int VAR11 = 0;
    int VAR12 = 0xcd;
    while ((VAR6 = getopt(argc, argv, "")) != VAR13)
    {
        switch (VAR6)
        {
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR12 = FUN2(VAR14);
            break;
        case '':
            VAR5 = 1;
            break;
        default:
            return FUN3(&VAR15);
        }
    }
    if (VAR16 != argc - 2)
        return FUN3(&VAR15);
    VAR9 = FUN4(argv[VAR16]);
    if (VAR9 < 0)
    {
        FUN5("", argv[VAR16]);
        return 0;
    }
    VAR16++;
    VAR10 = FUN4(argv[VAR16]);
    if (VAR10 < 0)
    {
        FUN5("", argv[VAR16]);
        return 0;
    }
    if (!VAR4)
    {
        if (VAR9 & 0x1ff)
        {
            FUN5("", (long long)VAR9);
            return 0;
        }
        if (VAR10 & 0x1ff)
        {
            FUN5("", VAR10);
            return 0;
        }
    }
    VAR8 = FUN6(VAR10, VAR12);
    FUN7(&VAR1, NULL);
    if (VAR4)
        VAR7 = FUN8(VAR8, VAR9, VAR10, &VAR11);
    else
        VAR7 = FUN9(VAR8, VAR9, VAR10, &VAR11);
    FUN7(&VAR2, NULL);
    if (VAR7 < 0)
    {
        FUN5("", strerror(-VAR7));
        return 0;
    }
    if (VAR5)
        return 0;
    VAR2 = FUN10(VAR2, VAR1);
    FUN11("", &VAR2, VAR9, VAR10, VAR11, VAR7, VAR3);
    FUN12(VAR8);
    return 0;
}