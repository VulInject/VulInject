static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    int VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0;
    int VAR11 = 0;
    int VAR12, VAR13;
    char *VAR14 = NULL;
    int64_t VAR15;
    int VAR16;
    int VAR17 = 0;
    int VAR18 = 0xcd;
    while ((VAR12 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR12)
        {
        case '':
            VAR8 = 1;
            break;
        case '':
            VAR11 = 1;
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR6 = 1;
            break;
        case '':
            VAR9 = 1;
            VAR18 = FUN2(VAR19);
            if (VAR18 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR7 = 1;
            break;
        case '':
            VAR10 = 1;
            break;
        default:
            return FUN3(&VAR20);
        }
    }
    if (VAR21 != argc - 2)
    {
        return FUN3(&VAR20);
    }
    if (VAR8 + VAR6 + VAR10 > 1)
    {
        FUN4("");
        return 0;
    }
    if (VAR10 && VAR9)
    {
        FUN4("");
        return 0;
    }
    VAR15 = FUN5(argv[VAR21]);
    if (VAR15 < 0)
    {
        FUN4("", argv[VAR21]);
        return 0;
    }
    VAR21++;
    VAR16 = FUN5(argv[VAR21]);
    if (VAR16 < 0)
    {
        FUN4("", argv[VAR21]);
        return 0;
    }
    if (!VAR6)
    {
        if (VAR15 & 0x1ff)
        {
            FUN4("" VAR22 "", VAR15);
            return 0;
        }
        if (VAR16 & 0x1ff)
        {
            FUN4("", VAR16);
            return 0;
        }
    }
    if (!VAR10)
    {
        VAR14 = FUN6(VAR2, VAR16, VAR18);
    }
    FUN7(&VAR3, NULL);
    if (VAR6)
    {
        VAR13 = FUN8(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else if (VAR8)
    {
        VAR13 = FUN9(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else if (VAR10)
    {
        VAR13 = FUN10(VAR2, VAR15, VAR16, &VAR17);
    }
    else if (VAR11)
    {
        VAR13 = FUN11(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else
    {
        VAR13 = FUN12(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    FUN7(&VAR4, NULL);
    if (VAR13 < 0)
    {
        FUN4("", strerror(-VAR13));
        goto VAR23;
    }
    if (VAR7)
    {
        goto VAR23;
    }
    VAR4 = FUN13(VAR4, VAR3);
    FUN14("", &VAR4, VAR15, VAR16, VAR17, VAR13, VAR5);
VAR23:
    if (!VAR10)
    {
        FUN15(VAR14);
    }
    return 0;
}