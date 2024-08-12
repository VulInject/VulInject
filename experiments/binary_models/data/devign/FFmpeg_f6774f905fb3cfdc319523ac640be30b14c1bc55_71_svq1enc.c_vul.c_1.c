static int FUN1(VAR1 *VAR2, int VAR3, unsigned char *VAR4, unsigned char *VAR5, unsigned char *VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    const VAR11 *VAR12 = VAR2->VAR13->VAR14;
    int VAR15, VAR16;
    int VAR17;
    int VAR18, VAR19;
    int VAR20;
    int VAR21[6];
    VAR22 *VAR23 = VAR2->VAR24 + VAR10 * 16;
    const int VAR25 = (VAR12->VAR26 * VAR12->VAR26) >> (2 * VAR27);
    VAR21[5] = VAR28;
    for (VAR20 = 4; VAR20 >= 0; VAR20--)
        VAR21[VAR20] = VAR21[VAR20 + 1] * VAR29;
    VAR18 = (VAR7 + 15) / 16;
    VAR19 = (VAR8 + 15) / 16;
    if (VAR12->VAR30 == VAR31)
    {
        VAR2->VAR32.VAR13 = VAR2->VAR13;
        VAR2->VAR32.VAR33 = &VAR2->VAR32.VAR34;
        VAR2->VAR32.VAR35 = &VAR2->VAR32.VAR36;
        VAR2->VAR32.VAR36.VAR12.VAR37[0] = VAR5;
        VAR2->VAR32.VAR38 = VAR2->VAR32.VAR36.VAR12.VAR38[0] = VAR2->VAR32.VAR39.VAR12.VAR38[0] = VAR2->VAR32.VAR34.VAR12.VAR38[0] = VAR10;
        VAR2->VAR32.VAR7 = VAR7;
        VAR2->VAR32.VAR8 = VAR8;
        VAR2->VAR32.VAR40 = VAR18;
        VAR2->VAR32.VAR41 = VAR19;
        VAR2->VAR32.VAR42 = VAR2->VAR32.VAR40 + 1;
        VAR2->VAR32.VAR43 = 2 * VAR2->VAR32.VAR40 + 1;
        VAR2->VAR32.VAR44 = 1;
        VAR2->VAR32.VAR30 = VAR12->VAR30;
        VAR2->VAR32.VAR45 = VAR2->VAR13->VAR45;
        VAR2->VAR32.VAR46.VAR47 = 0;
        VAR2->VAR32.VAR48 = VAR2->VAR13->VAR48;
        VAR2->VAR32.VAR25 = VAR12->VAR26;
        VAR2->VAR32.VAR49 = VAR2->VAR32.VAR25 * 139 + VAR50 * 64 >> VAR27 + 7;
        VAR2->VAR32.VAR51 = VAR2->VAR32.VAR25 * VAR2->VAR32.VAR25 + VAR50 / 2 >> VAR27;
        if (!VAR2->VAR52[VAR3])
        {
            VAR2->VAR52[VAR3] = FUN2((VAR2->VAR32.VAR43 * VAR19 * 2 + 2) * 2 * sizeof(VAR53));
            VAR2->VAR54[VAR3] = FUN2((VAR2->VAR32.VAR42 * (VAR19 + 2) + 1) * 2 * sizeof(VAR53));
        }
        VAR2->VAR32.VAR55 = VAR2->VAR55;
        VAR2->VAR32.VAR34.VAR56 = (VAR22 *)VAR2->VAR57;
        VAR2->VAR32.VAR34.VAR58 = (VAR59 *)VAR2->VAR57;
        VAR2->VAR32.VAR34.VAR60 = (VAR59 *)VAR2->VAR57;
        VAR2->VAR32.VAR34.VAR55 = VAR2->VAR57;
        VAR2->VAR32.VAR34.VAR61[0] = VAR2->VAR52[VAR3] + 2;
        VAR2->VAR32.VAR62 = VAR2->VAR54[VAR3] + VAR2->VAR32.VAR42 + 1;
        VAR2->VAR32.VAR63 = VAR2->VAR63;
        FUN3(&VAR2->VAR32);
        VAR2->VAR32.VAR46.VAR64 = VAR2->VAR13->VAR64;
        VAR2->VAR32.VAR65 = 1;
        for (VAR16 = 0; VAR16 < VAR19; VAR16++)
        {
            VAR2->VAR32.VAR39.VAR12.VAR37[0] = VAR23 - VAR16 * 16 * VAR10;
            VAR2->VAR32.VAR66 = VAR16;
            for (VAR17 = 0; VAR17 < 16 && VAR17 + 16 * VAR16 < VAR8; VAR17++)
            {
                memcpy(&VAR23[VAR17 * VAR10], &VAR4[(VAR17 + 16 * VAR16) * VAR9], VAR7);
                for (VAR15 = VAR7; VAR15 < 16 * VAR18; VAR15++)
                    VAR23[VAR17 * VAR10 + VAR15] = VAR23[VAR17 * VAR10 + VAR15 - 1];
            }
            for (; VAR17 < 16 && VAR17 + 16 * VAR16 < 16 * VAR19; VAR17++)
                memcpy(&VAR23[VAR17 * VAR10], &VAR23[(VAR17 - 1) * VAR10], 16 * VAR18);
            for (VAR15 = 0; VAR15 < VAR18; VAR15++)
            {
                VAR2->VAR32.VAR67 = VAR15;
                FUN4(&VAR2->VAR32);
                FUN5(&VAR2->VAR32);
                FUN6(&VAR2->VAR32, VAR15, VAR16);
            }
            VAR2->VAR32.VAR65 = 0;
        }
        FUN7(&VAR2->VAR32);
        FUN8(&VAR2->VAR32, NULL, 0, VAR2->VAR32.VAR62, VAR2->VAR32.VAR44, VAR68, 0);
    }
    VAR2->VAR32.VAR65 = 1;
    for (VAR16 = 0; VAR16 < VAR19; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 16 && VAR17 + 16 * VAR16 < VAR8; VAR17++)
        {
            memcpy(&VAR23[VAR17 * VAR10], &VAR4[(VAR17 + 16 * VAR16) * VAR9], VAR7);
            for (VAR15 = VAR7; VAR15 < 16 * VAR18; VAR15++)
                VAR23[VAR17 * VAR10 + VAR15] = VAR23[VAR17 * VAR10 + VAR15 - 1];
        }
        for (; VAR17 < 16 && VAR17 + 16 * VAR16 < 16 * VAR19; VAR17++)
            memcpy(&VAR23[VAR17 * VAR10], &VAR23[(VAR17 - 1) * VAR10], 16 * VAR18);
        VAR2->VAR32.VAR66 = VAR16;
        for (VAR15 = 0; VAR15 < VAR18; VAR15++)
        {
            uint8_t VAR69[3][6][7 * 32];
            int VAR70[3][6];
            int VAR71 = VAR16 * 16 * VAR10 + VAR15 * 16;
            VAR22 *VAR72 = VAR6 + VAR71;
            VAR22 *VAR73 = VAR5 + VAR71;
            int VAR74[4] = {0, 0, 0, 0}, VAR75;
            VAR22 *VAR76 = VAR2->VAR24;
            if (VAR2->VAR77.VAR78 - VAR2->VAR77.VAR79 - (FUN9(&VAR2->VAR77) >> 3) < 3000)
            {
                FUN10(VAR2->VAR13, VAR80, "");
                return -1;
            }
            VAR2->VAR32.VAR67 = VAR15;
            FUN4(&VAR2->VAR32);
            FUN5(&VAR2->VAR32);
            if (VAR12->VAR30 == VAR81 || (VAR2->VAR32.VAR55[VAR15 + VAR16 * VAR2->VAR32.VAR42] & VAR82))
            {
                for (VAR17 = 0; VAR17 < 6; VAR17++)
                    FUN11(&VAR2->VAR83[VAR17], VAR69[0][VAR17], 7 * 32);
                if (VAR12->VAR30 == VAR31)
                {
                    const VAR22 *VAR84 = VAR85[VAR86];
                    FUN12(&VAR2->VAR83[5], VAR84[1], VAR84[0]);
                    VAR74[0] = VAR84[1] * VAR25;
                }
                VAR74[0] += FUN13(VAR2, VAR23 + 16 * VAR15, NULL, VAR76, VAR10, 5, 64, VAR25, 1);
                for (VAR17 = 0; VAR17 < 6; VAR17++)
                {
                    VAR70[0][VAR17] = FUN9(&VAR2->VAR83[VAR17]);
                    FUN14(&VAR2->VAR83[VAR17]);
                }
            }
            else
                VAR74[0] = VAR87;
            VAR75 = 0;
            if (VAR12->VAR30 == VAR31)
            {
                const VAR22 *VAR84 = VAR85[VAR88];
                int VAR89, VAR90, VAR91, VAR92, VAR93;
                VAR53 *VAR94;
                VAR94 = FUN15(&VAR2->VAR32, 0, 0, &VAR91, &VAR92);
                if (VAR2->VAR32.VAR55[VAR15 + VAR16 * VAR2->VAR32.VAR42] & VAR68)
                {
                    for (VAR17 = 0; VAR17 < 6; VAR17++)
                        FUN11(&VAR2->VAR83[VAR17], VAR69[1][VAR17], 7 * 32);
                    FUN12(&VAR2->VAR83[5], VAR84[1], VAR84[0]);
                    VAR2->VAR32.VAR77 = VAR2->VAR83[5];
                    VAR89 = VAR94[0];
                    VAR90 = VAR94[1];
                    assert(VAR89 >= -32 && VAR89 <= 31);
                    assert(VAR90 >= -32 && VAR90 <= 31);
                    assert(VAR91 >= -32 && VAR91 <= 31);
                    assert(VAR92 >= -32 && VAR92 <= 31);
                    FUN16(&VAR2->VAR32, VAR89 - VAR91, 1);
                    FUN16(&VAR2->VAR32, VAR90 - VAR92, 1);
                    VAR2->VAR83[5] = VAR2->VAR32.VAR77;
                    VAR74[1] += VAR25 * FUN9(&VAR2->VAR83[5]);
                    VAR93 = (VAR89 & 1) + 2 * (VAR90 & 1);
                    VAR2->VAR95.VAR96[0][VAR93](VAR76 + 16, VAR73 + (VAR89 >> 1) + VAR10 * (VAR90 >> 1), VAR10, 16);
                    VAR74[1] += FUN13(VAR2, VAR23 + 16 * VAR15, VAR76 + 16, VAR72, VAR10, 5, 64, VAR25, 0);
                    VAR75 = VAR74[1] <= VAR74[0];
                    VAR84 = VAR85[VAR97];
                    VAR74[2] = VAR2->VAR63.VAR98[0](NULL, VAR23 + 16 * VAR15, VAR73, VAR10, 16);
                    VAR74[2] += VAR84[1] * VAR25;
                    if (VAR74[2] < VAR74[VAR75] && VAR89 == 0 && VAR90 == 0)
                    {
                        VAR75 = 2;
                        VAR2->VAR95.VAR96[0][0](VAR72, VAR73, VAR10, 16);
                        for (VAR17 = 0; VAR17 < 6; VAR17++)
                            VAR70[2][VAR17] = 0;
                        FUN12(&VAR2->VAR77, VAR84[1], VAR84[0]);
                    }
                }
                if (VAR75 == 1)
                {
                    for (VAR17 = 0; VAR17 < 6; VAR17++)
                    {
                        VAR70[1][VAR17] = FUN9(&VAR2->VAR83[VAR17]);
                        FUN14(&VAR2->VAR83[VAR17]);
                    }
                }
                else
                {
                    VAR94[0] = VAR94[1] = VAR94[2] = VAR94[3] = VAR94[0 + 2 * VAR2->VAR32.VAR43] = VAR94[1 + 2 * VAR2->VAR32.VAR43] = VAR94[2 + 2 * VAR2->VAR32.VAR43] = VAR94[3 + 2 * VAR2->VAR32.VAR43] = 0;
                }
            }
            VAR2->VAR99 += VAR74[VAR75];
            for (VAR17 = 5; VAR17 >= 0; VAR17--)
                FUN17(&VAR2->VAR77, VAR69[VAR75][VAR17], VAR70[VAR75][VAR17]);
            if (VAR75 == 0)
                VAR2->VAR95.VAR96[0][0](VAR72, VAR76, VAR10, 16);
        }
        VAR2->VAR32.VAR65 = 0;
    }
    return 0;
}