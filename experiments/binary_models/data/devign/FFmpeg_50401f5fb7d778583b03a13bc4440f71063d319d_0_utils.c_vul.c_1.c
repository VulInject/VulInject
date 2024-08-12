int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9 = 0;
    if (!VAR7->VAR10 && VAR7->VAR11)
    {
        FUN2(VAR2, VAR12, "");
        return FUN3(VAR13);
    }
    if (!VAR2->VAR14)
        return FUN3(VAR13);
    if (VAR2->VAR14->VAR15 != VAR16)
    {
        FUN2(VAR2, VAR12, "");
        return FUN3(VAR13);
    }
    *VAR5 = 0;
    FUN4(VAR4);
    if ((VAR2->VAR14->VAR17 & VAR18) || VAR7->VAR11)
    {
        AVPacket VAR19;
        AVPacket VAR20 = *VAR7;
        int VAR21 = FUN5(&VAR20);
        if (VAR21)
        {
            memset(VAR20.VAR10 + VAR20.VAR11, 0, FUN6(VAR7->VAR11 - VAR20.VAR11, VAR22));
        }
        VAR19 = VAR20;
        VAR9 = FUN7(VAR2, &VAR19, &VAR20);
        if (VAR9 < 0)
        {
            *VAR5 = 0;
        }
        else
        {
            VAR2->VAR23->VAR24 = &VAR19;
            if (VAR2->VAR25.VAR26 && VAR7->VAR27 != VAR28)
                VAR4->VAR27 = FUN8(VAR7->VAR27, VAR2->VAR25, VAR29);
            VAR9 = VAR2->VAR14->FUN9(VAR2, VAR4, VAR5, &VAR19);
            FUN10((VAR9 >= 0) >= !!*VAR5 && !!*VAR5 >= !!VAR4->VAR30);
            if (VAR4->VAR30 && !VAR4->VAR31 && VAR7->VAR32 && VAR2->VAR25.VAR33)
            {
                AVRational VAR34 = {1, 1000};
                VAR4->VAR31 = FUN8(VAR7->VAR32, VAR2->VAR25, VAR34);
            }
            for (VAR8 = 0; VAR8 < VAR4->VAR30; VAR8++)
            {
                if (VAR4->VAR35[VAR8]->VAR36 && !FUN11(VAR4->VAR35[VAR8]->VAR36))
                {
                    FUN2(VAR2, VAR12, ""
                                                "");
                    FUN12(VAR4);
                    return VAR37;
                }
            }
            if (VAR20.VAR10 != VAR19.VAR10)
            {
                VAR19.VAR38 = NULL;
                VAR19.VAR39 = 0;
                FUN13(&VAR19);
            }
            if (VAR2->VAR40->VAR41 & VAR42)
                VAR4->VAR43 = 0;
            else if (VAR2->VAR40->VAR41 & VAR44)
                VAR4->VAR43 = 1;
            VAR2->VAR23->VAR24 = NULL;
        }
        if (VAR21)
        {
            FUN14(&VAR20);
            if (VAR9 == VAR20.VAR11)
                VAR9 = VAR7->VAR11;
        }
        if (*VAR5)
            VAR2->VAR45++;
    }
    return VAR9;
}