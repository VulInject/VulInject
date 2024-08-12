static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    bool VAR5 = false, VAR6 = false, VAR7 = false;
    bool VAR8 = false, VAR9 = false, VAR10 = false;
    int VAR11 = 0;
    int VAR12, VAR13;
    char *VAR14 = NULL;
    int64_t VAR15;
    int64_t VAR16;
    int64_t VAR17 = 0;
    int VAR18 = 0xcd;
    while ((VAR12 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR12)
        {
        case '':
            VAR7 = true;
            break;
        case '':
            VAR10 = true;
            break;
        case '':
            VAR5 = true;
            break;
        case '':
            VAR11 |= VAR19;
            break;
        case '':
            break;
        case '':
            VAR8 = true;
            VAR18 = FUN2(VAR20);
            if (VAR18 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR6 = true;
            break;
        case '':
            VAR11 |= VAR21;
            break;
        case '':
            VAR9 = true;
            break;
        default:
            return FUN3(&VAR22);
        }
    }
    if (VAR23 != argc - 2)
    {
        return FUN3(&VAR22);
    }
    if (VAR7 && VAR9)
    {
        FUN4("");
        return 0;
    }
    if ((VAR11 & VAR19) && (VAR7 || VAR10))
    {
        FUN4("");
        return 0;
    }
    if ((VAR11 & VAR21) && !VAR9)
    {
        FUN4("");
        return 0;
    }
    if (VAR9 && VAR8)
    {
        FUN4("");
        return 0;
    }
    VAR15 = FUN5(argv[VAR23]);
    if (VAR15 < 0)
    {
        FUN6(VAR15, argv[VAR23]);
        return 0;
    }
    VAR23++;
    VAR16 = FUN5(argv[VAR23]);
    if (VAR16 < 0)
    {
        FUN6(VAR16, argv[VAR23]);
        return 0;
    }
    else if (VAR16 > VAR24)
    {
        FUN4("" VAR25 "", (VAR26)VAR24, argv[VAR23]);
        return 0;
    }
    if (VAR7 || VAR10)
    {
        if (VAR15 & 0x1ff)
        {
            FUN4("" VAR27 "", VAR15);
            return 0;
        }
        if (VAR16 & 0x1ff)
        {
            FUN4("" VAR27 "", VAR16);
            return 0;
        }
    }
    if (!VAR9)
    {
        VAR14 = FUN7(VAR2, VAR16, VAR18);
    }
    FUN8(&VAR3, NULL);
    if (VAR7)
    {
        VAR13 = FUN9(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else if (VAR9)
    {
        VAR13 = FUN10(VAR2, VAR15, VAR16, VAR11, &VAR17);
    }
    else if (VAR10)
    {
        VAR13 = FUN11(VAR2, VAR14, VAR15, VAR16, &VAR17);
    }
    else
    {
        VAR13 = FUN12(VAR2, VAR14, VAR15, VAR16, VAR11, &VAR17);
    }
    FUN8(&VAR4, NULL);
    if (VAR13 < 0)
    {
        FUN4("", strerror(-VAR13));
        goto VAR28;
    }
    if (VAR6)
    {
        goto VAR28;
    }
    VAR4 = FUN13(VAR4, VAR3);
    FUN14("", &VAR4, VAR15, VAR16, VAR17, VAR13, VAR5);
VAR28:
    if (!VAR9)
    {
        FUN15(VAR14);
    }
    return 0;
}