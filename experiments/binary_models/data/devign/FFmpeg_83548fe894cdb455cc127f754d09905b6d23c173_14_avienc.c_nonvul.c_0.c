static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = 0;
    int VAR9, VAR10, VAR11, VAR12;
    int64_t VAR13;
    if (VAR7->VAR14 & VAR15)
    {
        if (VAR4->VAR16 == 1)
        {
            FUN2(VAR7, VAR4->VAR17);
            VAR8 = FUN3(VAR2);
            FUN2(VAR7, VAR4->VAR18);
        }
        else
        {
            FUN4(VAR2);
            FUN2(VAR7, VAR4->VAR17);
            FUN2(VAR7, VAR4->VAR18);
            VAR13 = FUN5(VAR7);
            FUN6(VAR7, VAR4->VAR19 - 8, VAR20);
            FUN7(VAR7, "");
            FUN8(VAR7, 16);
            for (VAR11 = VAR12 = 0; VAR11 < VAR2->VAR21; VAR11++)
            {
                VAR22 *VAR23 = VAR2->VAR24[VAR11]->VAR25;
                VAR26 *VAR27 = VAR2->VAR24[VAR11]->VAR5;
                if (VAR23->VAR28 == VAR29)
                {
                    if (VAR12 < VAR27->VAR30)
                        VAR12 = VAR27->VAR30;
                }
                else
                {
                    if (VAR23->VAR31 == VAR32 || VAR23->VAR31 == VAR33)
                        VAR12 += VAR27->VAR30;
                }
            }
            FUN9(VAR7, VAR12);
            FUN6(VAR7, VAR13, VAR20);
            FUN10(VAR2, VAR4->VAR16);
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR21; VAR9++)
    {
        VAR26 *VAR27 = VAR2->VAR24[VAR9]->VAR5;
        for (VAR10 = 0; VAR10 < VAR27->VAR34.VAR35 / VAR36; VAR10++)
            FUN11(VAR27->VAR34.VAR37[VAR10]);
        FUN12(&VAR27->VAR34.VAR37);
        VAR27->VAR34.VAR35 = VAR27->VAR34.VAR38 = 0;
    }
    return VAR8;
}