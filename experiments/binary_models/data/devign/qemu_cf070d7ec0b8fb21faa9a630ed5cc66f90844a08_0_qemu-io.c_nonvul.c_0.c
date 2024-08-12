FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    struct VAR3 *VAR4 = calloc(1, sizeof(struct VAR3));
    VAR5 *VAR6;
    while ((VAR2 = getopt(argc, argv, "")) != VAR7)
    {
        switch (VAR2)
        {
        case '':
            VAR4->VAR8 = 1;
            break;
        case '':
            VAR4->VAR9 = 1;
            VAR4->VAR10 = FUN2(VAR11);
            if (VAR4->VAR10 < 0)
                return 0;
            break;
        case '':
            VAR4->VAR12 = 1;
            break;
        case '':
            VAR4->VAR13 = 1;
            break;
        default:
            free(VAR4);
            return FUN3(&VAR14);
        }
    }
    if (VAR15 > argc - 2)
    {
        free(VAR4);
        return FUN3(&VAR14);
    }
    VAR4->VAR16 = FUN4(argv[VAR15]);
    if (VAR4->VAR16 < 0)
    {
        FUN5("", argv[VAR15]);
        free(VAR4);
        return 0;
    }
    VAR15++;
    if (VAR4->VAR16 & 0x1ff)
    {
        FUN5("", (long long)VAR4->VAR16);
        free(VAR4);
        return 0;
    }
    VAR1 = argc - VAR15;
    VAR4->VAR17 = FUN6(&VAR4->VAR18, &argv[VAR15], VAR1, 0xab);
    FUN7(&VAR4->VAR19, NULL);
    VAR6 = FUN8(VAR20, VAR4->VAR16 >> 9, &VAR4->VAR18, VAR4->VAR18.VAR21 >> 9, VAR22, VAR4);
    if (!VAR6)
    {
        free(VAR4->VAR17);
        free(VAR4);
        return -VAR23;
    }
    return 0;
}