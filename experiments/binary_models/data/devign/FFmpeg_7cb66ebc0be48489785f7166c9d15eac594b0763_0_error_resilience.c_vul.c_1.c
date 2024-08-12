static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    const int VAR7 = VAR2->VAR7;
    const int VAR8 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    FUN2(VAR2, &VAR14, &VAR15);
    VAR11 = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        const int VAR17 = VAR2->VAR18[VAR9];
        int VAR19 = 0;
        int VAR20 = VAR2->VAR21[VAR17];
        if (FUN3(VAR2->VAR22.VAR23[VAR17]))
            VAR19 = VAR24;
        if (!(VAR20 & VAR25))
            VAR19 = VAR24;
        VAR4[VAR17] = VAR19;
        if (VAR19 == VAR24)
            VAR11++;
    }
    if ((!(VAR2->VAR26->VAR27 & VAR28)) || VAR11 <= VAR7 / 2)
    {
        for (VAR13 = 0; VAR13 < VAR2->VAR8; VAR13++)
        {
            for (VAR12 = 0; VAR12 < VAR2->VAR7; VAR12++)
            {
                const int VAR17 = VAR12 + VAR13 * VAR2->VAR6;
                int VAR29 = (VAR2->VAR30.VAR19 && VAR2->VAR30.VAR19->VAR31[0]) ? VAR32 : VAR33;
                if (FUN3(VAR2->VAR22.VAR23[VAR17]))
                    continue;
                if (!(VAR2->VAR21[VAR17] & VAR25))
                    continue;
                VAR2->VAR34[0][0][0] = 0;
                VAR2->VAR34[0][0][1] = 0;
                VAR2->FUN4(VAR2->VAR35, 0, VAR29, VAR36, &VAR2->VAR34, VAR12, VAR13, 0, 0);
            }
        }
        return;
    }
    for (VAR10 = 0;; VAR10++)
    {
        int VAR37, VAR38, VAR39;
        VAR39 = 1;
        VAR37 = 1;
        for (VAR38 = 0; (VAR37 || VAR38 < 2) && VAR38 < 10; VAR38++)
        {
            int VAR12, VAR13;
            int VAR40 = 0;
            VAR37 = 0;
            for (VAR13 = 0; VAR13 < VAR2->VAR8; VAR13++)
            {
                for (VAR12 = 0; VAR12 < VAR2->VAR7; VAR12++)
                {
                    const int VAR17 = VAR12 + VAR13 * VAR2->VAR6;
                    int VAR41[8][2] = {{0}};
                    int VAR42[8] = {0};
                    int VAR43 = 0;
                    int VAR44;
                    int VAR45 = 256 * 256 * 256 * 64;
                    int VAR46 = 0;
                    const int VAR47 = (VAR12 + VAR13 * VAR15) * VAR14;
                    int VAR48, VAR49, VAR50;
                    if ((VAR12 ^ VAR13 ^ VAR38) & 1)
                        continue;
                    if (VAR4[VAR17] == VAR24)
                        continue;
                    assert(!FUN3(VAR2->VAR22.VAR23[VAR17]));
                    assert(VAR2->VAR30 && VAR2->VAR30.VAR19->VAR31[0]);
                    VAR44 = 0;
                    if (VAR12 > 0 && VAR4[VAR17 - 1] == VAR24)
                        VAR44 = 1;
                    if (VAR12 + 1 < VAR7 && VAR4[VAR17 + 1] == VAR24)
                        VAR44 = 1;
                    if (VAR13 > 0 && VAR4[VAR17 - VAR6] == VAR24)
                        VAR44 = 1;
                    if (VAR13 + 1 < VAR8 && VAR4[VAR17 + VAR6] == VAR24)
                        VAR44 = 1;
                    if (VAR44 == 0)
                        continue;
                    VAR44 = 0;
                    if (VAR12 > 0 && VAR4[VAR17 - 1] == VAR51)
                        VAR44 = 1;
                    if (VAR12 + 1 < VAR7 && VAR4[VAR17 + 1] == VAR51)
                        VAR44 = 1;
                    if (VAR13 > 0 && VAR4[VAR17 - VAR6] == VAR51)
                        VAR44 = 1;
                    if (VAR13 + 1 < VAR8 && VAR4[VAR17 + VAR6] == VAR51)
                        VAR44 = 1;
                    if (VAR44 == 0 && VAR38 > 1)
                        continue;
                    VAR39 = 0;
                    if (VAR12 > 0 && VAR4[VAR17 - 1])
                    {
                        VAR41[VAR43][0] = VAR2->VAR22.VAR52[0][VAR47 - VAR14][0];
                        VAR41[VAR43][1] = VAR2->VAR22.VAR52[0][VAR47 - VAR14][1];
                        VAR42[VAR43] = VAR2->VAR22.VAR53[0][4 * (VAR17 - 1)];
                        VAR43++;
                    }
                    if (VAR12 + 1 < VAR7 && VAR4[VAR17 + 1])
                    {
                        VAR41[VAR43][0] = VAR2->VAR22.VAR52[0][VAR47 + VAR14][0];
                        VAR41[VAR43][1] = VAR2->VAR22.VAR52[0][VAR47 + VAR14][1];
                        VAR42[VAR43] = VAR2->VAR22.VAR53[0][4 * (VAR17 + 1)];
                        VAR43++;
                    }
                    if (VAR13 > 0 && VAR4[VAR17 - VAR6])
                    {
                        VAR41[VAR43][0] = VAR2->VAR22.VAR52[0][VAR47 - VAR15 * VAR14][0];
                        VAR41[VAR43][1] = VAR2->VAR22.VAR52[0][VAR47 - VAR15 * VAR14][1];
                        VAR42[VAR43] = VAR2->VAR22.VAR53[0][4 * (VAR17 - VAR2->VAR6)];
                        VAR43++;
                    }
                    if (VAR13 + 1 < VAR8 && VAR4[VAR17 + VAR6])
                    {
                        VAR41[VAR43][0] = VAR2->VAR22.VAR52[0][VAR47 + VAR15 * VAR14][0];
                        VAR41[VAR43][1] = VAR2->VAR22.VAR52[0][VAR47 + VAR15 * VAR14][1];
                        VAR42[VAR43] = VAR2->VAR22.VAR53[0][4 * (VAR17 + VAR2->VAR6)];
                        VAR43++;
                    }
                    if (VAR43 == 0)
                        continue;
                    if (VAR43 > 1)
                    {
                        int VAR54 = 0, VAR55 = 0, VAR56 = 0;
                        int VAR57, VAR58, VAR59, VAR60, VAR61, VAR62;
                        for (VAR44 = 0; VAR44 < VAR43; VAR44++)
                        {
                            VAR54 += VAR41[VAR44][0];
                            VAR55 += VAR41[VAR44][1];
                            VAR56 += VAR42[VAR44];
                            if (VAR44 && VAR42[VAR44] != VAR42[VAR44 - 1])
                                goto VAR63;
                        }
                        VAR41[VAR43][0] = VAR54 / VAR44;
                        VAR41[VAR43][1] = VAR55 / VAR44;
                        VAR42[VAR43] = VAR56 / VAR44;
                        if (VAR43 >= 3)
                        {
                            VAR60 = VAR59 = VAR62 = 99999;
                            VAR58 = VAR57 = VAR61 = -99999;
                        }
                        else
                        {
                            VAR59 = VAR60 = VAR57 = VAR58 = VAR62 = VAR61 = 0;
                        }
                        for (VAR44 = 0; VAR44 < VAR43; VAR44++)
                        {
                            VAR57 = FUN5(VAR57, VAR41[VAR44][0]);
                            VAR58 = FUN5(VAR58, VAR41[VAR44][1]);
                            VAR61 = FUN5(VAR61, VAR42[VAR44]);
                            VAR59 = FUN6(VAR59, VAR41[VAR44][0]);
                            VAR60 = FUN6(VAR60, VAR41[VAR44][1]);
                            VAR62 = FUN6(VAR62, VAR42[VAR44]);
                        }
                        VAR41[VAR43 + 1][0] = VAR54 - VAR57 - VAR59;
                        VAR41[VAR43 + 1][1] = VAR55 - VAR58 - VAR60;
                        VAR42[VAR43 + 1] = VAR56 - VAR61 - VAR62;
                        if (VAR43 == 4)
                        {
                            VAR41[VAR43 + 1][0] /= 2;
                            VAR41[VAR43 + 1][1] /= 2;
                            VAR42[VAR43 + 1] /= 2;
                        }
                        VAR43 += 2;
                    }
                VAR63:
                    VAR43++;
                    if (!VAR4[VAR17])
                    {
                        if (VAR2->VAR26->VAR64 == VAR65)
                        {
                        }
                        else
                        {
                            FUN7(VAR2->VAR30.VAR66, VAR13, 0);
                        }
                        if (!VAR2->VAR30.VAR52[0] || !VAR2->VAR30.VAR53[0])
                            goto VAR67;
                        VAR48 = VAR2->VAR30.VAR52[0][VAR47][0];
                        VAR49 = VAR2->VAR30.VAR52[0][VAR47][1];
                        VAR50 = VAR2->VAR30.VAR53[0][4 * VAR17];
                    }
                    else
                    {
                        VAR48 = VAR2->VAR22.VAR52[0][VAR47][0];
                        VAR49 = VAR2->VAR22.VAR52[0][VAR47][1];
                        VAR50 = VAR2->VAR22.VAR53[0][4 * VAR17];
                    }
                    VAR41[VAR43][0] = VAR48;
                    VAR41[VAR43][1] = VAR49;
                    VAR42[VAR43] = VAR50;
                    VAR43++;
                VAR67:
                    for (VAR44 = 0; VAR44 < VAR43; VAR44++)
                    {
                        int *VAR68 = VAR2->VAR22.VAR19->VAR68;
                        int VAR69 = 0;
                        VAR3 *VAR70 = VAR2->VAR22.VAR19->VAR31[0] + VAR12 * 16 + VAR13 * 16 * VAR68[0];
                        VAR2->VAR22.VAR52[0][VAR47][0] = VAR2->VAR34[0][0][0] = VAR41[VAR44][0];
                        VAR2->VAR22.VAR52[0][VAR47][1] = VAR2->VAR34[0][0][1] = VAR41[VAR44][1];
                        if (VAR42[VAR44] < 0)
                            continue;
                        VAR2->FUN4(VAR2->VAR35, VAR42[VAR44], VAR32, VAR36, &VAR2->VAR34, VAR12, VAR13, 0, 0);
                        if (VAR12 > 0 && VAR4[VAR17 - 1])
                        {
                            int VAR71;
                            for (VAR71 = 0; VAR71 < 16; VAR71++)
                                VAR69 += FUN8(VAR70[VAR71 * VAR68[0] - 1] - VAR70[VAR71 * VAR68[0]]);
                        }
                        if (VAR12 + 1 < VAR7 && VAR4[VAR17 + 1])
                        {
                            int VAR71;
                            for (VAR71 = 0; VAR71 < 16; VAR71++)
                                VAR69 += FUN8(VAR70[VAR71 * VAR68[0] + 15] - VAR70[VAR71 * VAR68[0] + 16]);
                        }
                        if (VAR13 > 0 && VAR4[VAR17 - VAR6])
                        {
                            int VAR71;
                            for (VAR71 = 0; VAR71 < 16; VAR71++)
                                VAR69 += FUN8(VAR70[VAR71 - VAR68[0]] - VAR70[VAR71]);
                        }
                        if (VAR13 + 1 < VAR8 && VAR4[VAR17 + VAR6])
                        {
                            int VAR71;
                            for (VAR71 = 0; VAR71 < 16; VAR71++)
                                VAR69 += FUN8(VAR70[VAR71 + VAR68[0] * 15] - VAR70[VAR71 + VAR68[0] * 16]);
                        }
                        if (VAR69 <= VAR45)
                        {
                            VAR45 = VAR69;
                            VAR46 = VAR44;
                        }
                    }
                    VAR40 += VAR45;
                    VAR2->VAR34[0][0][0] = VAR41[VAR46][0];
                    VAR2->VAR34[0][0][1] = VAR41[VAR46][1];
                    for (VAR9 = 0; VAR9 < VAR14; VAR9++)
                        for (VAR44 = 0; VAR44 < VAR14; VAR44++)
                        {
                            VAR2->VAR22.VAR52[0][VAR47 + VAR9 + VAR44 * VAR15][0] = VAR2->VAR34[0][0][0];
                            VAR2->VAR22.VAR52[0][VAR47 + VAR9 + VAR44 * VAR15][1] = VAR2->VAR34[0][0][1];
                        }
                    VAR2->FUN4(VAR2->VAR35, VAR42[VAR46], VAR32, VAR36, &VAR2->VAR34, VAR12, VAR13, 0, 0);
                    if (VAR2->VAR34[0][0][0] != VAR48 || VAR2->VAR34[0][0][1] != VAR49)
                    {
                        VAR4[VAR17] = VAR51;
                        VAR37++;
                    }
                    else
                        VAR4[VAR17] = VAR72;
                }
            }
        }
        if (VAR39)
            return;
        for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
        {
            int VAR17 = VAR2->VAR18[VAR9];
            if (VAR4[VAR17])
                VAR4[VAR17] = VAR24;
        }
    }
}