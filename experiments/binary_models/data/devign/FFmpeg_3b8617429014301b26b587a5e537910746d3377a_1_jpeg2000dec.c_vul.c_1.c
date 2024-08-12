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
        VAR15 = VAR20->VAR22 * VAR20->VAR23;
        for (VAR13 = 0; VAR13 < VAR15; VAR13++)
        {
            VAR24 *VAR25 = VAR20->VAR25 + VAR13;
            int VAR26, VAR27, VAR28;
            if (VAR25->VAR29)
                VAR26 = FUN2(VAR2, 1);
            else
                VAR26 = FUN4(VAR2, VAR20->VAR30 + VAR13, VAR8 + 1) == VAR8;
            if (!VAR26)
                continue;
            else if (VAR26 < 0)
                return VAR26;
            if (!VAR25->VAR29)
                VAR25->VAR31 = VAR10[VAR12] + VAR11 - 1 - FUN4(VAR2, VAR20->VAR32 + VAR13, 100);
            if ((VAR27 = FUN5(VAR2)) < 0)
                return VAR27;
            if ((VAR28 = FUN6(VAR2)) < 0)
                return VAR28;
            VAR25->VAR33 += VAR28;
            if ((VAR14 = FUN2(VAR2, FUN7(VAR27) + VAR25->VAR33)) < 0)
                return VAR14;
            VAR25->VAR34 = VAR14;
            VAR25->VAR29 += VAR27;
        }
    }
    FUN3(VAR2);
    if (VAR4->VAR35 & VAR36)
    {
        if (FUN8(&VAR2->VAR37) == VAR38)
            FUN9(&VAR2->VAR37, 2);
        else
            FUN10(VAR2->VAR39, VAR40, "");
    }
    for (VAR12 = 0; VAR12 < VAR6->VAR16; VAR12++)
    {
        VAR17 *VAR18 = VAR6->VAR18 + VAR12;
        VAR19 *VAR20 = VAR18->VAR20 + VAR7;
        VAR15 = VAR20->VAR22 * VAR20->VAR23;
        for (VAR13 = 0; VAR13 < VAR15; VAR13++)
        {
            VAR24 *VAR25 = VAR20->VAR25 + VAR13;
            if (FUN11(&VAR2->VAR37) < VAR25->VAR34 || sizeof(VAR25->VAR41) < VAR25->VAR34)
                return FUN12(VAR42);
            if (VAR25->VAR34 > 0)
            {
                FUN13(&VAR2->VAR37, VAR25->VAR41, VAR25->VAR34);
            }
            else
            {
                VAR25->VAR41[0] = 0xFF;
                VAR25->VAR41[1] = 0xFF;
            }
            VAR25->VAR43 += VAR25->VAR34;
            VAR25->VAR34 = 0;
        }
    }
    return 0;
}