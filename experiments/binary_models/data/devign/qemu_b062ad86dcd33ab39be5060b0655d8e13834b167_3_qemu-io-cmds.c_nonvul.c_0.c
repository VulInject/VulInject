static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6 = FUN2(struct VAR5, 1);
    VAR6->VAR2 = VAR2;
    while ((VAR4 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR4)
        {
        case '':
            VAR6->VAR7 = 1;
            break;
        case '':
            VAR6->VAR8 = 1;
            VAR6->VAR9 = FUN3(VAR10);
            if (VAR6->VAR9 < 0)
            {
                FUN4(VAR6);
                return 0;
            }
            break;
        case '':
            VAR6->VAR11 = 1;
            break;
        case '':
            VAR6->VAR12 = 1;
            break;
        default:
            FUN4(VAR6);
            return FUN5(&VAR13);
        }
    }
    if (VAR14 > argc - 2)
    {
        FUN4(VAR6);
        return FUN5(&VAR13);
    }
    VAR6->VAR15 = FUN6(argv[VAR14]);
    if (VAR6->VAR15 < 0)
    {
        FUN7("", argv[VAR14]);
        FUN4(VAR6);
        return 0;
    }
    VAR14++;
    if (VAR6->VAR15 & 0x1ff)
    {
        FUN7("" VAR16 "", VAR6->VAR15);
        FUN4(VAR6);
        return 0;
    }
    VAR3 = argc - VAR14;
    VAR6->VAR17 = FUN8(VAR2, &VAR6->VAR18, &argv[VAR14], VAR3, 0xab);
    if (VAR6->VAR17 == NULL)
    {
        FUN4(VAR6);
        return 0;
    }
    FUN9(&VAR6->VAR19, NULL);
    FUN10(FUN11(VAR2), &VAR6->VAR20, VAR6->VAR18.VAR21, VAR22);
    FUN12(VAR2, VAR6->VAR15 >> 9, &VAR6->VAR18, VAR6->VAR18.VAR21 >> 9, VAR23, VAR6);
    return 0;
}