static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    VAR11 *VAR12 = VAR2->VAR13;
    int64_t VAR14;
    int VAR15;
    VAR2->VAR13 = NULL;
    VAR7->VAR16++;
    if (VAR7->VAR17 == VAR18)
    {
        if (VAR12->VAR17 != VAR18)
        {
            FUN2(VAR7->VAR19, VAR12);
            VAR7->VAR20 = VAR7->VAR17 = VAR12->VAR17;
        }
        else
        {
            FUN3(VAR4, VAR21, ""
                                        "");
            FUN4(VAR12);
            VAR7->VAR22++;
        }
        return;
    }
    if (VAR12->VAR17 == VAR18)
    {
        FUN2(VAR7->VAR19, VAR12);
        return;
    }
    VAR14 = FUN5(VAR12->VAR17 - VAR7->VAR17, VAR2->VAR23, VAR9->VAR23);
    if (VAR14 < 1)
    {
        VAR11 *VAR24;
        int VAR22 = FUN6(VAR7->VAR19) / sizeof(VAR11 *);
        FUN3(VAR4, VAR25, "", VAR22);
        VAR7->VAR22 += VAR22;
        FUN7(VAR7->VAR19, &VAR24, sizeof(VAR24), NULL);
        FUN8(VAR7->VAR19);
        FUN2(VAR7->VAR19, VAR24);
        FUN4(VAR12);
        return;
    }
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        VAR11 *VAR26;
        FUN7(VAR7->VAR19, &VAR26, sizeof(VAR26), NULL);
        if (!FUN6(VAR7->VAR19) && VAR15 < VAR14 - 1)
        {
            FUN3(VAR4, VAR25, "");
            FUN2(VAR7->VAR19, FUN9(VAR26, VAR27));
            VAR7->VAR28++;
        }
        VAR26->VAR17 = FUN5(VAR7->VAR20, VAR2->VAR23, VAR9->VAR23) + VAR7->VAR29;
        FUN10(VAR9, VAR26);
        FUN11(VAR9, 0, VAR9->VAR30, 1);
        FUN12(VAR9);
        VAR7->VAR29++;
    }
    FUN8(VAR7->VAR19);
    FUN2(VAR7->VAR19, VAR12);
    VAR7->VAR17 = VAR7->VAR20 + FUN5(VAR7->VAR29, VAR9->VAR23, VAR2->VAR23);
}