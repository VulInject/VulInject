static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int VAR3, VAR4;
    int VAR5 = 0xcd;
    struct VAR6 *VAR7 = FUN2(struct VAR6, 1);
    VAR7->VAR2 = VAR2;
    while ((VAR4 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR4)
        {
        case '':
            VAR7->VAR8 = 1;
            break;
        case '':
            VAR7->VAR9 = 1;
            break;
        case '':
            VAR5 = FUN3(VAR10);
            if (VAR5 < 0)
            {
                return 0;
            }
            break;
        case '':
            VAR7->VAR11 = 1;
            break;
        default:
            return FUN4(&VAR12);
        }
    }
    if (VAR13 > argc - 2)
    {
        return FUN4(&VAR12);
    }
    if (VAR7->VAR11 && VAR13 != argc - 2)
    {
        FUN5("");
        return 0;
    }
    if (VAR7->VAR11 && VAR7->VAR14)
    {
        FUN5("");
        return 0;
    }
    VAR7->VAR15 = FUN6(argv[VAR13]);
    if (VAR7->VAR15 < 0)
    {
        FUN7(VAR7->VAR15, argv[VAR13]);
        return 0;
    }
    VAR13++;
    if (VAR7->VAR15 & 0x1ff)
    {
        FUN5("" VAR16 "", VAR7->VAR15);
        FUN8(FUN9(VAR2), VAR17);
        return 0;
    }
    if (VAR7->VAR11)
    {
        int64_t VAR18 = FUN6(argv[VAR13]);
        if (VAR18 < 0)
        {
            FUN7(VAR18, argv[VAR13]);
            return 0;
        }
        VAR7->VAR19.VAR20 = VAR18;
        FUN10(VAR2, VAR7->VAR15 >> 9, VAR18 >> 9, 0, VAR21, VAR7);
    }
    else
    {
        VAR3 = argc - VAR13;
        VAR7->VAR22 = FUN11(VAR2, &VAR7->VAR19, &argv[VAR13], VAR3, VAR5);
        if (VAR7->VAR22 == NULL)
        {
            FUN8(FUN9(VAR2), VAR17);
            return 0;
        }
        FUN12(&VAR7->VAR23, NULL);
        FUN13(FUN9(VAR2), &VAR7->VAR24, VAR7->VAR19.VAR20, VAR17);
        FUN14(VAR2, VAR7->VAR15 >> 9, &VAR7->VAR19, VAR7->VAR19.VAR20 >> 9, VAR21, VAR7);
    }
    return 0;