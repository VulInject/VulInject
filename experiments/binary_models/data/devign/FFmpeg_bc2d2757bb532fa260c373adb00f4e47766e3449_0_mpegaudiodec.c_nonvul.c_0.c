static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    static int VAR6 = 0;
    int VAR7, VAR8, VAR9;
    VAR2->VAR10 = VAR11;
    VAR2->VAR10 = VAR12;
    if (VAR2->VAR13 != VAR14)
        VAR4->VAR15 = VAR16;
    else
        VAR4->VAR15 = VAR17;
    if (!VAR6 && !VAR2->VAR18)
    {
        for (VAR7 = 0; VAR7 < 64; VAR7++)
        {
            int VAR19, VAR20;
            VAR19 = (VAR7 / 3);
            VAR20 = VAR7 % 3;
            VAR21[VAR7] = VAR20 | (VAR19 << 2);
        }
        for (VAR7 = 0; VAR7 < 15; VAR7++)
        {
            int VAR22, VAR23;
            VAR22 = VAR7 + 2;
            VAR23 = ((FUN2(1) << VAR22) * VAR24) / ((1 << VAR22) - 1);
            VAR25[VAR7][0] = FUN3(FUN4(1.0 * 2.0), VAR23);
            VAR25[VAR7][1] = FUN3(FUN4(0.7937005259 * 2.0), VAR23);
            VAR25[VAR7][2] = FUN3(FUN4(0.6299605249 * 2.0), VAR23);
            FUN5("", VAR7, VAR23, VAR25[VAR7][0], VAR25[VAR7][1], VAR25[VAR7][2]);
        }
        FUN6(VAR26);
        for (VAR7 = 1; VAR7 < 16; VAR7++)
        {
            const VAR27 *VAR28 = &VAR29[VAR7];
            int VAR30, VAR31, VAR32;
            unsigned int VAR22;
            uint8_t VAR33[256];
            uint16_t VAR34[256];
            memset(VAR33, 0, sizeof(VAR33));
            memset(VAR34, 0, sizeof(VAR34));
            VAR30 = VAR28->VAR30;
            VAR22 = VAR30 * VAR30;
            VAR8 = 0;
            for (VAR31 = 0; VAR31 < VAR30; VAR31++)
            {
                for (VAR32 = 0; VAR32 < VAR30; VAR32++)
                {
                    VAR33[(VAR31 << 4) | VAR32] = VAR28->VAR35[VAR8];
                    VAR34[(VAR31 << 4) | VAR32] = VAR28->VAR36[VAR8++];
                }
            }
            FUN7(&VAR37[VAR7], 7, 256, VAR33, 1, 1, VAR34, 2, 2, 1);
        }
        for (VAR7 = 0; VAR7 < 2; VAR7++)
        {
            FUN7(&VAR38[VAR7], VAR7 == 0 ? 7 : 4, 16, VAR39[VAR7], 1, 1, VAR40[VAR7], 1, 1, 1);
        }
        for (VAR7 = 0; VAR7 < 9; VAR7++)
        {
            VAR9 = 0;
            for (VAR8 = 0; VAR8 < 22; VAR8++)
            {
                VAR41[VAR7][VAR8] = VAR9;
                VAR9 += VAR42[VAR7][VAR8];
            }
            VAR41[VAR7][22] = VAR9;
        }
        VAR43 = FUN8(VAR44 * sizeof(VAR43[0]));
        if (!VAR43)
            return -1;
        VAR45 = FUN8(VAR44 * sizeof(VAR45[0]));
        if (!VAR45)
            return -1;
        FUN9();
        for (VAR7 = 1; VAR7 < VAR44; VAR7++)
        {
            double VAR46, VAR47;
            int VAR48, VAR49;
            VAR46 = FUN10((double)(VAR7 / 4), 4.0 / 3.0) * FUN10(2, (VAR7 & 3) * 0.25);
            VAR47 = FUN11(VAR46, &VAR48);
            VAR49 = (VAR50)(VAR47 * (1LL << 31) + 0.5);
            VAR48 += VAR51 - 31 + 5 - 100;
            VAR45[VAR7] = VAR49;
            VAR43[VAR7] = -VAR48;
        }
        for (VAR7 = 0; VAR7 < 512 * 16; VAR7++)
        {
            int VAR52 = (VAR7 >> 4);
            double VAR46 = FUN10(VAR7 & 15, 4.0 / 3.0) * FUN10(2, (VAR52 - 400) * 0.25 + VAR51 + 5);
            VAR53[VAR52][VAR7 & 15] = FUN12(VAR46);
            if ((VAR7 & 15) == 1)
                VAR54[VAR52] = FUN12(VAR46);
        }
        for (VAR7 = 0; VAR7 < 7; VAR7++)
        {
            float VAR46;
            int VAR55;
            if (VAR7 != 6)
            {
                VAR46 = FUN13((double)VAR7 * VAR56 / 12.0);
                VAR55 = FUN4(VAR46 / (1.0 + VAR46));
            }
            else
            {
                VAR55 = FUN4(1.0);
            }
            VAR57[0][VAR7] = VAR55;
            VAR57[1][6 - VAR7] = VAR55;
        }
        for (VAR7 = 7; VAR7 < 16; VAR7++)
            VAR57[0][VAR7] = VAR57[1][VAR7] = 0.0;
        for (VAR7 = 0; VAR7 < 16; VAR7++)
        {
            double VAR46;
            int VAR48, VAR9;
            for (VAR8 = 0; VAR8 < 2; VAR8++)
            {
                VAR48 = -(VAR8 + 1) * ((VAR7 + 1) >> 1);
                VAR46 = FUN10(2.0, VAR48 / 4.0);
                VAR9 = VAR7 & 1;
                VAR58[VAR8][VAR9 ^ 1][VAR7] = FUN4(VAR46);
                VAR58[VAR8][VAR9][VAR7] = FUN4(1.0);
                FUN5("", VAR7, VAR8, VAR58[VAR8][0][VAR7], VAR58[VAR8][1][VAR7]);
            }
        }
        for (VAR7 = 0; VAR7 < 8; VAR7++)
        {
            float VAR59, VAR60, VAR61;
            VAR59 = VAR62[VAR7];
            VAR60 = 1.0 / FUN14(1.0 + VAR59 * VAR59);
            VAR61 = VAR60 * VAR59;
            VAR63[VAR7][0] = FUN15(VAR60 / 4);
            VAR63[VAR7][1] = FUN15(VAR61 / 4);
            VAR63[VAR7][2] = FUN15(VAR61 / 4) + FUN15(VAR60 / 4);
            VAR63[VAR7][3] = FUN15(VAR61 / 4) - FUN15(VAR60 / 4);
            VAR64[VAR7][0] = VAR60;
            VAR64[VAR7][1] = VAR61;
            VAR64[VAR7][2] = VAR61 + VAR60;
            VAR64[VAR7][3] = VAR61 - VAR60;
        }
        for (VAR7 = 0; VAR7 < 36; VAR7++)
        {
            for (VAR8 = 0; VAR8 < 4; VAR8++)
            {
                double VAR65;
                if (VAR8 == 2 && VAR7 % 3 != 1)
                    continue;
                VAR65 = FUN16(VAR56 * (VAR7 + 0.5) / 36.0);
                if (VAR8 == 1)
                {
                    if (VAR7 >= 30)
                        VAR65 = 0;
                    else if (VAR7 >= 24)
                        VAR65 = FUN16(VAR56 * (VAR7 - 18 + 0.5) / 12.0);
                    else if (VAR7 >= 18)
                        VAR65 = 1;
                }
                else if (VAR8 == 3)
                {
                    if (VAR7 < 6)
                        VAR65 = 0;
                    else if (VAR7 < 12)
                        VAR65 = FUN16(VAR56 * (VAR7 - 6 + 0.5) / 12.0);
                    else if (VAR7 < 18)
                        VAR65 = 1;
                }
                VAR65 *= 0.5 / FUN17(VAR56 * (2 * VAR7 + 19) / 72);
                if (VAR8 == 2)
                    VAR66[VAR8][VAR7 / 3] = FUN15((VAR65 / (1 << 5)));
                else
                    VAR66[VAR8][VAR7] = FUN15((VAR65 / (1 << 5)));
            }
        }
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            for (VAR7 = 0; VAR7 < 36; VAR7 += 2)
            {
                VAR66[VAR8 + 4][VAR7] = VAR66[VAR8][VAR7];
                VAR66[VAR8 + 4][VAR7 + 1] = -VAR66[VAR8][VAR7 + 1];
            }
        }
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            FUN18(VAR2, VAR67, "", VAR8);
            for (VAR7 = 0; VAR7 < 36; VAR7++)
                FUN18(VAR2, VAR67, "", (double)VAR66[VAR8][VAR7] / VAR24);
            FUN18(VAR2, VAR67, "");
        }
        VAR6 = 1;
    }
    VAR4->VAR68 = 0;
    VAR4->VAR69 = &VAR4->VAR70[VAR4->VAR68][VAR71];
    VAR4->VAR72 = VAR4->VAR69;
    VAR4->VAR73 = 0;
    if (VAR2->VAR74 == VAR75)
        VAR4->VAR76 = 1;
    return 0;
}