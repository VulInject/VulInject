static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, VAR9 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15;
    if (!(VAR14 = FUN2(VAR2, 1)))
    {
        FUN3(VAR2);
        return 0;
    }
    else if (VAR14 < 0)
        return VAR14;
    for (VAR12 = 0; VAR12 < VAR6->VAR16; VAR12++)
    {
        VAR17 *VAR18 = VAR6->VAR18 + VAR12;
        VAR19 *VAR20 = VAR18->VAR20 + VAR7;
        if (VAR18->VAR21[0][0] == VAR18->VAR21[0][1] || VAR18->VAR21[1][0] == VAR18->VAR21[1][1])
            continue;
        VAR20->VAR22 = 0;
        VAR20->VAR23 = 0;
        VAR15 = VAR20->VAR24 * VAR20->VAR25;
        for (VAR13 = 0; VAR13 < VAR15; VAR13++)
        {
            VAR26 *VAR27 = VAR20->VAR27 + VAR13;
            int VAR28, VAR29, VAR30;
            if (VAR27->VAR31)
                VAR28 = FUN2(VAR2, 1);
            else
                VAR28 = FUN4(VAR2, VAR20->VAR32 + VAR13, VAR8 + 1) == VAR8;
            if (!VAR28)
                continue;
            else if (VAR28 < 0)
                return VAR28;
            if (!VAR27->VAR31)
                VAR27->VAR33 = VAR10[VAR12] + VAR11 - 1 - FUN4(VAR2, VAR20->VAR34 + VAR13, 100);
            if ((VAR29 = FUN5(VAR2)) < 0)
                return VAR29;
            if ((VAR30 = FUN6(VAR2)) < 0)
                return VAR30;
            VAR27->VAR35 += VAR30;
            if ((VAR14 = FUN2(VAR2, FUN7(VAR29) + VAR27->VAR35)) < 0)
                return VAR14;
            VAR27->VAR36 = VAR14;
            VAR27->VAR31 += VAR29;
        }
    }
    FUN3(VAR2);
    if (VAR4->VAR37 & VAR38)
    {
        if (FUN8(&VAR2->VAR39) == VAR40)
            FUN9(&VAR2->VAR39, 2);
        else
            FUN10(VAR2->VAR41, VAR42, "");
    }
    for (VAR12 = 0; VAR12 < VAR6->VAR16; VAR12++)
    {
        VAR17 *VAR18 = VAR6->VAR18 + VAR12;
        VAR19 *VAR20 = VAR18->VAR20 + VAR7;
        VAR15 = VAR20->VAR24 * VAR20->VAR25;
        for (VAR13 = 0; VAR13 < VAR15; VAR13++)
        {
            VAR26 *VAR27 = VAR20->VAR27 + VAR13;
            if (FUN11(&VAR2->VAR39) < VAR27->VAR36 || sizeof(VAR27->VAR43) < VAR27->VAR36)
                return FUN12(VAR44);
            if (VAR27->VAR36 > 0)
            {
                FUN13(&VAR2->VAR39, VAR27->VAR43, VAR27->VAR36);
            }
            else
            {
                VAR27->VAR43[0] = 0xFF;
                VAR27->VAR43[1] = 0xFF;
            }
            VAR27->VAR45 += VAR27->VAR36;
            VAR27->VAR36 = 0;
        }
    }
    return 0;
}