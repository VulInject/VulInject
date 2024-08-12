FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0, VAR6 = 0;
    int VAR7, VAR8;
    char *VAR9;
    int64_t VAR10;
    int VAR11;
    int VAR12 = 0;
    int VAR13 = 0xcd;
    while ((VAR7 = getopt(argc, argv, "")) != VAR14)
    {
        switch (VAR7)
        {
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR13 = FUN2(VAR15);
            if (VAR13 < 0)
                return 0;
            break;
        case '':
            VAR5 = 1;
            break;
        default:
            return FUN3(&VAR16);
        }
    }
    if (VAR17 != argc - 2)
        return FUN3(&VAR16);
    if (VAR6 && VAR4)
    {
        FUN4("");
        return 0;
    }
    VAR10 = FUN5(argv[VAR17]);
    if (VAR10 < 0)
    {
        FUN4("", argv[VAR17]);
        return 0;
    }
    VAR17++;
    VAR11 = FUN5(argv[VAR17]);
    if (VAR11 < 0)
    {
        FUN4("", argv[VAR17]);
        return 0;
    }
    if (!VAR4)
    {
        if (VAR10 & 0x1ff)
        {
            FUN4("", (long long)VAR10);
            return 0;
        }
        if (VAR11 & 0x1ff)
        {
            FUN4("", VAR11);
            return 0;
        }
    }
    VAR9 = FUN6(VAR11, VAR13);
    FUN7(&VAR1, NULL);
    if (VAR4)
        VAR8 = FUN8(VAR9, VAR10, VAR11, &VAR12);
    else if (VAR6)
        VAR8 = FUN9(VAR9, VAR10, VAR11, &VAR12);
    else
        VAR8 = FUN10(VAR9, VAR10, VAR11, &VAR12);
    FUN7(&VAR2, NULL);
    if (VAR8 < 0)
    {
        FUN4("", strerror(-VAR8));
        goto VAR18;
    }
    if (VAR5)
        goto VAR18;
    VAR2 = FUN11(VAR2, VAR1);
    FUN12("", &VAR2, VAR10, VAR11, VAR12, VAR8, VAR3);
VAR18:
    FUN13(VAR9);
    return 0;
}