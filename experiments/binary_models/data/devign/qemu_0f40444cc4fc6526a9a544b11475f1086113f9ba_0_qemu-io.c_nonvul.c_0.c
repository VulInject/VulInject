static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int VAR3 = VAR4;
    int VAR5 = 0;
    bool VAR6 = true;
    int VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    bool VAR12 = false;
    while ((VAR7 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR7)
        {
        case '':
            VAR3 |= VAR13;
            break;
        case '':
            VAR3 |= VAR14;
            VAR6 = false;
            break;
        case '':
            VAR3 |= VAR15;
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            VAR3 |= VAR16;
            break;
        case '':
            if (FUN2(VAR17, &VAR3, &VAR6) < 0)
            {
                FUN3("", VAR17);
                FUN4(&VAR18);
                return 0;
            }
            break;
        case '':
            if (FUN5(VAR17, &VAR3) < 0)
            {
                FUN3("", VAR17);
                FUN4(&VAR18);
                return 0;
            }
            break;
        case '':
            if (VAR19)
            {
                FUN6("");
                FUN4(&VAR18);
                return 0;
            }
            if (!FUN7(&VAR18, VAR17, false))
            {
                FUN4(&VAR18);
                return 0;
            }
            break;
        case '':
            VAR12 = true;
            break;
        default:
            FUN4(&VAR18);
            return FUN8(&VAR20);
        }
    }
    if (!VAR5)
    {
        VAR3 |= VAR21;
    }
    if (VAR19 && (VAR22 == argc - 1))
    {
        if (!FUN7(&VAR18, argv[VAR22], false))
        {
            FUN4(&VAR18);
            return 0;
        }
        VAR22++;
    }
    VAR9 = FUN9(&VAR18, NULL);
    VAR11 = VAR9 ? FUN10(VAR9, NULL) : NULL;
    FUN4(&VAR18);
    if (VAR22 == argc - 1)
    {
        FUN11(argv[VAR22], VAR3, VAR6, VAR12, VAR11);
    }
    else if (VAR22 == argc)
    {
        FUN11(NULL, VAR3, VAR6, VAR12, VAR11);
    }
    else
    {
        FUN12(VAR11);
        FUN8(&VAR20);
    }
    return 0;
}