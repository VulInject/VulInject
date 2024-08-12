static int FUN1(VAR1 *VAR2, int VAR3, unsigned char *VAR4, unsigned char *VAR5, unsigned char *VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12;
    int VAR13;
    int VAR14, VAR15;
    int VAR16;
    int VAR17[6];
    const int VAR18 = (VAR2->VAR19.VAR20 * VAR2->VAR19.VAR20) >> (2 * VAR21);
    VAR17[5] = VAR22;
    for (VAR16 = 4; VAR16 >= 0; VAR16--)
        VAR17[VAR16] = VAR17[VAR16 + 1] * VAR23;
    VAR14 = (VAR7 + 15) / 16;
    VAR15 = (VAR8 + 15) / 16;
    if (VAR2->VAR19.VAR24 == VAR25)
    {
        VAR2->VAR26.VAR27 = VAR2->VAR27;
        VAR2->VAR26.VAR28 = &VAR2->VAR26.VAR29;
        VAR2->VAR26.VAR30 = &VAR2->VAR26.VAR31;
        VAR2->VAR26.VAR31.VAR32[0] = VAR5;
        VAR2->VAR26.VAR33 = VAR2->VAR26.VAR31.VAR33[0] = VAR2->VAR26.VAR34.VAR33[0] = VAR2->VAR26.VAR29.VAR33[0] = VAR10;
        VAR2->VAR26.VAR7 = VAR7;
        VAR2->VAR26.VAR8 = VAR8;
        VAR2->VAR26.VAR35 = VAR14;
        VAR2->VAR26.VAR36 = VAR15;
        VAR2->VAR26.VAR37 = VAR2->VAR26.VAR35 + 1;
        VAR2->VAR26.VAR38 = 2 * VAR2->VAR26.VAR35 + 1;
        VAR2->VAR26.VAR39 = 1;
        VAR2->VAR26.VAR24 = VAR2->VAR19.VAR24;
        VAR2->VAR26.VAR40 = VAR2->VAR27->VAR40;
        VAR2->VAR26.VAR41.VAR42 = 0;
        VAR2->VAR26.VAR43 = VAR2->VAR27->VAR43;
        VAR2->VAR26.VAR18 = VAR2->VAR19.VAR20;
        VAR2->VAR26.VAR44 = (VAR2->VAR26.VAR18 * 139 + VAR45 * 64) >> (VAR21 + 7);
        VAR2->VAR26.VAR46 = (VAR2->VAR26.VAR18 * VAR2->VAR26.VAR18 + VAR45 / 2) >> VAR21;
        if (!VAR2->VAR47[VAR3])
        {
            VAR2->VAR47[VAR3] = FUN2((VAR2->VAR26.VAR38 * VAR15 * 2 + 2) * 2 * sizeof(VAR48));
            VAR2->VAR49[VAR3] = FUN2((VAR2->VAR26.VAR37 * (VAR15 + 2) + 1) * 2 * sizeof(VAR48));
        }
        VAR2->VAR26.VAR50 = VAR2->VAR50;
        VAR2->VAR26.VAR29.VAR51 = (VAR52 *)VAR2->VAR53;
        VAR2->VAR26.VAR29.VAR54 = (VAR55 *)VAR2->VAR53;
        VAR2->VAR26.VAR29.VAR56 = (VAR55 *)VAR2->VAR53;
        VAR2->VAR26.VAR29.VAR50 = VAR2->VAR53;
        VAR2->VAR26.VAR29.VAR57[0] = VAR2->VAR47[VAR3] + 2;
        VAR2->VAR26.VAR58 = VAR2->VAR49[VAR3] + VAR2->VAR26.VAR37 + 1;
        VAR2->VAR26.VAR59 = VAR2->VAR59;
        FUN3(&VAR2->VAR26);
        VAR2->VAR26.VAR41.VAR60 = VAR2->VAR27->VAR60;
        VAR2->VAR26.VAR61 = 1;
        for (VAR12 = 0; VAR12 < VAR15; VAR12++)
        {
            uint8_t VAR62[VAR10 * 16];
            VAR2->VAR26.VAR34.VAR32[0] = VAR62 - VAR12 * 16 * VAR10;
            VAR2->VAR26.VAR63 = VAR12;
            for (VAR13 = 0; VAR13 < 16 && VAR13 + 16 * VAR12 < VAR8; VAR13++)
            {
                memcpy(&VAR62[VAR13 * VAR10], &VAR4[(VAR13 + 16 * VAR12) * VAR9], VAR7);
                for (VAR11 = VAR7; VAR11 < 16 * VAR14; VAR11++)
                    VAR62[VAR13 * VAR10 + VAR11] = VAR62[VAR13 * VAR10 + VAR11 - 1];
            }
            for (; VAR13 < 16 && VAR13 + 16 * VAR12 < 16 * VAR15; VAR13++)
                memcpy(&VAR62[VAR13 * VAR10], &VAR62[(VAR13 - 1) * VAR10], 16 * VAR14);
            for (VAR11 = 0; VAR11 < VAR14; VAR11++)
            {
                VAR2->VAR26.VAR64 = VAR11;
                FUN4(&VAR2->VAR26);
                FUN5(&VAR2->VAR26);
                FUN6(&VAR2->VAR26, VAR11, VAR12);
            }
            VAR2->VAR26.VAR61 = 0;
        }
        FUN7(&VAR2->VAR26);
        FUN8(&VAR2->VAR26, NULL, 0, VAR2->VAR26.VAR58, VAR2->VAR26.VAR39, VAR65, 0);
    }
    VAR2->VAR26.VAR61 = 1;
    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
    {
        uint8_t VAR62[VAR10 * 16];
        for (VAR13 = 0; VAR13 < 16 && VAR13 + 16 * VAR12 < VAR8; VAR13++)
        {
            memcpy(&VAR62[VAR13 * VAR10], &VAR4[(VAR13 + 16 * VAR12) * VAR9], VAR7);
            for (VAR11 = VAR7; VAR11 < 16 * VAR14; VAR11++)
                VAR62[VAR13 * VAR10 + VAR11] = VAR62[VAR13 * VAR10 + VAR11 - 1];
        }
        for (; VAR13 < 16 && VAR13 + 16 * VAR12 < 16 * VAR15; VAR13++)
            memcpy(&VAR62[VAR13 * VAR10], &VAR62[(VAR13 - 1) * VAR10], 16 * VAR14);
        VAR2->VAR26.VAR63 = VAR12;
        for (VAR11 = 0; VAR11 < VAR14; VAR11++)
        {
            uint8_t VAR66[3][6][7 * 32];
            int VAR67[3][6];
            int VAR68 = VAR12 * 16 * VAR10 + VAR11 * 16;
            VAR52 *VAR69 = VAR6 + VAR68;
            VAR52 *VAR70 = VAR5 + VAR68;
            int VAR71[4] = {0, 0, 0, 0}, VAR72;
            VAR52 *VAR73 = VAR2->VAR74;
            if (VAR2->VAR75.VAR76 - VAR2->VAR75.VAR77 - (FUN9(&VAR2->VAR75) >> 3) < 3000)
            {
                FUN10(VAR2->VAR27, VAR78, "");
                return -1;
            }
            VAR2->VAR26.VAR64 = VAR11;
            FUN4(&VAR2->VAR26);
            FUN5(&VAR2->VAR26);
            if (VAR2->VAR19.VAR24 == VAR79 || (VAR2->VAR26.VAR50[VAR11 + VAR12 * VAR2->VAR26.VAR37] & VAR80))
            {
                for (VAR13 = 0; VAR13 < 6; VAR13++)
                {
                    FUN11(&VAR2->VAR81[VAR13], VAR66[0][VAR13], 7 * 32);
                }
                if (VAR2->VAR19.VAR24 == VAR25)
                {
                    const VAR52 *VAR82 = VAR83[VAR84];
                    FUN12(&VAR2->VAR81[5], VAR82[1], VAR82[0]);
                    VAR71[0] = VAR82[1] * VAR18;
                }
                VAR71[0] += FUN13(VAR2, VAR62 + 16 * VAR11, NULL, VAR73, VAR10, 5, 64, VAR18, 1);
                for (VAR13 = 0; VAR13 < 6; VAR13++)
                {
                    VAR67[0][VAR13] = FUN9(&VAR2->VAR81[VAR13]);
                    FUN14(&VAR2->VAR81[VAR13]);
                }
            }
            else
                VAR71[0] = VAR85;
            VAR72 = 0;
            if (VAR2->VAR19.VAR24 == VAR25)
            {
                const VAR52 *VAR82 = VAR83[VAR86];
                int VAR87, VAR88, VAR89, VAR90, VAR91;
                VAR48 *VAR92;
                VAR92 = FUN15(&VAR2->VAR26, 0, 0, &VAR89, &VAR90);
                if (VAR2->VAR26.VAR50[VAR11 + VAR12 * VAR2->VAR26.VAR37] & VAR65)
                {
                    for (VAR13 = 0; VAR13 < 6; VAR13++)
                        FUN11(&VAR2->VAR81[VAR13], VAR66[1][VAR13], 7 * 32);
                    FUN12(&VAR2->VAR81[5], VAR82[1], VAR82[0]);
                    VAR2->VAR26.VAR75 = VAR2->VAR81[5];
                    VAR87 = VAR92[0];
                    VAR88 = VAR92[1];
                    assert(VAR87 >= -32 && VAR87 <= 31);
                    assert(VAR88 >= -32 && VAR88 <= 31);
                    assert(VAR89 >= -32 && VAR89 <= 31);
                    assert(VAR90 >= -32 && VAR90 <= 31);
                    FUN16(&VAR2->VAR26, VAR87 - VAR89, 1);
                    FUN16(&VAR2->VAR26, VAR88 - VAR90, 1);
                    VAR2->VAR81[5] = VAR2->VAR26.VAR75;
                    VAR71[1] += VAR18 * FUN9(&VAR2->VAR81[5]);
                    VAR91 = (VAR87 & 1) + 2 * (VAR88 & 1);
                    VAR2->VAR59.VAR93[0][VAR91](VAR73 + 16, VAR70 + (VAR87 >> 1) + VAR10 * (VAR88 >> 1), VAR10, 16);
                    VAR71[1] += FUN13(VAR2, VAR62 + 16 * VAR11, VAR73 + 16, VAR69, VAR10, 5, 64, VAR18, 0);
                    VAR72 = VAR71[1] <= VAR71[0];
                    VAR82 = VAR83[VAR94];
                    VAR71[2] = VAR2->VAR59.VAR95[0](NULL, VAR62 + 16 * VAR11, VAR70, VAR10, 16);
                    VAR71[2] += VAR82[1] * VAR18;
                    if (VAR71[2] < VAR71[VAR72] && VAR87 == 0 && VAR88 == 0)
                    {
                        VAR72 = 2;
                        VAR2->VAR59.VAR93[0][0](VAR69, VAR70, VAR10, 16);
                        for (VAR13 = 0; VAR13 < 6; VAR13++)
                        {
                            VAR67[2][VAR13] = 0;
                        }
                        FUN12(&VAR2->VAR75, VAR82[1], VAR82[0]);
                    }
                }
                if (VAR72 == 1)
                {
                    for (VAR13 = 0; VAR13 < 6; VAR13++)
                    {
                        VAR67[1][VAR13] = FUN9(&VAR2->VAR81[VAR13]);
                        FUN14(&VAR2->VAR81[VAR13]);
                    }
                }
                else
                {
                    VAR92[0] = VAR92[1] = VAR92[2] = VAR92[3] = VAR92[0 + 2 * VAR2->VAR26.VAR38] = VAR92[1 + 2 * VAR2->VAR26.VAR38] = VAR92[2 + 2 * VAR2->VAR26.VAR38] = VAR92[3 + 2 * VAR2->VAR26.VAR38] = 0;
                }
            }
            VAR2->VAR96 += VAR71[VAR72];
            for (VAR13 = 5; VAR13 >= 0; VAR13--)
            {
                FUN17(&VAR2->VAR75, VAR66[VAR72][VAR13], VAR67[VAR72][VAR13]);
            }
            if (VAR72 == 0)
            {
                VAR2->VAR59.VAR93[0][0](VAR69, VAR73, VAR10, 16);
            }
        }
        VAR2->VAR26.VAR61 = 0;
    }
    return 0;
}