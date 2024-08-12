int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const VAR10 *VAR11 = FUN2(VAR2->VAR12);
    int VAR13 = VAR11->VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17 = FUN3(VAR2->VAR12) ? 1 : 3;
    int VAR18 = VAR11->VAR19[0].VAR20 >= 8;
    unsigned VAR21 = 1 << VAR11->VAR19[0].VAR20;
    unsigned VAR22 = VAR11->VAR19[0].VAR20 + 1;
    unsigned VAR23 = (1 << VAR22) - 1;
    int VAR24[3];
    for (VAR14 = 0; VAR14 < VAR17; VAR14++)
        VAR24[VAR14] = VAR14 && !(VAR11->VAR25 & VAR26) ? 1 << VAR11->VAR19[0].VAR20 : 0;
    FUN4(VAR17 == VAR13 - 1);
    if (VAR11->VAR25 & VAR27)
    {
        for (VAR14 = 0; VAR14 < VAR17; VAR14++)
        {
            int VAR28 = VAR14 ? VAR2->VAR29 : VAR2->VAR30;
            int VAR31 = VAR14 ? VAR11->VAR32 : 0;
            for (VAR16 = VAR6 >> VAR31; VAR16 < FUN5(VAR7, VAR31); VAR16++)
            {
                if (VAR18)
                {
                    const VAR33 *VAR34 = VAR4[VAR14] + VAR5[VAR14] * VAR16;
                    const VAR33 *VAR35 = VAR4[VAR17] + VAR5[VAR17] * VAR16;
                    VAR33 *VAR36 = VAR8[VAR14] + VAR9[VAR14] * VAR16;
                    unsigned VAR37 = VAR24[VAR14];
                    if ((!FUN6(VAR2->VAR12)) == !VAR38)
                    {
                        for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                        {
                            unsigned VAR39 = VAR34[VAR15] * VAR35[VAR15] + VAR37 * (VAR23 - VAR35[VAR15]) + VAR21;
                            VAR36[VAR15] = FUN7((VAR39 + (VAR39 >> VAR22)) >> VAR22, 0, VAR23);
                        }
                    }
                    else
                    {
                        for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                        {
                            unsigned VAR40 = FUN8(VAR35[VAR15]);
                            unsigned VAR39 = FUN8(VAR34[VAR15]) * VAR40 + VAR37 * (VAR23 - VAR40) + VAR21;
                            VAR36[VAR15] = FUN7((VAR39 + (VAR39 >> VAR22)) >> VAR22, 0, VAR23);
                        }
                    }
                }
                else
                {
                    const VAR3 *VAR34 = VAR4[VAR14] + VAR5[VAR14] * VAR16;
                    const VAR3 *VAR35 = VAR4[VAR17] + VAR5[VAR17] * VAR16;
                    VAR3 *VAR36 = VAR8[VAR14] + VAR9[VAR14] * VAR16;
                    unsigned VAR37 = VAR24[VAR14];
                    for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                    {
                        unsigned VAR39 = VAR34[VAR15] * VAR35[VAR15] + VAR37 * (255 - VAR35[VAR15]) + 128;
                        VAR36[VAR15] = (257 * VAR39) >> 16;
                    }
                }
            }
        }
    }
    else
    {
        int VAR41 = VAR11->VAR19[VAR17].VAR42 - 1;
        int VAR28 = VAR2->VAR30;
        for (VAR16 = VAR6; VAR16 < VAR7; VAR16++)
        {
            if (VAR18)
            {
                const VAR33 *VAR34 = VAR4[0] + VAR5[0] * VAR16 + 2 * !VAR41;
                const VAR33 *VAR35 = VAR4[0] + VAR5[0] * VAR16 + VAR41;
                VAR33 *VAR36 = VAR8[0] + VAR9[0] * VAR16;
                if ((!FUN6(VAR2->VAR12)) == !VAR38)
                {
                    for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                    {
                        for (VAR14 = 0; VAR14 < VAR17; VAR14++)
                        {
                            int VAR43 = (VAR17 + 1) * VAR15;
                            unsigned VAR39 = VAR34[VAR43 + VAR14] * VAR35[VAR43] + VAR24[VAR14] * (VAR23 - VAR35[VAR43]) + VAR21;
                            VAR36[VAR17 * VAR15 + VAR14] = FUN7((VAR39 + (VAR39 >> VAR22)) >> VAR22, 0, VAR23);
                        }
                    }
                }
                else
                {
                    for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                    {
                        for (VAR14 = 0; VAR14 < VAR17; VAR14++)
                        {
                            int VAR43 = (VAR17 + 1) * VAR15;
                            unsigned VAR40 = FUN8(VAR35[VAR43]);
                            unsigned VAR39 = FUN8(VAR34[VAR43 + VAR14]) * VAR40 + VAR24[VAR14] * (VAR23 - VAR40) + VAR21;
                            VAR36[VAR17 * VAR15 + VAR14] = FUN7((VAR39 + (VAR39 >> VAR22)) >> VAR22, 0, VAR23);
                        }
                    }
                }
            }
            else
            {
                const VAR3 *VAR34 = VAR4[0] + VAR5[0] * VAR16 + !VAR41;
                const VAR3 *VAR35 = VAR4[0] + VAR5[0] * VAR16 + VAR41;
                VAR3 *VAR36 = VAR8[0] + VAR9[0] * VAR16;
                for (VAR15 = 0; VAR15 < VAR28; VAR15++)
                {
                    for (VAR14 = 0; VAR14 < VAR17; VAR14++)
                    {
                        int VAR43 = (VAR17 + 1) * VAR15;
                        unsigned VAR39 = VAR34[VAR43 + VAR14] * VAR35[VAR43] + VAR24[VAR14] * (255 - VAR35[VAR43]) + 128;
                        VAR36[VAR17 * VAR15 + VAR14] = (257 * VAR39) >> 16;
                    }
                }
            }
        }
    }
    return 0;
}