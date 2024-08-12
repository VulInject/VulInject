static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    int VAR5 = 0, VAR6 = 0, VAR7 = 0;
    int VAR8, VAR9;
    char *VAR10;
    int64_t VAR11;
    int VAR12 = 0;
    int VAR13;
    QEMUIOVector VAR14;
    int VAR15 = 0;
    int VAR16 = 0;
    while ((VAR8 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR8)
        {
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR16 = 1;
            VAR15 = FUN2(VAR17);
            if (VAR15 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR7 = 1;
            break;
        default:
            return FUN3(&VAR18);
        }
    }
    if (VAR19 > argc - 2)
    {
        return FUN3(&VAR18);
    }
    VAR11 = FUN4(argv[VAR19]);
    if (VAR11 < 0)
    {
        FUN5("", argv[VAR19]);
        return 0;
    }
    VAR19++;
    if (VAR11 & 0x1ff)
    {
        FUN5("" VAR20 "", VAR11);
        return 0;
    }
    VAR13 = argc - VAR19;
    VAR10 = FUN6(VAR2, &VAR14, &argv[VAR19], VAR13, 0xab);
    if (VAR10 == NULL)
    {
        return 0;
    }
    FUN7(&VAR3, NULL);
    VAR9 = FUN8(VAR2, &VAR14, VAR11, &VAR12);
    FUN7(&VAR4, NULL);
    if (VAR9 < 0)
    {
        FUN5("", strerror(-VAR9));
        goto VAR21;
    }
    if (VAR16)
    {
        void *VAR22 = FUN9(VAR14.VAR23);
        memset(VAR22, VAR15, VAR14.VAR23);
        if (memcmp(VAR10, VAR22, VAR14.VAR23))
        {
            FUN5("" VAR20 "", VAR11, VAR14.VAR23);
        }
        FUN10(VAR22);
    }
    if (VAR6)
    {
        goto VAR21;
    }
    if (VAR7)
    {
        FUN11(VAR10, VAR11, VAR14.VAR23);
    }
    VAR4 = FUN12(VAR4, VAR3);
    FUN13("", &VAR4, VAR11, VAR14.VAR23, VAR12, VAR9, VAR5);
VAR21:
    FUN14(&VAR14);
    FUN15(VAR10);
    return 0;
}