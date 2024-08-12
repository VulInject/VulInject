static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    VAR7 = FUN2(&VAR2->VAR13, 2);
    VAR8 = FUN2(&VAR2->VAR13, 4);
    if (VAR4->VAR7 != VAR7 || VAR4->VAR8 != VAR8)
    {
        FUN3(VAR6, VAR14, "");
        return VAR15;
    }
    VAR4->VAR16 = FUN4(&VAR2->VAR13);
    if (!VAR4->VAR16)
    {
        int VAR17 = VAR4->VAR18;
        if (FUN4(&VAR2->VAR13))
            FUN5(&VAR2->VAR13, 16);
        VAR4->VAR19 = FUN2(&VAR2->VAR13, 2);
        if (VAR4->VAR19 >= 2)
        {
            FUN3(VAR6, VAR14, "", VAR4->VAR19);
            return VAR15;
        }
        if (!VAR4->VAR19)
            VAR2->VAR20 = 1;
        VAR4->VAR21 = FUN4(&VAR2->VAR13);
        if (VAR4->VAR21)
            VAR4->VAR22 = FUN2(&VAR2->VAR13, 16);
        VAR9 = FUN2(&VAR2->VAR13, 2);
        if (VAR9 == 3)
        {
            FUN3(VAR6, VAR14, "");
            return VAR15;
        }
        VAR4->VAR23 = 16 >> VAR9;
        VAR4->VAR18 = 8 >> (VAR9 >> 1);
        VAR4->VAR24 = FUN4(&VAR2->VAR13);
        VAR4->VAR25 = FUN4(&VAR2->VAR13);
        VAR4->VAR26 = FUN2(&VAR2->VAR13, 5);
        if (!FUN4(&VAR2->VAR13) || VAR2->VAR27 == VAR28)
        {
            VAR10 = FUN2(&VAR2->VAR13, 5);
            if (VAR10 >= FUN6(VAR29) || !VAR29[VAR10].VAR30)
            {
                FUN7(VAR6, "", VAR10);
                return VAR31;
            }
            if ((VAR10 >= 7 && VAR10 <= 9) || VAR10 == 17)
            {
                FUN7(VAR6, "");
                return VAR31;
            }
            if ((VAR10 >= 0 && VAR10 <= 2) || VAR10 == 10)
                VAR2->VAR32 = 1;
            VAR4->VAR33 = VAR29[VAR10].VAR30;
            VAR4->VAR34 = VAR29[VAR10].VAR35;
            VAR4->VAR36 = VAR29[VAR10].VAR36;
            if (VAR10 < 10)
                VAR4->VAR37 = 8;
            else
                VAR4->VAR37 = 4;
            if (VAR4->VAR18 != VAR4->VAR37)
                return VAR15;
            VAR11 = FUN2(&VAR2->VAR13, 4);
            if (VAR11 == 15)
            {
                FUN3(VAR6, VAR14, "");
                return VAR15;
            }
            if (VAR11 > 4 && VAR11 < 10)
            {
                if (VAR4->VAR18 != 4)
                    return VAR15;
            }
            else if (VAR4->VAR18 != 8)
                return VAR15;
            VAR4->VAR38 = VAR39[VAR11];
            VAR4->VAR40 = FUN2(&VAR2->VAR13, 5);
            if (VAR4->VAR40 >= FUN6(VAR41))
            {
                if (VAR4->VAR40 == 31)
                    FUN3(VAR6, VAR14, "");
                else
                    FUN7(VAR6, "", VAR4->VAR40);
                VAR4->VAR40 = -1;
                return VAR15;
            }
        }
        else
        {
            if (VAR17 != VAR4->VAR18)
            {
                FUN3(VAR6, VAR14, ""
                                            "");
                return VAR15;
            }
            if (VAR4->VAR40 < 0)
            {
                FUN3(VAR6, VAR14, "");
                return VAR15;
            }
        }
        if (!FUN4(&VAR2->VAR13))
            VAR4->VAR42.VAR43 = VAR2->VAR42.VAR43;
        else if (FUN8(&VAR2->VAR13, 1, VAR44, &VAR4->VAR42, VAR6))
            return VAR15;
        VAR4->VAR45 = FUN4(&VAR2->VAR13) ? FUN2(&VAR2->VAR13, 3) : 8;
        VAR4->VAR46 = 0;
        if (FUN4(&VAR2->VAR13))
        {
            VAR4->VAR46 = FUN2(&VAR2->VAR13, 8);
            if (VAR4->VAR46 > 61)
            {
                FUN3(VAR6, VAR14, "", VAR4->VAR46);
                return VAR15;
            }
            for (VAR12 = 0; VAR12 < VAR4->VAR46 * 2; VAR12++)
                VAR4->VAR47[VAR12] = FUN2(&VAR2->VAR13, 8);
        }
    }
    if (VAR4->VAR18 == 8)
    {
        VAR4->VAR48 = &VAR49[VAR41[VAR4->VAR40]][0];
        VAR4->VAR50 = &VAR51[VAR41[VAR4->VAR40]][0];
    }
    else
    {
        VAR4->VAR48 = &VAR52[VAR41[VAR4->VAR40]][0];
        VAR4->VAR50 = &VAR53[VAR41[VAR4->VAR40]][0];
    }
    VAR4->VAR54 = NULL;
    VAR4->VAR55 = NULL;
    FUN9(&VAR2->VAR13);
    return 0;
}