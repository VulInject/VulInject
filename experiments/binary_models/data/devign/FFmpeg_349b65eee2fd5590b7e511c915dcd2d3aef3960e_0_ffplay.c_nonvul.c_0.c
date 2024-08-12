static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10;
    if (FUN2(&VAR2->VAR11, VAR8, 1) < 0)
        return -1;
    if (VAR8->VAR12 == VAR13.VAR12)
    {
        FUN3(VAR2->VAR14->VAR15);
        FUN4(VAR2->VAR16);
        for (VAR10 = 0; VAR10 < VAR17; VAR10++)
        {
            VAR2->VAR18[VAR10].VAR19 = 1;
        }
        while (VAR2->VAR20 && !VAR2->VAR11.VAR21)
        {
            FUN5(VAR2->VAR22, VAR2->VAR16);
        }
        VAR2->VAR23 = -1;
        VAR2->VAR24 = VAR25;
        VAR2->VAR26 = 0;
        VAR2->VAR27 = (double)FUN6() / 1000000.0;
        VAR2->VAR28 = VAR25;
        FUN7(VAR2->VAR16);
        return 0;
    }
    if (FUN8(VAR2->VAR14->VAR15, VAR4, &VAR9, VAR8) < 0)
        return -1;
    if (VAR9)
    {
        int VAR29 = 1;
        if (VAR30 == -1)
        {
            *VAR6 = FUN9(VAR4);
        }
        else if (VAR30)
        {
            *VAR6 = VAR4->VAR31;
        }
        else
        {
            *VAR6 = VAR4->VAR32;
        }
        if (*VAR6 == VAR25)
        {
            *VAR6 = 0;
        }
        if (((VAR2->VAR33 == VAR34 && VAR2->VAR35) || VAR2->VAR33 == VAR36) && (VAR37 > 0 || (VAR37 && VAR2->VAR35)))
        {
            FUN4(VAR2->VAR16);
            if (VAR2->VAR24 != VAR25 && *VAR6)
            {
                double VAR38 = FUN10(VAR2) - FUN11(VAR2);
                double VAR39 = FUN12(VAR2->VAR14->VAR40) * *VAR6;
                double VAR41 = VAR39 - VAR2->VAR24;
                if (FUN13(VAR38) < VAR42 && VAR41 > 0 && VAR41 < VAR42 && VAR38 + VAR41 - VAR2->VAR43 < 0)
                {
                    VAR2->VAR44 = VAR8->VAR45;
                    VAR2->VAR28 = VAR39;
                    VAR2->VAR46++;
                    VAR29 = 0;
                }
            }
            FUN7(VAR2->VAR16);
        }
        return VAR29;
    }
    return 0;
}