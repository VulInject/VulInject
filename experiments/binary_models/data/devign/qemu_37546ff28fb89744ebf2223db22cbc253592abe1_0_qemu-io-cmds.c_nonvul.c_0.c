static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int VAR3, VAR4;
    int VAR5 = 0xcd;
    struct VAR6 *VAR7 = FUN2(struct VAR6, 1);
    int VAR8 = 0;
    VAR7->VAR2 = VAR2;
    while ((VAR4 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR4)
        {
        case '':
            VAR7->VAR9 = true;
            break;
        case '':
            VAR8 |= VAR10;
            break;
        case '':
            VAR7->VAR11 = true;
            break;
        case '':
            VAR8 |= VAR12;
            break;
        case '':
            VAR5 = FUN3(VAR13);
            if (VAR5 < 0)
            {
                FUN4(VAR7);
                return 0;
            }
            break;
        case '':
            FUN5("");
            FUN6(FUN7(VAR2), VAR14);
            FUN4(VAR7);
            return 0;
        case '':
            VAR7->VAR15 = true;
            break;
        default:
            FUN4(VAR7);
            return FUN8(&VAR16);
        }
    }
    if (VAR17 > argc - 2)
    {
        FUN4(VAR7);
        return FUN8(&VAR16);
    }
    if (VAR7->VAR15 && VAR17 != argc - 2)
    {
        FUN5("");
        FUN4(VAR7);
        return 0;
    }
    if ((VAR8 & VAR12) && !VAR7->VAR15)
    {
        FUN5("");
        FUN4(VAR7);
        return 0;
    }
    if (VAR7->VAR15 && VAR7->VAR18)
    {
        FUN5("");
        FUN4(VAR7);
        return 0;
    }
    VAR7->VAR19 = FUN9(argv[VAR17]);
    if (VAR7->VAR19 < 0)
    {
        FUN10(VAR7->VAR19, argv[VAR17]);
        FUN4(VAR7);
        return 0;
    }
    VAR17++;
    if (VAR7->VAR15)
    {
        int64_t VAR20 = FUN9(argv[VAR17]);
        if (VAR20 < 0)
        {
            FUN10(VAR20, argv[VAR17]);
            FUN4(VAR7);
            return 0;
        }
        VAR7->VAR21.VAR22 = VAR20;
        FUN11(VAR2, VAR7->VAR19, VAR20, VAR8, VAR23, VAR7);
    }
    else
    {
        VAR3 = argc - VAR17;
        VAR7->VAR24 = FUN12(VAR2, &VAR7->VAR21, &argv[VAR17], VAR3, VAR5);
        if (VAR7->VAR24 == NULL)
        {
            FUN6(FUN7(VAR2), VAR14);
            FUN4(VAR7);
            return 0;
        }
        FUN13(&VAR7->VAR25, NULL);
        FUN14(FUN7(VAR2), &VAR7->VAR26, VAR7->VAR21.VAR22, VAR14);
        FUN15(VAR2, VAR7->VAR19, &VAR7->VAR21, VAR8, VAR23, VAR7);
    }
    return 0;
}