static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, VAR9 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    if (!(VAR16 = FUN2(VAR2, 1)))
    {
        FUN3(VAR2);
        return 0;
    }
    else if (VAR16 < 0)
        return VAR16;
    for (VAR12 = 0; VAR12 < VAR6->VAR17; VAR12++)
    {
        VAR18 *VAR19 = VAR6->VAR19 + VAR12;
        VAR20 *VAR21 = VAR19->VAR21 + VAR7;
        int VAR22 = 0;
        if (VAR19->VAR23[0][0] == VAR19->VAR23[0][1] || VAR19->VAR23[1][0] == VAR19->VAR23[1][1])
            continue;
        for (VAR13 = VAR21->VAR24; VAR13 < VAR21->VAR25; VAR13++)
            for (VAR14 = VAR21->VAR26, VAR15 = VAR13 * VAR19->VAR14 + VAR14; VAR14 < VAR21->VAR27; VAR14++, VAR15++, VAR22++)
            {
                VAR28 *VAR29 = VAR19->VAR29 + VAR15;
                int VAR30, VAR31, VAR32;
                if (VAR29->VAR33)
                    VAR30 = FUN2(VAR2, 1);
                else
                    VAR30 = FUN4(VAR2, VAR21->VAR34 + VAR22, VAR8 + 1) == VAR8;
                if (!VAR30)
                    continue;
                else if (VAR30 < 0)
                    return VAR30;
                if (!VAR29->VAR33)
                    VAR29->VAR35 = VAR10[VAR12] + VAR11 - 1 - FUN4(VAR2, VAR21->VAR36 + VAR22, 100);
                if ((VAR31 = FUN5(VAR2)) < 0)
                    return VAR31;
                if ((VAR32 = FUN6(VAR2)) < 0)
                    return VAR32;
                VAR29->VAR37 += VAR32;
                if ((VAR16 = FUN2(VAR2, FUN7(VAR31) + VAR29->VAR37)) < 0)
                    return VAR16;
                VAR29->VAR38 = VAR16;
                VAR29->VAR33 += VAR31;
            }
    }
    FUN3(VAR2);
    if (VAR4->VAR39 & VAR40)
    {
        if (FUN8(&VAR2->VAR41) == VAR42)
        {
            FUN9(&VAR2->VAR41, 2);
        }
        else
        {
            FUN10(VAR2->VAR43, VAR44, "");
        }
    }
    for (VAR12 = 0; VAR12 < VAR6->VAR17; VAR12++)
    {
        VAR18 *VAR19 = VAR6->VAR19 + VAR12;
        int VAR45, VAR46 = VAR19->VAR21[VAR7].VAR27 - VAR19->VAR21[VAR7].VAR26;
        for (VAR45 = VAR19->VAR21[VAR7].VAR24; VAR45 < VAR19->VAR21[VAR7].VAR25; VAR45++)
        {
            int VAR47;
            for (VAR47 = VAR19->VAR21[VAR7].VAR26; VAR47 < VAR19->VAR21[VAR7].VAR27; VAR47++)
            {
                VAR28 *VAR29 = VAR19->VAR29 + VAR45 * VAR46 + VAR47;
                if (FUN11(&VAR2->VAR41) < VAR29->VAR38 || sizeof(VAR29->VAR48) < VAR29->VAR38)
                    return FUN12(VAR49);
                FUN13(&VAR2->VAR41, VAR29->VAR48, VAR29->VAR38);
                VAR29->VAR50 += VAR29->VAR38;
                VAR29->VAR38 = 0;
            }
        }
    }
    return 0;
}