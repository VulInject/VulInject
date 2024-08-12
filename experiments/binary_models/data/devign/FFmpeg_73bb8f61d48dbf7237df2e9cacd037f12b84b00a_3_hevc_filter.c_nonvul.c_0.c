static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12[2], VAR13[2], VAR14;
    uint8_t VAR15[2] = {0};
    uint8_t VAR16[2] = {0};
    int VAR17 = VAR2->VAR18->VAR17;
    int VAR19 = 1 << VAR17;
    int VAR20 = (VAR3 >> VAR17) + (VAR4 >> VAR17) * VAR2->VAR18->VAR21;
    int VAR22 = VAR2->VAR23[VAR20].VAR24;
    int VAR25 = VAR2->VAR23[VAR20].VAR26;
    int VAR24, VAR27, VAR26, VAR28;
    int VAR29 = (VAR2->VAR18->VAR30 && VAR2->VAR18->VAR31.VAR32) || VAR2->VAR33->VAR34;
    if (VAR3)
    {
        VAR27 = VAR2->VAR23[VAR20 - 1].VAR24;
        VAR28 = VAR2->VAR23[VAR20 - 1].VAR26;
    }
    VAR9 = VAR3 + VAR19;
    if (VAR9 > VAR2->VAR18->VAR35)
        VAR9 = VAR2->VAR18->VAR35;
    VAR10 = VAR4 + VAR19;
    if (VAR10 > VAR2->VAR18->VAR36)
        VAR10 = VAR2->VAR18->VAR36;
    VAR24 = VAR22;
    VAR26 = VAR25;
    for (VAR8 = VAR4; VAR8 < VAR10; VAR8 += 8)
    {
        for (VAR7 = VAR3 ? VAR3 : 8; VAR7 < VAR9; VAR7 += 8)
        {
            const int VAR37 = VAR2->VAR38[(VAR7 >> 3) + (VAR8 >> 2) * VAR2->VAR39];
            const int VAR40 = VAR2->VAR38[(VAR7 >> 3) + ((VAR8 + 4) >> 2) * VAR2->VAR39];
            if (VAR37 || VAR40)
            {
                const int VAR41 = (FUN2(VAR2, VAR7 - 1, VAR8) + FUN2(VAR2, VAR7, VAR8) + 1) >> 1;
                VAR14 = VAR42[FUN3(VAR41 + VAR26, 0, VAR43)];
                VAR13[0] = VAR37 ? FUN4(VAR41, VAR37) : 0;
                VAR13[1] = VAR40 ? FUN4(VAR41, VAR40) : 0;
                VAR6 = &VAR2->VAR44->VAR45[VAR46][VAR8 * VAR2->VAR44->VAR47[VAR46] + (VAR7 << VAR2->VAR18->VAR48)];
                if (VAR29)
                {
                    VAR15[0] = FUN5(VAR2, VAR7 - 1, VAR8);
                    VAR15[1] = FUN5(VAR2, VAR7 - 1, VAR8 + 4);
                    VAR16[0] = FUN5(VAR2, VAR7, VAR8);
                    VAR16[1] = FUN5(VAR2, VAR7, VAR8 + 4);
                    VAR2->VAR49.FUN6(VAR6, VAR2->VAR44->VAR47[VAR46], VAR14, VAR13, VAR15, VAR16);
                }
                else
                    VAR2->VAR49.FUN7(VAR6, VAR2->VAR44->VAR47[VAR46], VAR14, VAR13, VAR15, VAR16);
            }
        }
    }
    for (VAR11 = 1; VAR11 <= 2; VAR11++)
    {
        for (VAR8 = VAR4; VAR8 < VAR10; VAR8 += 16)
        {
            for (VAR7 = VAR3 ? VAR3 : 16; VAR7 < VAR9; VAR7 += 16)
            {
                const int VAR37 = VAR2->VAR38[(VAR7 >> 3) + (VAR8 >> 2) * VAR2->VAR39];
                const int VAR40 = VAR2->VAR38[(VAR7 >> 3) + ((VAR8 + 8) >> 2) * VAR2->VAR39];
                if ((VAR37 == 2) || (VAR40 == 2))
                {
                    const int VAR50 = (FUN2(VAR2, VAR7 - 1, VAR8) + FUN2(VAR2, VAR7, VAR8) + 1) >> 1;
                    const int VAR51 = (FUN2(VAR2, VAR7 - 1, VAR8 + 8) + FUN2(VAR2, VAR7, VAR8 + 8) + 1) >> 1;
                    VAR12[0] = (VAR37 == 2) ? FUN8(VAR2, VAR50, VAR11, VAR24) : 0;
                    VAR12[1] = (VAR40 == 2) ? FUN8(VAR2, VAR51, VAR11, VAR24) : 0;
                    VAR6 = &VAR2->VAR44->VAR45[VAR11][VAR8 / 2 * VAR2->VAR44->VAR47[VAR11] + ((VAR7 / 2) << VAR2->VAR18->VAR48)];
                    if (VAR29)
                    {
                        VAR15[0] = FUN5(VAR2, VAR7 - 1, VAR8);
                        VAR15[1] = FUN5(VAR2, VAR7 - 1, VAR8 + 8);
                        VAR16[0] = FUN5(VAR2, VAR7, VAR8);
                        VAR16[1] = FUN5(VAR2, VAR7, VAR8 + 8);
                        VAR2->VAR49.FUN9(VAR6, VAR2->VAR44->VAR47[VAR11], VAR12, VAR15, VAR16);
                    }
                    else
                        VAR2->VAR49.FUN10(VAR6, VAR2->VAR44->VAR47[VAR11], VAR12, VAR15, VAR16);
                }
            }
        }
    }
    if (VAR9 != VAR2->VAR18->VAR35)
        VAR9 -= 8;
    for (VAR8 = VAR4 ? VAR4 : 8; VAR8 < VAR10; VAR8 += 8)
    {
        for (VAR7 = VAR3 ? VAR3 - 8 : 0; VAR7 < VAR9; VAR7 += 8)
        {
            const int VAR37 = VAR2->VAR52[(VAR7 + VAR8 * VAR2->VAR39) >> 2];
            const int VAR40 = VAR2->VAR52[(VAR7 + 4 + VAR8 * VAR2->VAR39) >> 2];
            if (VAR37 || VAR40)
            {
                const int VAR41 = (FUN2(VAR2, VAR7, VAR8 - 1) + FUN2(VAR2, VAR7, VAR8) + 1) >> 1;
                VAR24 = VAR7 >= VAR3 ? VAR22 : VAR27;
                VAR26 = VAR7 >= VAR3 ? VAR25 : VAR28;
                VAR14 = VAR42[FUN3(VAR41 + VAR26, 0, VAR43)];
                VAR13[0] = VAR37 ? FUN4(VAR41, VAR37) : 0;
                VAR13[1] = VAR40 ? FUN4(VAR41, VAR40) : 0;
                VAR6 = &VAR2->VAR44->VAR45[VAR46][VAR8 * VAR2->VAR44->VAR47[VAR46] + (VAR7 << VAR2->VAR18->VAR48)];
                if (VAR29)
                {
                    VAR15[0] = FUN5(VAR2, VAR7, VAR8 - 1);
                    VAR15[1] = FUN5(VAR2, VAR7 + 4, VAR8 - 1);
                    VAR16[0] = FUN5(VAR2, VAR7, VAR8);
                    VAR16[1] = FUN5(VAR2, VAR7 + 4, VAR8);
                    VAR2->VAR49.FUN11(VAR6, VAR2->VAR44->VAR47[VAR46], VAR14, VAR13, VAR15, VAR16);
                }
                else
                    VAR2->VAR49.FUN12(VAR6, VAR2->VAR44->VAR47[VAR46], VAR14, VAR13, VAR15, VAR16);
            }
        }
    }
    for (VAR11 = 1; VAR11 <= 2; VAR11++)
    {
        for (VAR8 = VAR4 ? VAR4 : 16; VAR8 < VAR10; VAR8 += 16)
        {
            for (VAR7 = VAR3 - 8; VAR7 < VAR9; VAR7 += 16)
            {
                int VAR37, VAR40;
                if (VAR7 < 0)
                {
                    VAR37 = 0;
                    VAR40 = VAR2->VAR52[(VAR7 + 8 + VAR8 * VAR2->VAR39) >> 2];
                }
                else if (VAR7 >= VAR9 - 8)
                {
                    VAR37 = VAR2->VAR52[(VAR7 + VAR8 * VAR2->VAR39) >> 2];
                    VAR40 = 0;
                }
                else
                {
                    VAR37 = VAR2->VAR52[(VAR7 + VAR8 * VAR2->VAR39) >> 2];
                    VAR40 = VAR2->VAR52[(VAR7 + 8 + VAR8 * VAR2->VAR39) >> 2];
                }
                if ((VAR37 == 2) || (VAR40 == 2))
                {
                    const int VAR50 = VAR37 == 2 ? (FUN2(VAR2, VAR7, VAR8 - 1) + FUN2(VAR2, VAR7, VAR8) + 1) >> 1 : 0;
                    const int VAR51 = VAR40 == 2 ? (FUN2(VAR2, VAR7 + 8, VAR8 - 1) + FUN2(VAR2, VAR7 + 8, VAR8) + 1) >> 1 : 0;
                    VAR24 = VAR7 >= VAR3 ? VAR22 : VAR27;
                    VAR12[0] = VAR37 == 2 ? FUN8(VAR2, VAR50, VAR11, VAR24) : 0;
                    VAR12[1] = VAR40 == 2 ? FUN8(VAR2, VAR51, VAR11, VAR22) : 0;
                    VAR6 = &VAR2->VAR44->VAR45[VAR11][VAR8 / 2 * VAR2->VAR44->VAR47[VAR11] + ((VAR7 / 2) << VAR2->VAR18->VAR48)];
                    if (VAR29)
                    {
                        VAR15[0] = FUN5(VAR2, VAR7, VAR8 - 1);
                        VAR15[1] = FUN5(VAR2, VAR7 + 8, VAR8 - 1);
                        VAR16[0] = FUN5(VAR2, VAR7, VAR8);
                        VAR16[1] = FUN5(VAR2, VAR7 + 8, VAR8);
                        VAR2->VAR49.FUN13(VAR6, VAR2->VAR44->VAR47[VAR11], VAR12, VAR15, VAR16);
                    }
                    else
                        VAR2->VAR49.FUN14(VAR6, VAR2->VAR44->VAR47[VAR11], VAR12, VAR15, VAR16);
                }
            }
        }
    }
}