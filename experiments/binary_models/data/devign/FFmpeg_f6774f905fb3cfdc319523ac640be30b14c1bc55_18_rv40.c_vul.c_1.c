static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12, *VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    int VAR19[4];
    int VAR20[4];
    int VAR21[4];
    int VAR22[4];
    int VAR23[4][2];
    unsigned VAR24[4];
    VAR6 = VAR3 * VAR5->VAR25;
    for (VAR7 = 0; VAR7 < VAR5->VAR26; VAR7++, VAR6++)
    {
        int VAR19 = VAR5->VAR27->VAR28[VAR6];
        if (FUN2(VAR19) || FUN3(VAR19))
            VAR2->VAR29[VAR6] = VAR2->VAR30[VAR6] = 0xFFFF;
        if (FUN2(VAR19))
            VAR2->VAR31[VAR6] = 0xFF;
    }
    VAR6 = VAR3 * VAR5->VAR25;
    for (VAR7 = 0; VAR7 < VAR5->VAR26; VAR7++, VAR6++)
    {
        int VAR32, VAR33;
        int VAR34[2], VAR35[2];
        int VAR36;
        int VAR37[4];
        unsigned VAR38;
        int VAR39[2];
        VAR18 = VAR5->VAR27->VAR40[VAR6];
        VAR14 = VAR41[VAR18];
        VAR15 = VAR42[VAR18];
        VAR16 = VAR17 = VAR15 * 3;
        if (VAR5->VAR43 * VAR5->VAR44 <= 176 * 144)
            VAR16 += VAR15;
        VAR37[0] = 1;
        VAR37[1] = VAR3;
        VAR37[2] = VAR7;
        VAR37[3] = VAR3 < VAR5->VAR45 - 1;
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (VAR37[VAR8])
            {
                int VAR46 = VAR6 + VAR47[VAR8] + VAR48[VAR8] * VAR5->VAR25;
                VAR24[VAR8] = VAR2->VAR30[VAR46];
                VAR19[VAR8] = VAR5->VAR27->VAR28[VAR46];
                VAR22[VAR8] = VAR2->VAR29[VAR46];
                VAR23[VAR8][0] = VAR2->VAR31[VAR46] & 0xF;
                VAR23[VAR8][1] = VAR2->VAR31[VAR46] >> 4;
            }
            else
            {
                VAR24[VAR8] = 0;
                VAR19[VAR8] = VAR19[0];
                VAR22[VAR8] = 0;
                VAR23[VAR8][0] = VAR23[VAR8][1] = 0;
            }
            VAR20[VAR8] = FUN2(VAR19[VAR8]) || FUN3(VAR19[VAR8]);
            VAR21[VAR8] = VAR49[VAR20[VAR8] + 1][VAR18];
        }
        VAR38 = VAR24[VAR50] | (VAR24[VAR51] << 16);
        VAR32 = VAR38 | ((VAR22[VAR50] << 4) & ~VAR52) | ((VAR22[VAR53] & VAR54) >> 12);
        VAR33 = VAR38 | ((VAR22[VAR50] << 1) & ~VAR55) | ((VAR22[VAR56] & VAR57) >> 3);
        if (!VAR7)
            VAR33 &= ~VAR55;
        if (!VAR3)
            VAR32 &= ~VAR52;
        if (VAR3 == VAR5->VAR45 - 1 || (VAR20[VAR50] | VAR20[VAR51]))
            VAR32 &= ~(VAR52 << 16);
        for (VAR8 = 0; VAR8 < 2; VAR8++)
        {
            VAR39[VAR8] = (VAR23[VAR51][VAR8] << 4) | VAR23[VAR50][VAR8];
            VAR34[VAR8] = VAR39[VAR8] | ((VAR23[VAR50][VAR8] << 1) & ~VAR58) | ((VAR23[VAR56][VAR8] & VAR59) >> 1);
            VAR35[VAR8] = VAR39[VAR8] | ((VAR23[VAR53][VAR8] & VAR60) >> 2) | (VAR23[VAR50][VAR8] << 2);
            if (!VAR7)
                VAR34[VAR8] &= ~VAR58;
            if (!VAR3)
                VAR35[VAR8] &= ~VAR61;
            if (VAR3 == VAR5->VAR45 - 1 || (VAR20[VAR50] | VAR20[VAR51]))
                VAR35[VAR8] &= ~(VAR61 << 4);
        }
        for (VAR9 = 0; VAR9 < 16; VAR9 += 4)
        {
            VAR12 = VAR5->VAR27->VAR62.VAR63[0] + VAR7 * 16 + (VAR3 * 16 + VAR9) * VAR5->VAR64;
            for (VAR8 = 0; VAR8 < 4; VAR8++, VAR12 += 4)
            {
                int VAR65 = VAR8 + VAR9;
                int VAR66 = VAR38 & (VAR67 << VAR65) ? VAR21[VAR50] : 0;
                int VAR68 = VAR9 ? VAR65 : VAR8 * 4;
                if (VAR32 & (VAR69 << VAR65))
                {
                    FUN4(&VAR2->VAR70, VAR12 + 4 * VAR5->VAR64, VAR5->VAR64, VAR68, VAR38 & (VAR69 << VAR65) ? VAR21[VAR50] : 0, VAR66, VAR14, VAR15, VAR16, 0, 0, 0);
                }
                if (VAR33 & (VAR67 << VAR65) && (VAR8 || !(VAR20[VAR50] | VAR20[VAR56])))
                {
                    if (!VAR8)
                        VAR36 = VAR24[VAR56] & (VAR71 << VAR9) ? VAR21[VAR56] : 0;
                    else
                        VAR36 = VAR38 & (VAR67 << (VAR65 - 1)) ? VAR21[VAR50] : 0;
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR36, VAR14, VAR15, VAR16, 0, 0, 1);
                }
                if (!VAR9 && VAR32 & (VAR67 << VAR8) && (VAR20[VAR50] | VAR20[VAR53]))
                {
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR24[VAR53] & (VAR72 << VAR8) ? VAR21[VAR53] : 0, VAR14, VAR15, VAR16, 0, 1, 0);
                }
                if (VAR33 & (VAR67 << VAR65) && !VAR8 && (VAR20[VAR50] | VAR20[VAR56]))
                {
                    VAR36 = VAR24[VAR56] & (VAR71 << VAR9) ? VAR21[VAR56] : 0;
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR36, VAR14, VAR15, VAR16, 0, 1, 1);
                }
            }
        }
        for (VAR10 = 0; VAR10 < 2; VAR10++)
        {
            for (VAR9 = 0; VAR9 < 2; VAR9++)
            {
                VAR13 = VAR5->VAR27->VAR62.VAR63[VAR10 + 1] + VAR7 * 8 + (VAR3 * 8 + VAR9 * 4) * VAR5->VAR73;
                for (VAR8 = 0; VAR8 < 2; VAR8++, VAR13 += 4)
                {
                    int VAR65 = VAR8 + VAR9 * 2;
                    int VAR66 = VAR39[VAR10] & (VAR67 << VAR65) ? VAR21[VAR50] : 0;
                    if (VAR35[VAR10] & (VAR67 << (VAR65 + 2)))
                    {
                        int VAR74 = VAR39[VAR10] & (VAR67 << (VAR65 + 2)) ? VAR21[VAR50] : 0;
                        FUN4(&VAR2->VAR70, VAR13 + 4 * VAR5->VAR73, VAR5->VAR73, VAR8 * 8, VAR74, VAR66, VAR14, VAR15, VAR17, 1, 0, 0);
                    }
                    if ((VAR34[VAR10] & (VAR67 << VAR65)) && (VAR8 || !(VAR20[VAR50] | VAR20[VAR56])))
                    {
                        if (!VAR8)
                            VAR36 = VAR23[VAR56][VAR10] & (VAR67 << (2 * VAR9 + 1)) ? VAR21[VAR56] : 0;
                        else
                            VAR36 = VAR39[VAR10] & (VAR67 << (VAR65 - 1)) ? VAR21[VAR50] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR9 * 8, VAR66, VAR36, VAR14, VAR15, VAR17, 1, 0, 1);
                    }
                    if (!VAR9 && VAR35[VAR10] & (VAR67 << VAR65) && (VAR20[VAR50] | VAR20[VAR53]))
                    {
                        int VAR75 = VAR23[VAR53][VAR10] & (VAR67 << (VAR65 + 2)) ? VAR21[VAR53] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR8 * 8, VAR66, VAR75, VAR14, VAR15, VAR17, 1, 1, 0);
                    }
                    if (VAR34[VAR10] & (VAR67 << VAR65) && !VAR8 && (VAR20[VAR50] | VAR20[VAR56]))
                    {
                        VAR36 = VAR23[VAR56][VAR10] & (VAR67 << (2 * VAR9 + 1)) ? VAR21[VAR56] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR9 * 8, VAR66, VAR36, VAR14, VAR15, VAR17, 1, 1, 1);
                    }
                }
            }
        }
    }
}