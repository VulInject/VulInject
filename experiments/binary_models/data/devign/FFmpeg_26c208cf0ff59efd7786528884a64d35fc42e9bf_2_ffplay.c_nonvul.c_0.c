static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9)
{
    int VAR10;
    if (FUN2(&VAR2->VAR11, VAR8, 1, VAR9) < 0)
        return -1;
    if (VAR8->VAR12 == VAR13.VAR12)
    {
        FUN3(VAR2->VAR14->VAR15);
        FUN4(VAR2->VAR16);
        while (VAR2->VAR17 && !VAR2->VAR11.VAR18)
        {
            FUN5(VAR2->VAR19, VAR2->VAR16);
        }
        VAR2->VAR20 = -1;
        VAR2->VAR21 = VAR22;
        VAR2->VAR23 = 0;
        VAR2->VAR24 = (double)FUN6() / 1000000.0;
        VAR2->VAR25 = VAR22;
        FUN7(VAR2->VAR16);
        return 0;
    }
    if (FUN8(VAR2->VAR14->VAR15, VAR4, &VAR10, VAR8) < 0)
        return 0;
    if (VAR10)
    {
        int VAR26 = 1;
        if (VAR27 == -1)
        {
            *VAR6 = FUN9(VAR4);
        }
        else if (VAR27)
        {
            *VAR6 = VAR4->VAR28;
        }
        else
        {
            *VAR6 = VAR4->VAR29;
        }
        if (*VAR6 == VAR22)
        {
            *VAR6 = 0;
        }
        if (VAR30 > 0 || (VAR30 && FUN10(VAR2) != VAR31))
        {
            FUN4(VAR2->VAR16);
            if (VAR2->VAR21 != VAR22 && *VAR6)
            {
                double VAR32 = FUN11(VAR2) - FUN12(VAR2);
                double VAR33 = FUN13(VAR2->VAR14->VAR34) * *VAR6;
                double VAR35 = VAR33 - VAR2->VAR21;
                if (!FUN14(VAR32) && FUN15(VAR32) < VAR36 && VAR35 > 0 && VAR35 < VAR36 && VAR32 + VAR35 - VAR2->VAR37 < 0)
                {
                    VAR2->VAR38 = VAR8->VAR39;
                    VAR2->VAR25 = VAR33;
                    VAR2->VAR40++;
                    VAR26 = 0;
                }
            }
            FUN7(VAR2->VAR16);
        }
        return VAR26;
    }
    return 0;
}