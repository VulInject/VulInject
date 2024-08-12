static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    Jpeg2000T1Context VAR12;
    for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
    {
        VAR14 *VAR15 = VAR4->VAR15 + VAR5;
        VAR16 *VAR17 = VAR4->VAR17 + VAR5;
        for (VAR6 = 0; VAR6 < VAR17->VAR18; VAR6++)
        {
            VAR19 *VAR20 = VAR15->VAR21 + VAR6;
            for (VAR7 = 0; VAR7 < VAR20->VAR22; VAR7++)
            {
                int VAR23, VAR24;
                VAR25 *VAR26 = VAR20->VAR26 + VAR7;
                int VAR27 = 0, VAR28;
                VAR28 = VAR7 + (VAR6 > 0);
                if (VAR26->VAR29[0][0] == VAR26->VAR29[0][1] || VAR26->VAR29[1][0] == VAR26->VAR29[1][1])
                    continue;
                VAR23 = VAR20->VAR30 * VAR20->VAR31;
                for (VAR24 = 0; VAR24 < VAR23; VAR24++)
                {
                    VAR32 *VAR33 = VAR26->VAR33 + VAR24;
                    for (VAR27 = 0; VAR27 < VAR33->VAR34 * VAR33->VAR35; VAR27++)
                    {
                        int VAR8, VAR9;
                        VAR36 *VAR37 = VAR33->VAR37 + VAR27;
                        FUN2(VAR2, VAR17, &VAR12, VAR37, VAR37->VAR29[0][1] - VAR37->VAR29[0][0], VAR37->VAR29[1][1] - VAR37->VAR29[1][0], VAR28);
                        VAR8 = VAR37->VAR29[0][0];
                        VAR9 = VAR37->VAR29[1][0];
                        if (VAR17->VAR38 == VAR39)
                            FUN3(VAR8, VAR9, VAR37, VAR15, &VAR12, VAR26);
                        else
                            FUN4(VAR8, VAR9, VAR37, VAR15, &VAR12, VAR26);
                    }
                }
            }
        }
        FUN5(&VAR15->VAR40, VAR15->VAR41);
    }
    if (VAR4->VAR17[0].VAR42)
        FUN6(VAR2, VAR4);
    if (VAR2->VAR43 <= 8)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
        {
            VAR14 *VAR15 = VAR4->VAR15 + VAR5;
            float *VAR44 = (float *)VAR15->VAR41;
            VAR45 *VAR46 = (VAR45 *)VAR15->VAR41;
            VAR9 = VAR4->VAR15[VAR5].VAR29[1][0] - VAR2->VAR47;
            VAR11 = VAR2->VAR48->VAR41[0] + VAR9 * VAR2->VAR48->VAR49[0];
            for (; VAR9 < VAR4->VAR15[VAR5].VAR29[1][1] - VAR2->VAR47; VAR9 += VAR2->VAR50[VAR5])
            {
                VAR10 *VAR51;
                VAR8 = VAR4->VAR15[VAR5].VAR29[0][0] - VAR2->VAR52;
                VAR51 = VAR11 + VAR8 * VAR2->VAR13 + VAR5;
                for (; VAR8 < VAR4->VAR15[VAR5].VAR29[0][1] - VAR2->VAR52; VAR8 += VAR2->VAR53[VAR5])
                {
                    int VAR54;
                    if (VAR4->VAR17->VAR38 == VAR39)
                        VAR54 = FUN7(*VAR44) + (1 << (VAR2->VAR55[VAR5] - 1));
                    else
                        VAR54 = *VAR46 + (1 << (VAR2->VAR55[VAR5] - 1));
                    VAR54 = FUN8(VAR54, 0, (1 << VAR2->VAR55[VAR5]) - 1);
                    *VAR51 = VAR54 << (8 - VAR2->VAR55[VAR5]);
                    VAR44++;
                    VAR46++;
                    VAR51 += VAR2->VAR13;
                }
                VAR11 += VAR2->VAR48->VAR49[0];
            }
        }
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
        {
            VAR14 *VAR15 = VAR4->VAR15 + VAR5;
            float *VAR44 = (float *)VAR15->VAR41;
            VAR45 *VAR46 = (VAR45 *)VAR15->VAR41;
            VAR56 *VAR57;
            VAR9 = VAR4->VAR15[VAR5].VAR29[1][0] - VAR2->VAR47;
            VAR57 = (VAR56 *)VAR2->VAR48->VAR41[0] + VAR9 * (VAR2->VAR48->VAR49[0] >> 1);
            for (; VAR9 < VAR4->VAR15[VAR5].VAR29[1][1] - VAR2->VAR47; VAR9 += VAR2->VAR50[VAR5])
            {
                VAR56 *VAR51;
                VAR8 = VAR4->VAR15[VAR5].VAR29[0][0] - VAR2->VAR52;
                VAR51 = VAR57 + (VAR8 * VAR2->VAR13 + VAR5);
                for (; VAR8 < VAR4->VAR15[VAR5].VAR29[0][1] - VAR2->VAR52; VAR8 += VAR2->VAR53[VAR5])
                {
                    int VAR54;
                    if (VAR4->VAR17->VAR38 == VAR39)
                        VAR54 = FUN7(*VAR44) + (1 << (VAR2->VAR55[VAR5] - 1));
                    else
                        VAR54 = *VAR46 + (1 << (VAR2->VAR55[VAR5] - 1));
                    VAR54 = FUN8(VAR54, 0, (1 << VAR2->VAR55[VAR5]) - 1);
                    *VAR51 = VAR54 << (16 - VAR2->VAR55[VAR5]);
                    VAR44++;
                    VAR46++;
                    VAR51 += VAR2->VAR13;
                }
                VAR57 += VAR2->VAR48->VAR49[0] >> 1;
            }
        }
    }
    return 0;
}