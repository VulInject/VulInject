static int FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0;
    int VAR6, VAR7;
    char *VAR8;
    int64_t VAR9;
    int VAR10 = 0;
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
            if (VAR13 < 0)
            {
                return 0;
            }
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
    {
        return FUN3(&VAR17);
    }
    VAR9 = FUN4(argv[VAR18]);
    if (VAR9 < 0)
    {
        FUN5("", argv[VAR18]);
        return 0;
    }
    VAR18++;
    if (VAR9 & 0x1ff)
    {
        FUN5("" VAR19 "", VAR9);
        return 0;
    }
    VAR11 = argc - VAR18;
    VAR8 = FUN6(&VAR12, &argv[VAR18], VAR11, 0xab);
    if (VAR8 == NULL)
    {
        return 0;
    }
    FUN7(&VAR1, NULL);
    VAR7 = FUN8(&VAR12, VAR9, &VAR10);
    FUN7(&VAR2, NULL);
    if (VAR7 < 0)
    {
        FUN5("", strerror(-VAR7));
        goto VAR20;
    }
    if (VAR14)
    {
        void *VAR21 = FUN9(VAR12.VAR22);
        memset(VAR21, VAR13, VAR12.VAR22);
        if (memcmp(VAR8, VAR21, VAR12.VAR22))
        {
            FUN5("" VAR19 "", VAR9, VAR12.VAR22);
        }
        FUN10(VAR21);
    }
    if (VAR4)
    {
        goto VAR20;
    }
    if (VAR5)
    {
        FUN11(VAR8, VAR9, VAR12.VAR22);
    }
    VAR2 = FUN12(VAR2, VAR1);
    FUN13("", &VAR2, VAR9, VAR12.VAR22, VAR10, VAR7, VAR3);
VAR20:
    FUN14(VAR8);
    return 0;
}