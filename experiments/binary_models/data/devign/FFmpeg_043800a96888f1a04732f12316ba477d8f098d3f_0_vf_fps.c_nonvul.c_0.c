static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    VAR11 *VAR12 = VAR2->VAR13;
    int64_t VAR14;
    int VAR15, VAR16;
    VAR2->VAR13 = NULL;
    VAR7->VAR17++;
    if (VAR7->VAR18 == VAR19)
    {
        if (VAR12->VAR18 != VAR19)
        {
            VAR16 = FUN2(VAR7->VAR20, VAR12);
            if (VAR16 < 0)
                return VAR16;
            VAR7->VAR21 = VAR7->VAR18 = VAR12->VAR18;
        }
        else
        {
            FUN3(VAR4, VAR22, ""
                                        "");
            FUN4(VAR12);
            VAR7->VAR23++;
        }
        return 0;
    }
    if (VAR12->VAR18 == VAR19)
    {
        return FUN2(VAR7->VAR20, VAR12);
    }
    VAR14 = FUN5(VAR12->VAR18 - VAR7->VAR18, VAR2->VAR24, VAR9->VAR24);
    if (VAR14 < 1)
    {
        VAR11 *VAR25;
        int VAR23 = FUN6(VAR7->VAR20) / sizeof(VAR11 *);
        FUN3(VAR4, VAR26, "", VAR23);
        VAR7->VAR23 += VAR23;
        FUN7(VAR7->VAR20, &VAR25, sizeof(VAR25), NULL);
        FUN8(VAR7->VAR20);
        VAR16 = FUN2(VAR7->VAR20, VAR25);
        FUN4(VAR12);
        return VAR16;
    }
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        VAR11 *VAR27;
        FUN7(VAR7->VAR20, &VAR27, sizeof(VAR27), NULL);
        if (!FUN6(VAR7->VAR20) && VAR15 < VAR14 - 1)
        {
            VAR11 *VAR28 = FUN9(VAR27, VAR29);
            FUN3(VAR4, VAR26, "");
            if (VAR28)
                VAR16 = FUN2(VAR7->VAR20, VAR28);
            else
                VAR16 = FUN10(VAR30);
            if (VAR16 < 0)
            {
                FUN11(&VAR27);
                FUN11(&VAR12);
                return VAR16;
            }
            VAR7->VAR28++;
        }
        VAR27->VAR18 = FUN5(VAR7->VAR21, VAR2->VAR24, VAR9->VAR24) + VAR7->VAR31;
        if ((VAR16 = FUN12(VAR9, VAR27)) < 0 || (VAR16 = FUN13(VAR9, 0, VAR9->VAR32, 1)) < 0 || (VAR16 = FUN14(VAR9)) < 0)
        {
            FUN11(&VAR12);
            return VAR16;
        }
        VAR7->VAR31++;
    }
    FUN8(VAR7->VAR20);
    VAR16 = FUN2(VAR7->VAR20, VAR12);
    VAR7->VAR18 = VAR7->VAR21 + FUN5(VAR7->VAR31, VAR9->VAR24, VAR2->VAR24);
    return VAR16;
}