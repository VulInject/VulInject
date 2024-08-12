static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    FUN2(VAR2, VAR8, NULL);
    if (FUN3(VAR2->VAR9, 0))
    {
        VAR7 = FUN4(VAR2, VAR2->VAR9, 0, 0, &VAR4->VAR10);
        if (VAR7 < 0)
            return VAR7;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR11; VAR6++)
    {
        VAR12 *VAR13 = VAR2->VAR14[VAR6];
        if (VAR13->VAR15->VAR16 == VAR17)
            continue;
        if (!FUN3(VAR13->VAR9, VAR18))
            continue;
        VAR7 = FUN4(VAR2, VAR13->VAR9, VAR18, VAR6 + 1, &VAR4->VAR10);
        if (VAR7 < 0)
            return VAR7;
    }
    if (VAR2->VAR19->VAR20 && !VAR4->VAR21)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR11; VAR6++)
        {
            VAR22 *VAR19;
            VAR12 *VAR13 = VAR2->VAR14[VAR6];
            ebml_master VAR23;
            ebml_master VAR24;
            if (VAR13->VAR15->VAR16 == VAR17)
                continue;
            FUN5(VAR2, VAR18, VAR6 + 1, &VAR4->VAR10, &VAR23);
            VAR19 = VAR4->VAR25;
            VAR24 = FUN6(VAR19, VAR26, 0);
            FUN7(VAR19, VAR27, "");
            VAR4->VAR28[VAR6] = FUN8(VAR19);
            FUN9(VAR19, 23);
            FUN10(VAR19, VAR24);
            FUN10(VAR19, VAR23);
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR29; VAR6++)
    {
        VAR30 *VAR31 = VAR2->VAR32[VAR6];
        if (!FUN3(VAR31->VAR9, VAR33))
            continue;
        VAR7 = FUN4(VAR2, VAR31->VAR9, VAR33, VAR31->VAR34 + VAR4->VAR35, &VAR4->VAR10);
        if (VAR7 < 0)
            return VAR7;
    }
    if (VAR4->VAR36)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR37->VAR38; VAR6++)
        {
            VAR39 *VAR40 = &VAR4->VAR37->VAR41[VAR6];
            VAR12 *VAR13 = VAR2->VAR14[VAR40->VAR42];
            if (!FUN3(VAR13->VAR9, VAR43))
                continue;
            VAR7 = FUN4(VAR2, VAR13->VAR9, VAR43, VAR40->VAR44, &VAR4->VAR10);
            if (VAR7 < 0)
                return VAR7;
        }
    }
    if (VAR4->VAR10.VAR45)
    {
        if (VAR2->VAR19->VAR20 && !VAR4->VAR21)
            FUN9(VAR2->VAR19, FUN8(VAR4->VAR25));
        else
            FUN11(VAR2->VAR19, &VAR4->VAR25, VAR4, VAR4->VAR10);
    }
    return 0;
}