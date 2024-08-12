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
    int VAR24[4];
    VAR6 = VAR3 * VAR5->VAR25;
    for (VAR7 = 0; VAR7 < VAR5->VAR26; VAR7++, VAR6++)
    {
        int VAR19 = VAR5->VAR27->VAR28.VAR29[VAR6];
        if (FUN2(VAR19) || FUN3(VAR19))
            VAR2->VAR30[VAR6] = VAR2->VAR31[VAR6] = 0xFFFF;
        if (FUN2(VAR19))
            VAR2->VAR32[VAR6] = 0xFF;
    }
    VAR6 = VAR3 * VAR5->VAR25;
    for (VAR7 = 0; VAR7 < VAR5->VAR26; VAR7++, VAR6++)
    {
        int VAR33, VAR34;
        int VAR35[2], VAR36[2];
        int VAR37;
        int VAR38[4];
        int VAR39, VAR40[2];
        VAR18 = VAR5->VAR27->VAR28.VAR41[VAR6];
        VAR14 = VAR42[VAR18];
        VAR15 = VAR43[VAR18];
        VAR16 = VAR17 = VAR15 * 3;
        if (VAR5->VAR44 * VAR5->VAR45 <= 176 * 144)
            VAR16 += VAR15;
        VAR38[0] = 1;
        VAR38[1] = VAR3;
        VAR38[2] = VAR7;
        VAR38[3] = VAR3 < VAR5->VAR46 - 1;
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (VAR38[VAR8])
            {
                int VAR47 = VAR6 + VAR48[VAR8] + VAR49[VAR8] * VAR5->VAR25;
                VAR24[VAR8] = VAR2->VAR31[VAR47];
                VAR19[VAR8] = VAR5->VAR27->VAR28.VAR29[VAR47];
                VAR22[VAR8] = VAR2->VAR30[VAR47];
                VAR23[VAR8][0] = VAR2->VAR32[VAR47] & 0xF;
                VAR23[VAR8][1] = VAR2->VAR32[VAR47] >> 4;
            }
            else
            {
                VAR24[VAR8] = 0;
                VAR19[VAR8] = VAR19[0];
                VAR22[VAR8] = 0;
                VAR23[VAR8][0] = VAR23[VAR8][1] = 0;
            }
            VAR20[VAR8] = FUN2(VAR19[VAR8]) || FUN3(VAR19[VAR8]);
            VAR21[VAR8] = VAR50[VAR20[VAR8] + 1][VAR18];
        }
        VAR39 = VAR24[VAR51] | (VAR24[VAR52] << 16);
        VAR33 = VAR39 | ((VAR22[VAR51] << 4) & ~VAR53) | ((VAR22[VAR54] & VAR55) >> 12);
        VAR34 = VAR39 | ((VAR22[VAR51] << 1) & ~VAR56) | ((VAR22[VAR57] & VAR58) >> 3);
        if (!VAR7)
            VAR34 &= ~VAR56;
        if (!VAR3)
            VAR33 &= ~VAR53;
        if (VAR3 == VAR5->VAR46 - 1 || (VAR20[VAR51] || VAR20[VAR52]))
            VAR33 &= ~(VAR53 << 16);
        for (VAR8 = 0; VAR8 < 2; VAR8++)
        {
            VAR40[VAR8] = (VAR23[VAR52][VAR8] << 4) | VAR23[VAR51][VAR8];
            VAR35[VAR8] = VAR40[VAR8] | ((VAR23[VAR51][VAR8] << 1) & ~VAR59) | ((VAR23[VAR57][VAR8] & VAR60) >> 1);
            VAR36[VAR8] = VAR40[VAR8] | ((VAR23[VAR54][VAR8] & VAR61) >> 2) | (VAR23[VAR51][VAR8] << 2);
            if (!VAR7)
                VAR35[VAR8] &= ~VAR59;
            if (!VAR3)
                VAR36[VAR8] &= ~VAR62;
            if (VAR3 == VAR5->VAR46 - 1 || VAR20[VAR51] || VAR20[VAR52])
                VAR36[VAR8] &= ~(VAR62 << 4);
        }
        for (VAR9 = 0; VAR9 < 16; VAR9 += 4)
        {
            VAR12 = VAR5->VAR27->VAR28.VAR63[0] + VAR7 * 16 + (VAR3 * 16 + VAR9) * VAR5->VAR64;
            for (VAR8 = 0; VAR8 < 4; VAR8++, VAR12 += 4)
            {
                int VAR65 = VAR8 + VAR9;
                int VAR66 = VAR39 & (VAR67 << VAR65) ? VAR21[VAR51] : 0;
                int VAR68 = VAR9 ? VAR65 : VAR8 * 4;
                if (VAR33 & (VAR69 << VAR65))
                {
                    FUN4(&VAR2->VAR70, VAR12 + 4 * VAR5->VAR64, VAR5->VAR64, VAR68, VAR39 & (VAR69 << VAR65) ? VAR21[VAR51] : 0, VAR66, VAR14, VAR15, VAR16, 0, 0, 0);
                }
                if (VAR34 & (VAR67 << VAR65) && (VAR8 || !(VAR20[VAR51] || VAR20[VAR57])))
                {
                    if (!VAR8)
                        VAR37 = VAR24[VAR57] & (VAR71 << VAR9) ? VAR21[VAR57] : 0;
                    else
                        VAR37 = VAR39 & (VAR67 << (VAR65 - 1)) ? VAR21[VAR51] : 0;
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR37, VAR14, VAR15, VAR16, 0, 0, 1);
                }
                if (!VAR9 && VAR33 & (VAR67 << VAR8) && (VAR20[VAR51] || VAR20[VAR54]))
                {
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR24[VAR54] & (VAR72 << VAR8) ? VAR21[VAR54] : 0, VAR14, VAR15, VAR16, 0, 1, 0);
                }
                if (VAR34 & (VAR67 << VAR65) && !VAR8 && (VAR20[VAR51] || VAR20[VAR57]))
                {
                    VAR37 = VAR24[VAR57] & (VAR71 << VAR9) ? VAR21[VAR57] : 0;
                    FUN4(&VAR2->VAR70, VAR12, VAR5->VAR64, VAR68, VAR66, VAR37, VAR14, VAR15, VAR16, 0, 1, 1);
                }
            }
        }
        for (VAR10 = 0; VAR10 < 2; VAR10++)
        {
            for (VAR9 = 0; VAR9 < 2; VAR9++)
            {
                VAR13 = VAR5->VAR27->VAR28.VAR63[VAR10 + 1] + VAR7 * 8 + (VAR3 * 8 + VAR9 * 4) * VAR5->VAR73;
                for (VAR8 = 0; VAR8 < 2; VAR8++, VAR13 += 4)
                {
                    int VAR65 = VAR8 + VAR9 * 2;
                    int VAR66 = VAR40[VAR10] & (VAR67 << VAR65) ? VAR21[VAR51] : 0;
                    if (VAR36[VAR10] & (VAR67 << (VAR65 + 2)))
                    {
                        int VAR74 = VAR40[VAR10] & (VAR67 << (VAR65 + 2)) ? VAR21[VAR51] : 0;
                        FUN4(&VAR2->VAR70, VAR13 + 4 * VAR5->VAR73, VAR5->VAR73, VAR8 * 8, VAR74, VAR66, VAR14, VAR15, VAR17, 1, 0, 0);
                    }
                    if ((VAR35[VAR10] & (VAR67 << VAR65)) && (VAR8 || !(VAR20[VAR51] || VAR20[VAR57])))
                    {
                        if (!VAR8)
                            VAR37 = VAR23[VAR57][VAR10] & (VAR67 << (2 * VAR9 + 1)) ? VAR21[VAR57] : 0;
                        else
                            VAR37 = VAR40[VAR10] & (VAR67 << (VAR65 - 1)) ? VAR21[VAR51] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR9 * 8, VAR66, VAR37, VAR14, VAR15, VAR17, 1, 0, 1);
                    }
                    if (!VAR9 && VAR36[VAR10] & (VAR67 << VAR65) && (VAR20[VAR51] || VAR20[VAR54]))
                    {
                        int VAR75 = VAR23[VAR54][VAR10] & (VAR67 << (VAR65 + 2)) ? VAR21[VAR54] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR8 * 8, VAR66, VAR75, VAR14, VAR15, VAR17, 1, 1, 0);
                    }
                    if (VAR35[VAR10] & (VAR67 << VAR65) && !VAR8 && (VAR20[VAR51] || VAR20[VAR57]))
                    {
                        VAR37 = VAR23[VAR57][VAR10] & (VAR67 << (2 * VAR9 + 1)) ? VAR21[VAR57] : 0;
                        FUN4(&VAR2->VAR70, VAR13, VAR5->VAR73, VAR9 * 8, VAR66, VAR37, VAR14, VAR15, VAR17, 1, 1, 1);
                    }
                }
            }
        }
    }
}