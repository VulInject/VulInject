static int FUN1(VAR1 *VAR2)
{
    DWTContext VAR3;
    int VAR4, VAR5, VAR6, VAR7;
    int VAR8;
    if (VAR2->VAR9)
    {
        for (VAR6 = 0; VAR6 < 3; VAR6++)
        {
            VAR10 *VAR11 = &VAR2->VAR12[VAR6];
            memset(VAR11->VAR13, 0, VAR11->VAR14 * VAR11->VAR15 * sizeof(VAR16));
        }
        if (!VAR2->VAR17)
        {
            if ((VAR8 = FUN2(VAR2)) < 0)
                return VAR8;
        }
    }
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR10 *VAR11 = &VAR2->VAR12[VAR6];
        VAR18 *VAR19 = VAR2->VAR20->VAR21->VAR22[VAR6];
        for (VAR5 = 0; VAR5 < 4; VAR5++)
            VAR2->VAR23[VAR5] = VAR2->VAR24 + VAR5 * FUN3(VAR11->VAR25, 16);
        if (!VAR2->VAR17 && !VAR2->VAR9)
        {
            memset(VAR11->VAR13, 0, VAR11->VAR14 * VAR11->VAR15 * sizeof(VAR16));
            FUN4(VAR2, VAR6);
        }
        if (FUN5(&VAR3, VAR11->VAR13, VAR11->VAR26, VAR11->VAR15, VAR11->VAR14, VAR2->VAR27 + 2, VAR2->VAR28, VAR11->VAR29))
            return -1;
        if (!VAR2->VAR30)
        {
            for (VAR4 = 0; VAR4 < VAR11->VAR31; VAR4 += 16)
            {
                FUN6(&VAR3, VAR4 + 16);
                VAR2->VAR32.FUN7(VAR19 + VAR4 * VAR11->VAR33, VAR11->VAR33, VAR11->VAR13 + VAR4 * VAR11->VAR14, VAR11->VAR14, VAR11->VAR25, 16);
            }
        }
        else
        {
            int VAR34 = VAR11->VAR35 * VAR11->VAR33;
            FUN8(VAR2, VAR11->VAR25, VAR11->VAR31, VAR11->VAR36, VAR11->VAR37);
            for (VAR5 = 0; VAR5 < VAR2->VAR30; VAR5++)
                FUN9(VAR2, VAR2->VAR38[VAR5], VAR6, VAR11->VAR25, VAR11->VAR31);
            memset(VAR2->VAR39, 0, 4 * VAR11->VAR40 * VAR11->VAR33);
            VAR7 = -VAR11->VAR40;
            for (VAR4 = 0; VAR4 < VAR2->VAR41; VAR4++)
            {
                int VAR42 = 0, VAR43 = FUN10(VAR7, 0);
                VAR44 *VAR39 = VAR2->VAR39 + VAR4 * VAR34;
                VAR45 *VAR46 = VAR2->VAR47 + VAR4 * VAR2->VAR48;
                FUN11(VAR2, VAR11, VAR4);
                if (VAR4 == VAR2->VAR41 - 1 || VAR43 + VAR11->VAR35 > VAR11->VAR31)
                    VAR42 = VAR11->VAR31 - VAR43;
                else
                    VAR42 = VAR11->VAR35 - (VAR43 - VAR7);
                if (VAR42 < 0)
                    break;
                memset(VAR39 + 2 * VAR11->VAR40 * VAR11->VAR33, 0, 2 * VAR34);
                FUN12(VAR2, VAR46, VAR39, VAR6, VAR7);
                VAR39 += (VAR43 - VAR7) * VAR11->VAR33 + VAR11->VAR49;
                FUN6(&VAR3, VAR43 + VAR42);
                VAR2->VAR32.FUN13(VAR19 + VAR43 * VAR11->VAR33, VAR39, VAR11->VAR33, VAR11->VAR13 + VAR43 * VAR11->VAR14, VAR11->VAR14, VAR11->VAR25, VAR42);
                VAR7 += VAR11->VAR35;
            }
        }
    }
    return 0;
}