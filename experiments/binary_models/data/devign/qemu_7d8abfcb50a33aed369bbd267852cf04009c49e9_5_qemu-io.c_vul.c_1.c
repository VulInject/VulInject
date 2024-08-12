FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0;
    int VAR6, VAR7;
    char *VAR8;
    int64_t VAR9;
    int VAR10;
    int VAR11;
    QEMUIOVector VAR12;
    int VAR13 = 0;
    int VAR14 = 0;
    while ((VAR6 = getopt(argc, argv, "")) != VAR15)
    {
        switch (VAR6)
        {
        case '':
            VAR3 = 1;
            break;
        case '':
            VAR14 = 1;
            VAR13 = FUN2(VAR16);
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR5 = 1;
            break;
        default:
            return FUN3(&VAR17);
        }
    }
    if (VAR18 > argc - 2)
        return FUN3(&VAR17);
    VAR9 = FUN4(argv[VAR18]);
    if (VAR9 < 0)
    {
        FUN5("", argv[VAR18]);
        return 0;
    }
    VAR18++;
    if (VAR9 & 0x1ff)
    {
        FUN5("", (long long)VAR9);
        return 0;
    }
    VAR11 = argc - VAR18;
    VAR8 = FUN6(&VAR12, &argv[VAR18], VAR11, 0xab);
    FUN7(&VAR1, NULL);
    VAR7 = FUN8(&VAR12, VAR9, &VAR10);
    FUN7(&VAR2, NULL);
    if (VAR7 < 0)
    {
        FUN5("", strerror(-VAR7));
        return 0;
    }
    if (VAR14)
    {
        void *VAR19 = malloc(VAR12.VAR20);
        memset(VAR19, VAR13, VAR12.VAR20);
        if (memcmp(VAR8, VAR19, VAR12.VAR20))
        {
            FUN5(""
                   "",
                   (long long)VAR9, VAR12.VAR20);
        }
        free(VAR19);
    }
    if (VAR4)
        return 0;
    if (VAR5)
        FUN9(VAR8, VAR9, VAR12.VAR20);
    VAR2 = FUN10(VAR2, VAR1);
    FUN11("", &VAR2, VAR9, VAR12.VAR20, VAR10, VAR7, VAR3);
    FUN12(VAR8);
    return 0;
}