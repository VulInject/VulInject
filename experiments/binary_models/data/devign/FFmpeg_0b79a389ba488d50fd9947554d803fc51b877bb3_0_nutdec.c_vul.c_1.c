static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8)
{
    int VAR9 = FUN2(VAR4);
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12 = 0;
    int64_t VAR13 = 0;
    int VAR14 = 0;
    int VAR15 = 0;
    int VAR16 = 0;
    int VAR17, VAR18;
    for (VAR17 = 0; VAR17 < VAR9; VAR17++)
    {
        uint8_t VAR19[256], VAR20[256], VAR21[256];
        int VAR22;
        if (FUN3(VAR4) >= VAR8)
            return VAR23;
        VAR18 = FUN4(VAR4, VAR19, sizeof(VAR19));
        if (VAR18 < 0)
        {
            FUN5(VAR2, VAR24, "");
            return VAR18;
        }
        VAR22 = FUN6(VAR4);
        if (VAR22 == -1)
        {
            FUN4(VAR4, VAR20, sizeof(VAR20));
            FUN5(VAR2, VAR25, "", VAR19, VAR20);
        }
        else if (VAR22 == -2)
        {
            VAR26 *VAR27 = NULL;
            int64_t VAR28, VAR29;
            FUN4(VAR4, VAR21, sizeof(VAR21));
            VAR29 = FUN2(VAR4);
            if (FUN3(VAR4) + VAR29 >= VAR8)
                return VAR23;
            if (!strcmp(VAR19, ""))
            {
                VAR27 = FUN7(VAR6, VAR30, VAR29);
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR27 = FUN7(VAR6, VAR31, VAR29);
            }
            else if (sscanf(VAR19, "" VAR32 "", &VAR28) == 1)
            {
                VAR27 = FUN7(VAR6, VAR33, VAR29 + 8);
                if (!VAR27)
                    return FUN8(VAR34);
                FUN9(VAR27, VAR28);
                VAR27 += 8;
            }
            else if (!strcmp(VAR19, "") && VAR29 == 8)
            {
                VAR13 = FUN10(VAR4);
                continue;
            }
            else
            {
                FUN5(VAR2, VAR25, "", VAR19, VAR21);
                FUN11(VAR4, VAR29);
                continue;
            }
            if (!VAR27)
                return FUN8(VAR34);
            FUN12(VAR4, VAR27, VAR29);
        }
        else if (VAR22 == -3)
        {
            VAR22 = FUN6(VAR4);
        }
        else if (VAR22 == -4)
        {
            VAR22 = FUN2(VAR4);
        }
        else if (VAR22 < -4)
        {
            FUN6(VAR4);
        }
        else
        {
            if (!strcmp(VAR19, ""))
            {
                VAR10 = VAR22;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR11 = VAR22;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR12 = VAR22;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR14 = VAR22;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR15 = VAR22;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR16 = VAR22;
            }
            else
            {
                FUN5(VAR2, VAR25, "", VAR19);
            }
        }
    }
    if (VAR12 || VAR13 || VAR14 || VAR15 || VAR16)
    {
        VAR26 *VAR27 = FUN7(VAR6, VAR35, 28);
        if (!VAR27)
            return FUN8(VAR34);
        FUN13(&VAR27, VAR36 * (!!VAR12) + VAR37 * (!!VAR13) + VAR38 * (!!VAR14) + VAR39 * (!!(VAR15 | VAR16)));
        if (VAR12)
            FUN13(&VAR27, VAR12);
        if (VAR13)
            FUN14(&VAR27, VAR13);
        if (VAR14)
            FUN13(&VAR27, VAR14);
        if (VAR15 || VAR16)
        {
            FUN13(&VAR27, VAR15);
            FUN13(&VAR27, VAR16);
        }
    }
    if (VAR10 || VAR11)
    {
        VAR26 *VAR27 = FUN7(VAR6, VAR40, 10);
        if (!VAR27)
            return FUN8(VAR34);
        FUN15(VAR27, VAR10);
        FUN15(VAR27 + 4, VAR11);
    }
    return 0;
}