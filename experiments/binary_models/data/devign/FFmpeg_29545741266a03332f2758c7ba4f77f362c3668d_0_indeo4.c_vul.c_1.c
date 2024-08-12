static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    int VAR13;
    VAR7 = FUN2(&VAR2->VAR14, 2);
    VAR8 = FUN2(&VAR2->VAR14, 4);
    if (VAR4->VAR7 != VAR7 || VAR4->VAR8 != VAR8)
    {
        FUN3(VAR6, VAR15, "");
        return VAR16;
    }
    VAR4->VAR17 = FUN4(&VAR2->VAR14);
    if (!VAR4->VAR17)
    {
        if (FUN4(&VAR2->VAR14))
            FUN5(&VAR2->VAR14, 16);
        VAR4->VAR18 = FUN2(&VAR2->VAR14, 2);
        if (VAR4->VAR18 >= 2)
        {
            FUN3(VAR6, VAR15, "", VAR4->VAR18);
            return VAR16;
        }
        if (!VAR4->VAR18)
            VAR2->VAR19 = 1;
        VAR4->VAR20 = FUN4(&VAR2->VAR14);
        if (VAR4->VAR20)
            VAR4->VAR21 = FUN2(&VAR2->VAR14, 16);
        VAR9 = FUN2(&VAR2->VAR14, 2);
        if (VAR9 == 3)
        {
            FUN3(VAR6, VAR15, "");
            return VAR16;
        }
        VAR4->VAR22 = 16 >> VAR9;
        VAR4->VAR23 = 8 >> (VAR9 >> 1);
        VAR4->VAR24 = FUN4(&VAR2->VAR14);
        VAR4->VAR25 = FUN4(&VAR2->VAR14);
        VAR4->VAR26 = FUN2(&VAR2->VAR14, 5);
        if (!FUN4(&VAR2->VAR14) || VAR2->VAR27 == VAR28)
        {
            VAR10 = FUN2(&VAR2->VAR14, 5);
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
            if (VAR10 < 10 && VAR4->VAR23 < 8)
            {
                FUN3(VAR6, VAR15, "");
                return VAR16;
            }
            if ((VAR10 >= 0 && VAR10 <= 2) || VAR10 == 10)
                VAR2->VAR32 = 1;
            VAR4->VAR33 = VAR29[VAR10].VAR30;
            VAR4->VAR34 = VAR29[VAR10].VAR35;
            VAR4->VAR36 = VAR29[VAR10].VAR36;
            VAR4->VAR37 = (VAR10 < 10) ? 8 : 4;
            VAR11 = FUN2(&VAR2->VAR14, 4);
            if ((VAR11 > 4 && VAR11 < 10) != (VAR4->VAR23 == 4))
            {
                FUN3(VAR6, VAR15, "");
                return VAR16;
            }
            if (VAR11 == 15)
            {
                FUN3(VAR6, VAR15, "");
                return VAR16;
            }
            VAR4->VAR38 = VAR39[VAR11];
            VAR13 = FUN2(&VAR2->VAR14, 5);
            if (VAR13 == 31)
            {
                FUN3(VAR6, VAR15, "");
                return VAR16;
            }
            if (VAR13 > 21)
            {
                FUN3(VAR6, VAR15, "");
                return VAR16;
            }
            VAR4->VAR13 = VAR13;
        }
        if (FUN8(&VAR2->VAR14, FUN4(&VAR2->VAR14), VAR40, &VAR4->VAR41, VAR6))
            return VAR16;
        VAR4->VAR42 = FUN4(&VAR2->VAR14) ? FUN2(&VAR2->VAR14, 3) : 8;
        VAR4->VAR43 = 0;
        if (FUN4(&VAR2->VAR14))
        {
            VAR4->VAR43 = FUN2(&VAR2->VAR14, 8);
            if (VAR4->VAR43 > 61)
            {
                FUN3(VAR6, VAR15, "", VAR4->VAR43);
                return VAR16;
            }
            for (VAR12 = 0; VAR12 < VAR4->VAR43 * 2; VAR12++)
                VAR4->VAR44[VAR12] = FUN2(&VAR2->VAR14, 8);
        }
    }
    if (VAR4->VAR23 == 8)
    {
        VAR4->VAR45 = &VAR46[VAR47[VAR4->VAR13]][0];
        VAR4->VAR48 = &VAR49[VAR47[VAR4->VAR13]][0];
    }
    else
    {
        VAR4->VAR45 = &VAR50[VAR47[VAR4->VAR13]][0];
        VAR4->VAR48 = &VAR51[VAR47[VAR4->VAR13]][0];
    }
    VAR4->VAR52 = NULL;
    VAR4->VAR53 = NULL;
    FUN9(&VAR2->VAR14);
    if (!VAR4->VAR38)
    {
        FUN3(VAR6, VAR15, "");
        return VAR16;
    }
    return 0;
}