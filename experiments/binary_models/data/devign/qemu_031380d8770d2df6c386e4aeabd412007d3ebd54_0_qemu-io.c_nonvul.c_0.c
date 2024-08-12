static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    struct VAR3 *VAR4 = FUN2(struct VAR3, 1);
    while ((VAR2 = getopt(argc, argv, "")) != VAR5)
    {
        switch (VAR2)
        {
        case '':
            VAR4->VAR6 = 1;
            break;
        case '':
            VAR4->VAR7 = 1;
            VAR4->VAR8 = FUN3(VAR9);
            if (VAR4->VAR8 < 0)
            {
                FUN4(VAR4);
                return 0;
            }
            break;
        case '':
            VAR4->VAR10 = 1;
            break;
        case '':
            VAR4->VAR11 = 1;
            break;
        default:
            FUN4(VAR4);
            return FUN5(&VAR12);
        }
    }
    if (VAR13 > argc - 2)
    {
        FUN4(VAR4);
        return FUN5(&VAR12);
    }
    VAR4->VAR14 = FUN6(argv[VAR13]);
    if (VAR4->VAR14 < 0)
    {
        FUN7("", argv[VAR13]);
        FUN4(VAR4);
        return 0;
    }
    VAR13++;
    if (VAR4->VAR14 & 0x1ff)
    {
        FUN7("" VAR15 "", VAR4->VAR14);
        FUN4(VAR4);
        return 0;
    }
    VAR1 = argc - VAR13;
    VAR4->VAR16 = FUN8(&VAR4->VAR17, &argv[VAR13], VAR1, 0xab);
    if (VAR4->VAR16 == NULL)
    {
        FUN4(VAR4);
        return 0;
    }
    FUN9(&VAR4->VAR18, NULL);
    FUN10(VAR19, VAR4->VAR14 >> 9, &VAR4->VAR17, VAR4->VAR17.VAR20 >> 9, VAR21, VAR4);
    return 0;
}