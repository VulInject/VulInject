static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8;
    int VAR9 = VAR4->VAR10 + VAR4->VAR11 * VAR4->VAR12;
    int VAR13;
    int VAR14, VAR15;
    int VAR16 = VAR2->VAR17;
    int VAR18 = 1;
    int VAR19, VAR20;
    int VAR21, VAR22;
    int VAR23, VAR24;
    int VAR25 = 1;
    int VAR26, VAR27;
    int VAR28, VAR29;
    int VAR30 = 0, VAR31, VAR32 = 0, VAR33 = 0;
    VAR15 = VAR2->VAR34;
    if (VAR2->VAR35)
        VAR29 = FUN2(VAR6);
    else
        VAR29 = VAR2->VAR36[VAR9];
    if (VAR2->VAR37)
        VAR28 = FUN2(VAR6);
    else
        VAR28 = VAR2->VAR4.VAR38[VAR9];
    if (!VAR29)
    {
        if (!VAR28)
        {
            FUN3(VAR19, VAR20);
            if (VAR4->VAR39)
            {
                VAR4->VAR40.VAR41[1][VAR4->VAR42[0]][0] = 0;
                VAR4->VAR40.VAR41[1][VAR4->VAR42[0]][1] = 0;
            }
            VAR4->VAR40.VAR43[VAR9] = VAR4->VAR39 ? VAR44 : VAR45;
            FUN4(VAR2, 0, VAR19, VAR20, 1, VAR2->VAR46, VAR2->VAR47, VAR2->VAR43[0], 0, 0);
            if (VAR4->VAR39 && !VAR18)
            {
                FUN5();
                VAR4->VAR48 = FUN2(VAR6);
                VAR13 = 0;
            }
            else if (VAR18)
            {
                if (VAR4->VAR39)
                    VAR4->VAR48 = FUN2(VAR6);
                VAR13 = FUN6(&VAR2->VAR4.VAR6, VAR2->VAR49->VAR50, VAR51, 2);
                FUN5();
            }
            else
            {
                VAR15 = VAR2->VAR34;
                VAR13 = 0;
            }
            VAR4->VAR40.VAR52[VAR9] = VAR15;
            if (!VAR2->VAR53 && !VAR4->VAR39 && VAR18)
                VAR16 = FUN6(VAR6, VAR54[VAR2->VAR55].VAR50, VAR56, 2);
            if (!VAR4->VAR39)
                FUN7(VAR2, 0);
            VAR26 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR4->VAR57[0][VAR4->VAR42[VAR7]] = 0;
                VAR26 += VAR7 >> 2;
                VAR23 = ((VAR13 >> (5 - VAR7)) & 1);
                VAR27 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR58);
                VAR2->VAR43[0][VAR4->VAR42[VAR7]] = VAR4->VAR39;
                if (VAR4->VAR39)
                {
                    VAR2->VAR59 = VAR2->VAR60 = 0;
                    if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR61)
                        VAR2->VAR59 = VAR2->VAR43[0][VAR4->VAR42[VAR7] - VAR4->VAR62[VAR7]];
                    if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                        VAR2->VAR60 = VAR2->VAR43[0][VAR4->VAR42[VAR7] - 1];
                    FUN8(VAR2, VAR4->VAR63[VAR7], VAR7, VAR23, VAR15, (VAR7 & 4) ? VAR2->VAR64 : VAR2->VAR65);
                    if ((VAR7 > 3) && (VAR4->VAR66 & VAR67))
                        continue;
                    VAR2->VAR68.FUN9(VAR4->VAR63[VAR7]);
                    if (VAR2->VAR69)
                        for (VAR8 = 0; VAR8 < 64; VAR8++)
                            VAR4->VAR63[VAR7][VAR8] <<= 1;
                    VAR4->VAR70.FUN10(VAR4->VAR63[VAR7], VAR4->VAR71[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR72 : VAR4->VAR58);
                    if (VAR2->VAR34 >= 9 && VAR2->VAR73)
                    {
                        if (VAR2->VAR60)
                            VAR2->VAR68.FUN11(VAR4->VAR71[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR72 : VAR4->VAR58);
                        if (VAR2->VAR59)
                            VAR2->VAR68.FUN12(VAR4->VAR71[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR72 : VAR4->VAR58);
                    }
                    VAR30 |= 0xF << (VAR7 << 2);
                    VAR33 |= 1 << VAR7;
                }
                else if (VAR23)
                {
                    VAR31 = FUN13(VAR2, VAR4->VAR63[VAR7], VAR7, VAR15, VAR16, VAR25, VAR4->VAR71[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR72 : VAR4->VAR58, (VAR7 & 4) && (VAR4->VAR66 & VAR67), &VAR32);
                    VAR30 |= VAR31 << (VAR7 << 2);
                    if (!VAR2->VAR53 && VAR16 < 8)
                        VAR16 = -1;
                    VAR25 = 0;
                }
            }
        }
        else
        {
            VAR4->VAR39 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR43[0][VAR4->VAR42[VAR7]] = 0;
                VAR4->VAR57[0][VAR4->VAR42[VAR7]] = 0;
            }
            VAR4->VAR40.VAR43[VAR9] = VAR74;
            VAR4->VAR40.VAR52[VAR9] = 0;
            FUN4(VAR2, 0, 0, 0, 1, VAR2->VAR46, VAR2->VAR47, VAR2->VAR43[0], 0, 0);
            FUN7(VAR2, 0);
        }
    }
    else
    {
        if (!VAR28)
        {
            int VAR75 = 0, VAR76 = 0;
            int VAR77[6], VAR78[6];
            VAR13 = FUN6(&VAR2->VAR4.VAR6, VAR2->VAR49->VAR50, VAR51, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR23 = ((VAR13 >> (5 - VAR7)) & 1);
                VAR4->VAR57[0][VAR4->VAR42[VAR7]] = 0;
                VAR4->VAR39 = 0;
                if (VAR7 < 4)
                {
                    VAR19 = VAR20 = 0;
                    VAR4->VAR39 = 0;
                    VAR18 = 0;
                    if (VAR23)
                    {
                        FUN3(VAR19, VAR20);
                    }
                    FUN4(VAR2, VAR7, VAR19, VAR20, 0, VAR2->VAR46, VAR2->VAR47, VAR2->VAR43[0], 0, 0);
                    if (!VAR4->VAR39)
                        FUN14(VAR2, VAR7, 0, 0);
                    VAR75 += VAR4->VAR39;
                    VAR77[VAR7] = VAR4->VAR39;
                    VAR78[VAR7] = VAR18;
                }
                if (VAR7 & 4)
                {
                    VAR77[VAR7] = (VAR75 >= 3);
                    VAR78[VAR7] = VAR23;
                }
                if (VAR7 == 4)
                    FUN15(VAR2, 0);
                VAR2->VAR43[0][VAR4->VAR42[VAR7]] = VAR77[VAR7];
                if (!VAR76)
                    VAR76 = !VAR77[VAR7] && VAR78[VAR7];
            }
            VAR26 = 0;
            if (!VAR75 && !VAR76)
                goto VAR79;
            FUN5();
            VAR4->VAR40.VAR52[VAR9] = VAR15;
            {
                int VAR80 = 0;
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                    if (VAR77[VAR7])
                    {
                        if (((!VAR4->VAR61 || (VAR7 == 2 || VAR7 == 3)) && VAR2->VAR43[0][VAR4->VAR42[VAR7] - VAR4->VAR62[VAR7]]) || ((VAR4->VAR10 || (VAR7 == 1 || VAR7 == 3)) && VAR2->VAR43[0][VAR4->VAR42[VAR7] - 1]))
                        {
                            VAR80 = 1;
                            break;
                        }
                    }
                if (VAR80)
                    VAR4->VAR48 = FUN2(VAR6);
                else
                    VAR4->VAR48 = 0;
            }
            if (!VAR2->VAR53 && VAR76)
                VAR16 = FUN6(VAR6, VAR54[VAR2->VAR55].VAR50, VAR56, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR26 += VAR7 >> 2;
                VAR27 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR58);
                VAR4->VAR39 = VAR77[VAR7];
                if (VAR77[VAR7])
                {
                    VAR2->VAR59 = VAR2->VAR60 = 0;
                    if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR61)
                        VAR2->VAR59 = VAR2->VAR43[0][VAR4->VAR42[VAR7] - VAR4->VAR62[VAR7]];
                    if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                        VAR2->VAR60 = VAR2->VAR43[0][VAR4->VAR42[VAR7] - 1];
                    FUN8(VAR2, VAR4->VAR63[VAR7], VAR7, VAR78[VAR7], VAR15, (VAR7 & 4) ? VAR2->VAR64 : VAR2->VAR65);
                    if ((VAR7 > 3) && (VAR4->VAR66 & VAR67))
                        continue;
                    VAR2->VAR68.FUN9(VAR4->VAR63[VAR7]);
                    if (VAR2->VAR69)
                        for (VAR8 = 0; VAR8 < 64; VAR8++)
                            VAR4->VAR63[VAR7][VAR8] <<= 1;
                    VAR4->VAR70.FUN10(VAR4->VAR63[VAR7], VAR4->VAR71[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR72 : VAR4->VAR58);
                    if (VAR2->VAR34 >= 9 && VAR2->VAR73)
                    {
                        if (VAR2->VAR60)
                            VAR2->VAR68.FUN11(VAR4->VAR71[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR72 : VAR4->VAR58);
                        if (VAR2->VAR59)
                            VAR2->VAR68.FUN12(VAR4->VAR71[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR72 : VAR4->VAR58);
                    }
                    VAR30 |= 0xF << (VAR7 << 2);
                    VAR33 |= 1 << VAR7;
                }
                else if (VAR78[VAR7])
                {
                    VAR31 = FUN13(VAR2, VAR4->VAR63[VAR7], VAR7, VAR15, VAR16, VAR25, VAR4->VAR71[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR72 : VAR4->VAR58, (VAR7 & 4) && (VAR4->VAR66 & VAR67), &VAR32);
                    VAR30 |= VAR31 << (VAR7 << 2);
                    if (!VAR2->VAR53 && VAR16 < 8)
                        VAR16 = -1;
                    VAR25 = 0;
                }
            }
        }
        else
        {
            VAR4->VAR39 = 0;
            VAR4->VAR40.VAR52[VAR9] = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR43[0][VAR4->VAR42[VAR7]] = 0;
                VAR4->VAR57[0][VAR4->VAR42[VAR7]] = 0;
            }
            for (VAR7 = 0; VAR7 < 4; VAR7++)
            {
                FUN4(VAR2, VAR7, 0, 0, 0, VAR2->VAR46, VAR2->VAR47, VAR2->VAR43[0], 0, 0);
                FUN14(VAR2, VAR7, 0, 0);
            }
            FUN15(VAR2, 0);
            VAR4->VAR40.VAR52[VAR9] = 0;
        }
    }
VAR79:
    VAR2->VAR13[VAR4->VAR10] = VAR30;
    VAR2->VAR81[VAR4->VAR10] = VAR32;
    VAR2->VAR77[VAR4->VAR10] = VAR33;
    return 0;
}