static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[VAR2->VAR4 * VAR2->VAR5];
    const int VAR4 = VAR2->VAR4;
    const int VAR6 = VAR2->VAR6;
    const int VAR5 = VAR2->VAR5;
    int VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    FUN2(VAR2, &VAR12, &VAR13);
    VAR9 = 0;
    for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
    {
        const int VAR15 = VAR2->VAR16[VAR7];
        int VAR17 = 0;
        int VAR18 = VAR2->VAR19[VAR15];
        if (FUN3(VAR2->VAR20.VAR21[VAR15]))
            VAR17 = VAR22;
        if (!(VAR18 & VAR23))
            VAR17 = VAR22;
        VAR3[VAR15] = VAR17;
        if (VAR17 == VAR22)
            VAR9++;
    }
    if ((!(VAR2->VAR24->VAR25 & VAR26)) || VAR9 <= VAR6 / 2)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR5; VAR11++)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR6; VAR10++)
            {
                const int VAR15 = VAR10 + VAR11 * VAR2->VAR4;
                if (FUN3(VAR2->VAR20.VAR21[VAR15]))
                    continue;
                if (!(VAR2->VAR19[VAR15] & VAR23))
                    continue;
                VAR2->VAR27 = VAR2->VAR28.VAR29[0] ? VAR30 : VAR31;
                VAR2->VAR32 = 0;
                VAR2->VAR33 = VAR34;
                VAR2->VAR35 = 0;
                VAR2->VAR36.FUN4(VAR2->VAR37[0]);
                VAR2->VAR10 = VAR10;
                VAR2->VAR11 = VAR11;
                VAR2->VAR38[0][0][0] = 0;
                VAR2->VAR38[0][0][1] = 0;
                FUN5(VAR2, 0);
            }
        }
        return;
    }
    for (VAR8 = 0;; VAR8++)
    {
        int VAR39, VAR40, VAR41;
        VAR41 = 1;
        VAR39 = 1;
        for (VAR40 = 0; (VAR39 || VAR40 < 2) && VAR40 < 10; VAR40++)
        {
            int VAR10, VAR11;
            int VAR42 = 0;
            VAR39 = 0;
            for (VAR11 = 0; VAR11 < VAR2->VAR5; VAR11++)
            {
                for (VAR10 = 0; VAR10 < VAR2->VAR6; VAR10++)
                {
                    const int VAR15 = VAR10 + VAR11 * VAR2->VAR4;
                    int VAR43[8][2] = {{0}};
                    int VAR44[8] = {0};
                    int VAR45 = 0;
                    int VAR46;
                    int VAR47 = 256 * 256 * 256 * 64;
                    int VAR48 = 0;
                    const int VAR49 = (VAR10 + VAR11 * VAR13) * VAR12;
                    int VAR50, VAR51, VAR52;
                    if ((VAR10 ^ VAR11 ^ VAR40) & 1)
                        continue;
                    if (VAR3[VAR15] == VAR22)
                        continue;
                    assert(!FUN3(VAR2->VAR20.VAR21[VAR15]));
                    assert(VAR2->VAR53 && VAR2->VAR53->VAR29[0]);
                    VAR46 = 0;
                    if (VAR10 > 0 && VAR3[VAR15 - 1] == VAR22)
                        VAR46 = 1;
                    if (VAR10 + 1 < VAR6 && VAR3[VAR15 + 1] == VAR22)
                        VAR46 = 1;
                    if (VAR11 > 0 && VAR3[VAR15 - VAR4] == VAR22)
                        VAR46 = 1;
                    if (VAR11 + 1 < VAR5 && VAR3[VAR15 + VAR4] == VAR22)
                        VAR46 = 1;
                    if (VAR46 == 0)
                        continue;
                    VAR46 = 0;
                    if (VAR10 > 0 && VAR3[VAR15 - 1] == VAR54)
                        VAR46 = 1;
                    if (VAR10 + 1 < VAR6 && VAR3[VAR15 + 1] == VAR54)
                        VAR46 = 1;
                    if (VAR11 > 0 && VAR3[VAR15 - VAR4] == VAR54)
                        VAR46 = 1;
                    if (VAR11 + 1 < VAR5 && VAR3[VAR15 + VAR4] == VAR54)
                        VAR46 = 1;
                    if (VAR46 == 0 && VAR40 > 1)
                        continue;
                    VAR41 = 0;
                    if (VAR10 > 0 && VAR3[VAR15 - 1])
                    {
                        VAR43[VAR45][0] = VAR2->VAR20.VAR55[0][VAR49 - VAR12][0];
                        VAR43[VAR45][1] = VAR2->VAR20.VAR55[0][VAR49 - VAR12][1];
                        VAR44[VAR45] = VAR2->VAR20.VAR56[0][4 * (VAR15 - 1)];
                        VAR45++;
                    }
                    if (VAR10 + 1 < VAR6 && VAR3[VAR15 + 1])
                    {
                        VAR43[VAR45][0] = VAR2->VAR20.VAR55[0][VAR49 + VAR12][0];
                        VAR43[VAR45][1] = VAR2->VAR20.VAR55[0][VAR49 + VAR12][1];
                        VAR44[VAR45] = VAR2->VAR20.VAR56[0][4 * (VAR15 + 1)];
                        VAR45++;
                    }
                    if (VAR11 > 0 && VAR3[VAR15 - VAR4])
                    {
                        VAR43[VAR45][0] = VAR2->VAR20.VAR55[0][VAR49 - VAR13 * VAR12][0];
                        VAR43[VAR45][1] = VAR2->VAR20.VAR55[0][VAR49 - VAR13 * VAR12][1];
                        VAR44[VAR45] = VAR2->VAR20.VAR56[0][4 * (VAR15 - VAR2->VAR4)];
                        VAR45++;
                    }
                    if (VAR11 + 1 < VAR5 && VAR3[VAR15 + VAR4])
                    {
                        VAR43[VAR45][0] = VAR2->VAR20.VAR55[0][VAR49 + VAR13 * VAR12][0];
                        VAR43[VAR45][1] = VAR2->VAR20.VAR55[0][VAR49 + VAR13 * VAR12][1];
                        VAR44[VAR45] = VAR2->VAR20.VAR56[0][4 * (VAR15 + VAR2->VAR4)];
                        VAR45++;
                    }
                    if (VAR45 == 0)
                        continue;
                    if (VAR45 > 1)
                    {
                        int VAR57 = 0, VAR58 = 0, VAR59 = 0;
                        int VAR60, VAR61, VAR62, VAR63, VAR64, VAR65;
                        for (VAR46 = 0; VAR46 < VAR45; VAR46++)
                        {
                            VAR57 += VAR43[VAR46][0];
                            VAR58 += VAR43[VAR46][1];
                            VAR59 += VAR44[VAR46];
                            if (VAR46 && VAR44[VAR46] != VAR44[VAR46 - 1])
                                goto VAR66;
                        }
                        VAR43[VAR45][0] = VAR57 / VAR46;
                        VAR43[VAR45][1] = VAR58 / VAR46;
                        VAR44[VAR45] = VAR59 / VAR46;
                        if (VAR45 >= 3)
                        {
                            VAR63 = VAR62 = VAR65 = 99999;
                            VAR61 = VAR60 = VAR64 = -99999;
                        }
                        else
                        {
                            VAR62 = VAR63 = VAR60 = VAR61 = VAR65 = VAR64 = 0;
                        }
                        for (VAR46 = 0; VAR46 < VAR45; VAR46++)
                        {
                            VAR60 = FUN6(VAR60, VAR43[VAR46][0]);
                            VAR61 = FUN6(VAR61, VAR43[VAR46][1]);
                            VAR64 = FUN6(VAR64, VAR44[VAR46]);
                            VAR62 = FUN7(VAR62, VAR43[VAR46][0]);
                            VAR63 = FUN7(VAR63, VAR43[VAR46][1]);
                            VAR65 = FUN7(VAR65, VAR44[VAR46]);
                        }
                        VAR43[VAR45 + 1][0] = VAR57 - VAR60 - VAR62;
                        VAR43[VAR45 + 1][1] = VAR58 - VAR61 - VAR63;
                        VAR44[VAR45 + 1] = VAR59 - VAR64 - VAR65;
                        if (VAR45 == 4)
                        {
                            VAR43[VAR45 + 1][0] /= 2;
                            VAR43[VAR45 + 1][1] /= 2;
                            VAR44[VAR45 + 1] /= 2;
                        }
                        VAR45 += 2;
                    }
                VAR66:
                    VAR45++;
                    if (!VAR3[VAR15])
                    {
                        if (VAR2->VAR24->VAR67 == VAR68)
                        {
                        }
                        else
                        {
                            FUN8((VAR69 *)VAR2->VAR53, VAR11, 0);
                        }
                        if (!VAR2->VAR28.VAR55[0] || !VAR2->VAR28.VAR56[0])
                            goto VAR70;
                        VAR50 = VAR2->VAR28.VAR55[0][VAR49][0];
                        VAR51 = VAR2->VAR28.VAR55[0][VAR49][1];
                        VAR52 = VAR2->VAR28.VAR56[0][4 * VAR15];
                    }
                    else
                    {
                        VAR50 = VAR2->VAR20.VAR55[0][VAR49][0];
                        VAR51 = VAR2->VAR20.VAR55[0][VAR49][1];
                        VAR52 = VAR2->VAR20.VAR56[0][4 * VAR15];
                    }
                    VAR43[VAR45][0] = VAR50;
                    VAR43[VAR45][1] = VAR51;
                    VAR44[VAR45] = VAR52;
                    VAR45++;
                    VAR2->VAR27 = VAR30;
                    VAR2->VAR32 = 0;
                    VAR2->VAR33 = VAR34;
                    VAR2->VAR35 = 0;
                    VAR2->VAR36.FUN4(VAR2->VAR37[0]);
                    VAR2->VAR10 = VAR10;
                    VAR2->VAR11 = VAR11;
                    for (VAR46 = 0; VAR46 < VAR45; VAR46++)
                    {
                        int VAR71 = 0;
                        VAR72 *VAR73 = VAR2->VAR20.VAR29[0] + VAR10 * 16 + VAR11 * 16 * VAR2->VAR74;
                        VAR2->VAR20.VAR55[0][VAR49][0] = VAR2->VAR38[0][0][0] = VAR43[VAR46][0];
                        VAR2->VAR20.VAR55[0][VAR49][1] = VAR2->VAR38[0][0][1] = VAR43[VAR46][1];
                        if (VAR44[VAR46] < 0)
                            continue;
                        FUN5(VAR2, VAR44[VAR46]);
                        if (VAR10 > 0 && VAR3[VAR15 - 1])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR71 += FUN9(VAR73[VAR75 * VAR2->VAR74 - 1] - VAR73[VAR75 * VAR2->VAR74]);
                        }
                        if (VAR10 + 1 < VAR6 && VAR3[VAR15 + 1])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR71 += FUN9(VAR73[VAR75 * VAR2->VAR74 + 15] - VAR73[VAR75 * VAR2->VAR74 + 16]);
                        }
                        if (VAR11 > 0 && VAR3[VAR15 - VAR4])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR71 += FUN9(VAR73[VAR75 - VAR2->VAR74] - VAR73[VAR75]);
                        }
                        if (VAR11 + 1 < VAR5 && VAR3[VAR15 + VAR4])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR71 += FUN9(VAR73[VAR75 + VAR2->VAR74 * 15] - VAR73[VAR75 + VAR2->VAR74 * 16]);
                        }
                        if (VAR71 <= VAR47)
                        {
                            VAR47 = VAR71;
                            VAR48 = VAR46;
                        }
                    }
                    VAR42 += VAR47;
                    VAR2->VAR38[0][0][0] = VAR43[VAR48][0];
                    VAR2->VAR38[0][0][1] = VAR43[VAR48][1];
                    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
                        for (VAR46 = 0; VAR46 < VAR12; VAR46++)
                        {
                            VAR2->VAR20.VAR55[0][VAR49 + VAR7 + VAR46 * VAR13][0] = VAR2->VAR38[0][0][0];
                            VAR2->VAR20.VAR55[0][VAR49 + VAR7 + VAR46 * VAR13][1] = VAR2->VAR38[0][0][1];
                        }
                    FUN5(VAR2, VAR44[VAR48]);
                    if (VAR2->VAR38[0][0][0] != VAR50 || VAR2->VAR38[0][0][1] != VAR51)
                    {
                        VAR3[VAR15] = VAR54;
                        VAR39++;
                    }
                    else
                        VAR3[VAR15] = VAR76;
                }
            }
        }
        if (VAR41)
            return;
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            int VAR15 = VAR2->VAR16[VAR7];
            if (VAR3[VAR15])
                VAR3[VAR15] = VAR22;
        }
    }