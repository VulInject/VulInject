static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    int VAR3 = 0xcd;
    struct VAR4 *VAR5 = FUN2(struct VAR4, 1);
    while ((VAR2 = getopt(argc, argv, "")) != VAR6)
    {
        switch (VAR2)
        {
        case '':
            VAR5->VAR7 = 1;
            break;
        case '':
            VAR5->VAR8 = 1;
            break;
        case '':
            VAR3 = FUN3(VAR9);
            if (VAR3 < 0)
            {
                FUN4(VAR5);
                return 0;
            }
            break;
        default:
            FUN4(VAR5);
            return FUN5(&VAR10);
        }
    }
    if (VAR11 > argc - 2)
    {
        FUN4(VAR5);
        return FUN5(&VAR10);
    }
    VAR5->VAR12 = FUN6(argv[VAR11]);
    if (VAR5->VAR12 < 0)
    {
        FUN7("", argv[VAR11]);
        FUN4(VAR5);
        return 0;
    }
    VAR11++;
    if (VAR5->VAR12 & 0x1ff)
    {
        FUN7("" VAR13 "", VAR5->VAR12);
        FUN4(VAR5);
        return 0;
    }
    VAR1 = argc - VAR11;
    VAR5->VAR14 = FUN8(&VAR5->VAR15, &argv[VAR11], VAR1, VAR3);
    if (VAR5->VAR14 == NULL)
    {
        FUN4(VAR5);
        return 0;
    }
    FUN9(&VAR5->VAR16, NULL);
    FUN10(VAR17, VAR5->VAR12 >> 9, &VAR5->VAR15, VAR5->VAR15.VAR18 >> 9, VAR19, VAR5);
    return 0;
}