int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9 = 0;
    if (VAR2->VAR10->VAR11 != VAR12)
    {
        FUN2(VAR2, VAR13, "");
        return FUN3(VAR14);
    }
    *VAR5 = 0;
    FUN4(VAR4);
    if (VAR7->VAR15)
    {
        AVPacket VAR16;
        AVPacket VAR17 = *VAR7;
        int VAR18 = FUN5(&VAR17);
        VAR16 = VAR17;
        VAR9 = FUN6(VAR2, &VAR16, &VAR17);
        if (VAR9 < 0)
        {
            *VAR5 = 0;
        }
        else
        {
            VAR2->VAR19 = &VAR16;
            if (VAR2->VAR20.VAR21 && VAR7->VAR22 != VAR23)
                VAR4->VAR22 = FUN7(VAR7->VAR22, VAR2->VAR20, VAR24);
            VAR9 = VAR2->VAR10->FUN8(VAR2, VAR4, VAR5, &VAR16);
            FUN9((VAR9 >= 0) >= !!*VAR5 && !!*VAR5 >= !!VAR4->VAR25);
            if (VAR4->VAR25 && !VAR4->VAR26 && VAR7->VAR27 && VAR2->VAR20.VAR28)
            {
                AVRational VAR29 = {1, 1000};
                VAR4->VAR26 = FUN7(VAR7->VAR27, VAR2->VAR20, VAR29);
            }
            for (VAR8 = 0; VAR8 < VAR4->VAR25; VAR8++)
            {
                if (VAR4->VAR30[VAR8]->VAR31 && !FUN10(VAR4->VAR30[VAR8]->VAR31))
                {
                    FUN2(VAR2, VAR13, ""
                                                "");
                    FUN11(VAR4);
                    return VAR32;
                }
            }
            if (VAR17.VAR33 != VAR16.VAR33)
            {
                VAR16.VAR34 = NULL;
                VAR16.VAR35 = 0;
                FUN12(&VAR16);
            }
            if (VAR2->VAR36->VAR37 & VAR38)
                VAR4->VAR39 = 0;
            else if (VAR2->VAR36->VAR37 & VAR40)
                VAR4->VAR39 = 1;
            VAR2->VAR19 = NULL;
        }
        if (VAR18)
        {
            FUN13(&VAR17);
            if (VAR9 == VAR17.VAR15)
                VAR9 = VAR7->VAR15;
        }
        if (*VAR5)
            VAR2->VAR41++;
    }
    return VAR9;
}