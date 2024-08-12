int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9 = 0;
    if (!VAR7->VAR10 && VAR7->VAR11)
    {
        FUN2(VAR2, VAR12, "");
        return FUN3(VAR13);
        if (!VAR2->VAR14)
            return FUN3(VAR13);
        if (VAR2->VAR14->VAR15 != VAR16)
        {
            FUN2(VAR2, VAR12, "");
            return FUN3(VAR13);
            *VAR5 = 0;
            FUN4(VAR4);
            if ((VAR2->VAR14->VAR17 & VAR18) || VAR7->VAR11)
            {
                AVPacket VAR19;
                AVPacket VAR20 = *VAR7;
                int VAR21 = FUN5(&VAR20);
                VAR19 = VAR20;
                VAR9 = FUN6(VAR2, &VAR19, &VAR20);
                if (VAR9 < 0)
                {
                    *VAR5 = 0;
                }
                else
                {
                    VAR2->VAR22->VAR23 = &VAR19;
                    if (VAR2->VAR24.VAR25 && VAR7->VAR26 != VAR27)
                        VAR4->VAR26 = FUN7(VAR7->VAR26, VAR2->VAR24, VAR28);
                    VAR9 = VAR2->VAR14->FUN8(VAR2, VAR4, VAR5, &VAR19);
                    FUN9((VAR9 >= 0) >= !!*VAR5 && !!*VAR5 >= !!VAR4->VAR29);
                    if (VAR4->VAR29 && !VAR4->VAR30 && VAR7->VAR31 && VAR2->VAR24.VAR32)
                    {
                        AVRational VAR33 = {1, 1000};
                        VAR4->VAR30 = FUN7(VAR7->VAR31, VAR2->VAR24, VAR33);
                        for (VAR8 = 0; VAR8 < VAR4->VAR29; VAR8++)
                        {
                            if (VAR4->VAR34[VAR8]->VAR35 && !FUN10(VAR4->VAR34[VAR8]->VAR35))
                            {
                                FUN2(VAR2, VAR12, ""
                                                            "");
                                FUN11(VAR4);
                                return VAR36;
                                if (VAR20.VAR10 != VAR19.VAR10)
                                {
                                    VAR19.VAR37 = NULL;
                                    VAR19.VAR38 = 0;
                                    FUN12(&VAR19);
                                    if (VAR2->VAR39->VAR40 & VAR41)
                                        VAR4->VAR42 = 0;
                                    else if (VAR2->VAR39->VAR40 & VAR43)
                                        VAR4->VAR42 = 1;
                                    VAR2->VAR22->VAR23 = NULL;
                                    FUN13(&VAR20);
                                    if (VAR9 == VAR20.VAR11)
                                        VAR9 = VAR7->VAR11;
                                    if (*VAR5)
                                        VAR2->VAR44++;
                                    return VAR9