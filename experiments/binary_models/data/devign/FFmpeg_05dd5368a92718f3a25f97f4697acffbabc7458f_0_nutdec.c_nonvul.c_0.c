static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    uint64_t VAR9, VAR10, VAR11;
    unsigned int VAR12, VAR13;
    int VAR14, VAR15;
    int64_t VAR16, VAR17;
    char VAR18[256], VAR19[1024], VAR20[256];
    const char *VAR21;
    int *VAR22 = NULL;
    VAR23 *VAR24 = NULL;
    VAR25 *VAR26 = NULL;
    VAR27 **VAR28 = NULL;
    int VAR29 = 0;
    VAR17 = FUN2(VAR2, VAR7, 1, VAR30);
    VAR17 += FUN3(VAR7);
    FUN4(VAR12, VAR9 <= VAR4->VAR31);
    VAR14 = FUN5(VAR7);
    VAR10 = FUN6(VAR7);
    VAR11 = FUN6(VAR7);
    VAR13 = FUN6(VAR7);
    if (VAR14 && !VAR12)
    {
        int64_t VAR32 = VAR10 / VAR2->VAR33;
        VAR24 = FUN7(VAR4, VAR14, VAR2->VAR34[VAR10 % VAR2->VAR33], VAR32, VAR32 + VAR11, NULL);
        VAR28 = &VAR24->VAR28;
    }
    else if (VAR12)
    {
        VAR26 = VAR4->VAR35[VAR12 - 1];
        VAR28 = &VAR26->VAR28;
        VAR22 = &VAR26->VAR22;
        VAR29 = VAR36;
    }
    else
    {
        VAR28 = &VAR4->VAR28;
        VAR22 = &VAR4->VAR22;
        VAR29 = VAR37;
    }
    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
    {
        FUN8(VAR7, VAR18, sizeof(VAR18));
        VAR16 = FUN5(VAR7);
        if (VAR16 == -1)
        {
            VAR21 = "";
            FUN8(VAR7, VAR19, sizeof(VAR19));
        }
        else if (VAR16 == -2)
        {
            FUN8(VAR7, VAR20, sizeof(VAR20));
            VAR21 = VAR20;
            FUN8(VAR7, VAR19, sizeof(VAR19));
        }
        else if (VAR16 == -3)
        {
            VAR21 = "";
            VAR16 = FUN5(VAR7);
        }
        else if (VAR16 == -4)
        {
            VAR21 = "";
            VAR16 = FUN6(VAR7);
        }
        else if (VAR16 < -4)
        {
            VAR21 = "";
            FUN5(VAR7);
        }
        else
        {
            VAR21 = "";
        }
        if (VAR12 > VAR4->VAR31)
        {
            FUN9(VAR4, VAR38, "");
            continue;
        }
        if (!strcmp(VAR21, ""))
        {
            if (VAR14 == 0 && !strcmp(VAR18, ""))
            {
                FUN10(VAR4, VAR19, VAR12 - 1);
                continue;
            }
            if (VAR12 && !strcmp(VAR18, ""))
            {
                sscanf(VAR19, "", &VAR26->VAR39.VAR40, &VAR26->VAR39.VAR41);
                if (VAR26->VAR39.VAR40 >= 1000LL * VAR26->VAR39.VAR41)
                    VAR26->VAR39.VAR40 = VAR26->VAR39.VAR41 = 0;
                continue;
            }
            if (VAR28 && FUN11(VAR18, "") && FUN11(VAR18, "") && FUN11(VAR18, ""))
            {
                if (VAR22)
                    *VAR22 |= VAR29;
                FUN12(VAR28, VAR18, VAR19, 0);
            }
        }
    }
    if (FUN13(VAR7, VAR17) || FUN14(VAR7))
    {
        FUN9(VAR4, VAR38, "");
        return VAR42;
    }
    return 0;
}