static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    VAR12 *VAR13;
    Jpeg2000T1Context VAR14;
    for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
    {
        VAR16 *VAR17 = VAR4->VAR17 + VAR7;
        VAR18 *VAR19 = VAR4->VAR19 + VAR7;
        for (VAR8 = 0; VAR8 < VAR19->VAR20; VAR8++)
        {
            VAR21 *VAR22 = VAR17->VAR23 + VAR8;
            for (VAR9 = 0; VAR9 < VAR22->VAR24; VAR9++)
            {
                uint16_t VAR25, VAR26;
                VAR27 *VAR28 = VAR22->VAR28 + VAR9;
                int VAR29 = 0, VAR30;
                VAR30 = VAR9 + (VAR8 > 0);
                if (VAR28->VAR31[0][0] == VAR28->VAR31[0][1] || VAR28->VAR31[1][0] == VAR28->VAR31[1][1])
                    continue;
                VAR25 = VAR22->VAR32 * VAR22->VAR33;
                for (VAR26 = 0; VAR26 < VAR25; VAR26++)
                {
                    VAR34 *VAR35 = VAR28->VAR35 + VAR26;
                    for (VAR29 = 0; VAR29 < VAR35->VAR36 * VAR35->VAR37; VAR29++)
                    {
                        int VAR10, VAR11;
                        VAR38 *VAR39 = VAR35->VAR39 + VAR29;
                        FUN2(VAR2, VAR19, &VAR14, VAR39, VAR39->VAR31[0][1] - VAR39->VAR31[0][0], VAR39->VAR31[1][1] - VAR39->VAR31[1][0], VAR30);
                        VAR10 = VAR39->VAR31[0][0];
                        VAR11 = VAR39->VAR31[1][0];
                        if (VAR19->VAR40 == VAR41)
                            FUN3(VAR10, VAR11, VAR39, VAR17, &VAR14, VAR28);
                        else
                            FUN4(VAR10, VAR11, VAR39, VAR17, &VAR14, VAR28);
                    }
                }
            }
        }
        FUN5(&VAR17->VAR42, VAR19->VAR40 == VAR41 ? (void *)VAR17->VAR43 : (void *)VAR17->VAR44);
    }
    if (VAR4->VAR19[0].VAR45)
        FUN6(VAR2, VAR4);
    if (VAR2->VAR46 <= 8)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
        {
            VAR16 *VAR17 = VAR4->VAR17 + VAR7;
            float *VAR47 = VAR17->VAR43;
            VAR48 *VAR49 = VAR17->VAR44;
            int VAR50 = VAR2->VAR50[VAR7];
            int VAR51 = VAR4->VAR17[VAR7].VAR31[0][1] - VAR2->VAR52;
            VAR11 = VAR4->VAR17[VAR7].VAR31[1][0] - VAR2->VAR53;
            VAR13 = VAR6->VAR54[0] + VAR11 * VAR6->VAR55[0];
            for (; VAR11 < VAR4->VAR17[VAR7].VAR31[1][1] - VAR2->VAR53; VAR11 += VAR2->VAR56[VAR7])
            {
                VAR12 *VAR57;
                VAR10 = VAR4->VAR17[VAR7].VAR31[0][0] - VAR2->VAR52;
                VAR57 = VAR13 + VAR10 * VAR2->VAR15 + VAR7;
                if (VAR4->VAR19->VAR40 == VAR41)
                {
                    for (; VAR10 < VAR51; VAR10 += VAR2->VAR58[VAR7])
                    {
                        int VAR59 = FUN7(*VAR47) + (1 << (VAR50 - 1));
                        VAR59 = FUN8(VAR59, 0, (1 << VAR50) - 1);
                        *VAR57 = VAR59 << (8 - VAR50);
                        VAR47++;
                        VAR57 += VAR2->VAR15;
                    }
                }
                else
                {
                    for (; VAR10 < VAR51; VAR10 += VAR2->VAR58[VAR7])
                    {
                        int VAR59 = *VAR49 + (1 << (VAR50 - 1));
                        VAR59 = FUN8(VAR59, 0, (1 << VAR50) - 1);
                        *VAR57 = VAR59 << (8 - VAR50);
                        VAR49++;
                        VAR57 += VAR2->VAR15;
                    }
                }
                VAR13 += VAR6->VAR55[0];
            }
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
        {
            VAR16 *VAR17 = VAR4->VAR17 + VAR7;
            float *VAR47 = VAR17->VAR43;
            VAR48 *VAR49 = VAR17->VAR44;
            VAR60 *VAR61;
            int VAR50 = VAR2->VAR50[VAR7];
            int VAR51 = VAR4->VAR17[VAR7].VAR31[0][1] - VAR2->VAR52;
            VAR11 = VAR4->VAR17[VAR7].VAR31[1][0] - VAR2->VAR53;
            VAR61 = (VAR60 *)VAR6->VAR54[0] + VAR11 * (VAR6->VAR55[0] >> 1);
            for (; VAR11 < VAR4->VAR17[VAR7].VAR31[1][1] - VAR2->VAR53; VAR11 += VAR2->VAR56[VAR7])
            {
                VAR60 *VAR57;
                VAR10 = VAR4->VAR17[VAR7].VAR31[0][0] - VAR2->VAR52;
                VAR57 = VAR61 + (VAR10 * VAR2->VAR15 + VAR7);
                if (VAR4->VAR19->VAR40 == VAR41)
                {
                    for (; VAR10 < VAR51; VAR10 += VAR2->VAR58[VAR7])
                    {
                        int VAR59 = FUN7(*VAR47) + (1 << (VAR50 - 1));
                        VAR59 = FUN8(VAR59, 0, (1 << VAR50) - 1);
                        *VAR57 = VAR59 << (16 - VAR50);
                        VAR47++;
                        VAR57 += VAR2->VAR15;
                    }
                }
                else
                {
                    for (; VAR10 < VAR51; VAR10 += VAR2->VAR58[VAR7])
                    {
                        int VAR59 = *VAR49 + (1 << (VAR50 - 1));
                        VAR59 = FUN8(VAR59, 0, (1 << VAR50) - 1);
                        *VAR57 = VAR59 << (16 - VAR50);
                        VAR49++;
                        VAR57 += VAR2->VAR15;
                    }
                }
                VAR61 += VAR6->VAR55[0] >> 1;
            }
        }
    }
    return 0;
}