static int FUN1(int argc, char **argv)
{
    struct timeval VAR1, VAR2;
    int VAR3 = 0, VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
    int VAR9, VAR10;
    char *VAR11 = NULL;
    int64_t VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15 = 0xcd;
    while ((VAR9 = getopt(argc, argv, "")) != VAR16)
    {
        switch (VAR9)
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
            VAR7 = 1;
            VAR15 = FUN2(VAR17);
            if (VAR15 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR8 = 1;
            break;
        default:
            return FUN3(&VAR18);
        }
    }
    if (VAR19 != argc - 2)
    {
        return FUN3(&VAR18);
    }
    if (VAR6 + VAR4 + VAR8 > 1)
    {
        FUN4("");
        return 0;
    }
    if (VAR8 && VAR7)
    {
        FUN4("");
        return 0;
    }
    VAR12 = FUN5(argv[VAR19]);
    if (VAR12 < 0)
    {
        FUN4("", argv[VAR19]);
        return 0;
    }
    VAR19++;
    VAR13 = FUN5(argv[VAR19]);
    if (VAR13 < 0)
    {
        FUN4("", argv[VAR19]);
        return 0;
    }
    if (!VAR4)
    {
        if (VAR12 & 0x1ff)
        {
            FUN4("" VAR20 "", VAR12);
            return 0;
        }
        if (VAR13 & 0x1ff)
        {
            FUN4("", VAR13);
            return 0;
        }
    }
    if (!VAR8)
    {
        VAR11 = FUN6(VAR13, VAR15);
    }
    FUN7(&VAR1, NULL);
    if (VAR4)
    {
        VAR10 = FUN8(VAR11, VAR12, VAR13, &VAR14);
    }
    else if (VAR6)
    {
        VAR10 = FUN9(VAR11, VAR12, VAR13, &VAR14);
    }
    else if (VAR8)
    {
        VAR10 = FUN10(VAR12, VAR13, &VAR14);
    }
    else
    {
        VAR10 = FUN11(VAR11, VAR12, VAR13, &VAR14);
    }
    FUN7(&VAR2, NULL);
    if (VAR10 < 0)
    {
        FUN4("", strerror(-VAR10));
        goto VAR21;
    }
    if (VAR5)
    {
        goto VAR21;
    }
    VAR2 = FUN12(VAR2, VAR1);
    FUN13("", &VAR2, VAR12, VAR13, VAR14, VAR10, VAR3);
VAR21:
    if (!VAR8)
    {
        FUN14(VAR11);
    }
    return 0;
}