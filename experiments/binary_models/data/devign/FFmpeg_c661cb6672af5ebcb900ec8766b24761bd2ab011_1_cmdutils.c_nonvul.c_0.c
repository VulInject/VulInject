int FUN1(VAR1 *VAR2, int argc, char *argv[], const VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8 = 1;
    FUN2(&argc, &argv);
    FUN3(VAR2, VAR6, VAR7);
    FUN4(NULL, VAR9, "");
    while (VAR8 < argc)
    {
        const char *VAR10 = argv[VAR8++], *VAR11;
        const VAR3 *VAR12;
        int VAR13;
        FUN4(NULL, VAR9, "", VAR10);
        if (VAR10[0] != '' || !VAR10[1])
        {
            FUN5(VAR2, 0, VAR10);
            FUN4(NULL, VAR9, "", VAR6[0].VAR14);
            continue;
        }
        VAR10++;
        do
        {
            VAR11 = argv[VAR8++];
            if (!VAR11)
            {
                FUN4(NULL, VAR15, "", VAR10);
                return FUN6(VAR16);
            }
        } while (0) if ((VAR13 = FUN7(VAR6, VAR7, VAR10)) >= 0)
        {
            FUN8(VAR11);
            FUN5(VAR2, VAR13, VAR11);
            FUN4(NULL, VAR9, "", VAR6[VAR13].VAR14, VAR11);
            continue;
        }
        VAR12 = FUN9(VAR4, VAR10);
        if (VAR12->VAR14)
        {
            if (VAR12->VAR17 & VAR18)
            {
                VAR11 = argv[VAR8++];
            }
            else if (VAR12->VAR17 & VAR19)
            {
                FUN8(VAR11);
            }
            else
            {
                VAR11 = "";
            }
            FUN10(VAR2, VAR12, VAR10, VAR11);
            FUN4(NULL, VAR9, ""
                                       "",
                   VAR12->VAR14, VAR12->VAR20, VAR11);
            continue;
        }
        if (argv[VAR8])
        {
            VAR13 = FUN11(NULL, VAR10, argv[VAR8]);
            if (VAR13 >= 0)
            {
                FUN4(NULL, VAR9, ""
                                           "",
                       VAR10, argv[VAR8]);
                VAR8++;
                continue;
            }
            else if (VAR13 != VAR21)
            {
                FUN4(NULL, VAR15, ""
                                           "",
                       VAR10, argv[VAR8]);
                return VAR13;
            }
        }
        if (VAR10[0] == '' && VAR10[1] == '' && (VAR12 = FUN9(VAR4, VAR10 + 2)) && VAR12->VAR14 && VAR12->VAR17 & VAR22)
        {
            FUN10(VAR2, VAR12, VAR10, "");
            FUN4(NULL, VAR9, ""
                                       "",
                   VAR12->VAR14, VAR12->VAR20);
            continue;
        }
        FUN4(NULL, VAR15, "", VAR10);
        return VAR21;
    }
    if (VAR2->VAR23.VAR24 || VAR25 || VAR26)
        FUN4(NULL, VAR27, ""
                                     "");
    FUN4(NULL, VAR9, "");
    return 0;
}