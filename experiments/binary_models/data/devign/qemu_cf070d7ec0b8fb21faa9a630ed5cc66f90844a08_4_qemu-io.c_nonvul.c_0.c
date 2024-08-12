FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0;
    int VAR5, VAR6;
    char *VAR7;
    int64_t VAR8;
    int VAR9;
    int VAR10;
    int VAR11 = 0xcd;
    QEMUIOVector VAR12;
    while ((VAR5 = getopt(argc, argv, "")) != VAR13)
    {
        switch (VAR5)
        {
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR11 = FUN2(VAR14);
            if (VAR11 < 0)
                return 0;
            break;
        default:
            return FUN3(&VAR15);
        }
    }
    if (VAR16 > argc - 2)
        return FUN3(&VAR15);
    VAR8 = FUN4(argv[VAR16]);
    if (VAR8 < 0)
    {
        FUN5("", argv[VAR16]);
        return 0;
    }
    VAR16++;
    if (VAR8 & 0x1ff)
    {
        FUN5("", (long long)VAR8);
        return 0;
    }
    VAR10 = argc - VAR16;
    VAR7 = FUN6(&VAR12, &argv[VAR16], VAR10, VAR11);
    FUN7(&VAR1, NULL);
    VAR6 = FUN8(&VAR12, VAR8, &VAR9);
    FUN7(&VAR2, NULL);
    if (VAR6 < 0)
    {
        FUN5("", strerror(-VAR6));
        goto VAR17;
    }
    if (VAR4)
        goto VAR17;
    VAR2 = FUN9(VAR2, VAR1);
    FUN10("", &VAR2, VAR8, VAR12.VAR18, VAR9, VAR6, VAR3);
VAR17:
    FUN11(VAR7);
    return 0;
}