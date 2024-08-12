static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    int VAR5 = 0, VAR6 = 0;
    int VAR7, VAR8;
    char *VAR9;
    int64_t VAR10;
    int VAR11 = 0;
    int VAR12;
    int VAR13 = 0xcd;
    QEMUIOVector VAR14;
    while ((VAR7 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR7)
        {
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR13 = FUN2(VAR15);
            if (VAR13 < 0)
            {
                return 0;
            }
            break;
        default:
            return FUN3(&VAR16);
        }
    }
    if (VAR17 > argc - 2)
    {
        return FUN3(&VAR16);
    }
    VAR10 = FUN4(argv[VAR17]);
    if (VAR10 < 0)
    {
        FUN5("", argv[VAR17]);
        return 0;
    }
    VAR17++;
    if (VAR10 & 0x1ff)
    {
        FUN5("" VAR18 "", VAR10);
        return 0;
    }
    VAR12 = argc - VAR17;
    VAR9 = FUN6(VAR2, &VAR14, &argv[VAR17], VAR12, VAR13);
    if (VAR9 == NULL)
    {
        return 0;
    }
    FUN7(&VAR3, NULL);
    VAR8 = FUN8(VAR2, &VAR14, VAR10, &VAR11);
    FUN7(&VAR4, NULL);
    if (VAR8 < 0)
    {
        FUN5("", strerror(-VAR8));
        goto VAR19;
    }
    if (VAR6)
    {
        goto VAR19;
    }
    VAR4 = FUN9(VAR4, VAR3);
    FUN10("", &VAR4, VAR10, VAR14.VAR20, VAR11, VAR8, VAR5);
VAR19:
    FUN11(&VAR14);
    FUN12(VAR9);
    return 0;
}