static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    int VAR3 = 0xcd;
    struct VAR4 *VAR5 = calloc(1, sizeof(struct VAR4));
    VAR6 *VAR7;
    while ((VAR2 = getopt(argc, argv, "")) != VAR8)
    {
        switch (VAR2)
        {
        case '':
            VAR5->VAR9 = 1;
            break;
        case '':
            VAR5->VAR10 = 1;
            break;
        case '':
            VAR3 = FUN2(VAR11);
            if (VAR3 < 0)
            {
                return 0;
            }
            break;
        default:
            return FUN3(&VAR12);
        }
    }
    if (VAR13 > argc - 2)
    {
        return FUN3(&VAR12);
    }
    VAR5->VAR14 = FUN4(argv[VAR13]);
    if (VAR5->VAR14 < 0)
    {
        FUN5("", argv[VAR13]);
        return 0;
    }
    VAR13++;
    if (VAR5->VAR14 & 0x1ff)
    {
        FUN5("" VAR15 "", VAR5->VAR14);
        return 0;
    }
    VAR1 = argc - VAR13;
    VAR5->VAR16 = FUN6(&VAR5->VAR17, &argv[VAR13], VAR1, VAR3);
    FUN7(&VAR5->VAR18, NULL);
    VAR7 = FUN8(VAR19, VAR5->VAR14 >> 9, &VAR5->VAR17, VAR5->VAR17.VAR20 >> 9, VAR21, VAR5);
    if (!VAR7)
    {
        free(VAR5->VAR16);
        return -VAR22;
    }
    return 0;