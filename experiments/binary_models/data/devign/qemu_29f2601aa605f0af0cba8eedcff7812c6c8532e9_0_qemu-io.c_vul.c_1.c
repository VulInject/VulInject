static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int VAR3 = 0;
    int VAR4 = 0;
    int VAR5 = 0;
    int VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    while ((VAR6 = getopt(argc, argv, "")) != VAR11)
    {
        switch (VAR6)
        {
        case '':
            VAR3 |= VAR12;
            break;
        case '':
            VAR3 |= VAR13 | VAR14;
            break;
        case '':
            VAR4 = 1;
            break;
        case '':
            VAR5 = 1;
            break;
        case '':
            if (!FUN2(&VAR15, VAR16, 0))
            {
                FUN3("", VAR16);
                FUN4(&VAR15);
                return 0;
            }
            break;
        default:
            FUN4(&VAR15);
            return FUN5(&VAR17);
        }
    }
    if (!VAR4)
    {
        VAR3 |= VAR18;
    }
    VAR8 = FUN6(&VAR15, NULL);
    VAR10 = VAR8 ? FUN7(VAR8, NULL) : NULL;
    FUN4(&VAR15);
    if (VAR19 == argc - 1)
    {
        return FUN8(argv[VAR19], VAR3, VAR5, VAR10);
    }
    else if (VAR19 == argc)
    {
        return FUN8(NULL, VAR3, VAR5, VAR10);
    }
    else
    {
        return FUN5(&VAR17);
    }