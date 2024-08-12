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
            VAR5 = 1;
            break;
        case '':
            VAR3 |= VAR15;
            break;
        case '':
            if (FUN2(VAR16, &VAR3, &VAR6) < 0)
            {
                FUN3("", VAR16);
                FUN4(&VAR17);
                return 0;
            }
            break;
        case '':
            if (FUN5(VAR16, &VAR3) < 0)
            {
                FUN3("", VAR16);
                FUN4(&VAR17);
                return 0;
            }
            break;
        case '':
            if (VAR18)
            {
                FUN6("");
                FUN4(&VAR17);
                return 0;
            }
            if (!FUN7(&VAR17, VAR16, false))
            {
                FUN4(&VAR17);
                return 0;
            }
            break;
        case '':
            VAR12 = true;
            break;
        default:
            FUN4(&VAR17);
            return FUN8(&VAR19);
        }
    }
    if (!VAR5)
    {
        VAR3 |= VAR20;
    }
    if (VAR18 && (VAR21 == argc - 1))
    {
        if (!FUN7(&VAR17, argv[VAR21], false))
        {
            FUN4(&VAR17);
            return 0;
        }
        VAR21++;
    }
    VAR9 = FUN9(&VAR17, NULL);
    VAR11 = VAR9 ? FUN10(VAR9, NULL) : NULL;
    FUN4(&VAR17);
    if (VAR21 == argc - 1)
    {
        return FUN11(argv[VAR21], VAR3, VAR6, VAR12, VAR11);
    }
    else if (VAR21 == argc)
    {
        return FUN11(NULL, VAR3, VAR6, VAR12, VAR11);
    }
    else
    {
        FUN12(VAR11);
        return FUN8(&VAR19);
    }
}