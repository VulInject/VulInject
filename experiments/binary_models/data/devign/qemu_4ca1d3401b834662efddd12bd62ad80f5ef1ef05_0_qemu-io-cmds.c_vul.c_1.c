static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    bool VAR5 = false, VAR6 = false;
    int VAR7 = 0;
    int VAR8, VAR9;
    char *VAR10;
    int64_t VAR11;
    int VAR12 = 0;
    int VAR13;
    int VAR14 = 0xcd;
    QEMUIOVector VAR15;
    while ((VAR8 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR8)
        {
        case '':
            VAR5 = true;
            break;
        case '':
            VAR7 |= VAR16;
            break;
        case '':
            VAR6 = true;
            break;
        case '':
            VAR14 = FUN2(VAR17);
            if (VAR14 < 0)
            {
                return 0;
            }
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
        FUN5(VAR11, argv[VAR19]);
        return 0;
    }
    VAR19++;
    VAR13 = argc - VAR19;
    VAR10 = FUN6(VAR2, &VAR15, &argv[VAR19], VAR13, VAR14);
    if (VAR10 == NULL)
    {
        return 0;
    }
    FUN7(&VAR3, NULL);
    VAR9 = FUN8(VAR2, &VAR15, VAR11, VAR7, &VAR12);
    FUN7(&VAR4, NULL);
    if (VAR9 < 0)
    {
        FUN9("", strerror(-VAR9));
        goto VAR20;
    }
    if (VAR6)
    {
        goto VAR20;
    }
    VAR4 = FUN10(VAR4, VAR3);
    FUN11("", &VAR4, VAR11, VAR15.VAR21, VAR12, VAR9, VAR5);
VAR20:
    FUN12(&VAR15);
    FUN13(VAR10);
    return 0;
}