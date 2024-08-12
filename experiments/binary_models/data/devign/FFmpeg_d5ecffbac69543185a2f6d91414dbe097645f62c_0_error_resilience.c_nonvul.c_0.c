static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    const int VAR7 = VAR2->VAR7;
    int VAR8 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    if (VAR2->VAR16.VAR17 && VAR2->VAR16.VAR17->VAR18[0])
        VAR8 = FUN2(VAR8, (VAR2->VAR16.VAR17->VAR19 + 15) >> 4);
    if (VAR2->VAR20.VAR17 && VAR2->VAR20.VAR17->VAR18[0])
        VAR8 = FUN2(VAR8, (VAR2->VAR20.VAR17->VAR19 + 15) >> 4);
    FUN3(VAR2, &VAR14, &VAR15);
    VAR11 = 0;
    if (VAR2->VAR16.VAR21[0])
        FUN4(VAR2->VAR16.VAR22, VAR8 - 1, 0);
    for (VAR9 = 0; VAR9 < VAR7 * VAR8; VAR9++)
    {
        const int VAR23 = VAR2->VAR24[VAR9];
        int VAR17 = 0;
        int VAR25 = VAR2->VAR26[VAR23];
        if (FUN5(VAR2->VAR27.VAR28[VAR23]))
            VAR17 = VAR29;
        if (!(VAR25 & VAR30))
            VAR17 = VAR29;
        VAR4[VAR23] = VAR17;
        if (VAR17 == VAR29)
            VAR11++;
        else if (VAR2->VAR16.VAR17->VAR18[0] && VAR2->VAR16.VAR21[0])
        {
            const int VAR13 = VAR23 / VAR2->VAR6;
            const int VAR12 = VAR23 % VAR2->VAR6;
            const int VAR31 = (VAR12 + VAR13 * VAR15) * VAR14;
            VAR2->VAR27.VAR21[0][VAR31][0] = VAR2->VAR16.VAR21[0][VAR31][0];
            VAR2->VAR27.VAR21[0][VAR31][1] = VAR2->VAR16.VAR21[0][VAR31][1];
            VAR2->VAR27.VAR32[0][4 * VAR23] = VAR2->VAR16.VAR32[0][4 * VAR23];
        }
    }
    if ((!(VAR2->VAR33->VAR34 & VAR35)) || VAR11 <= VAR7 / 2)
    {
        for (VAR13 = 0; VAR13 < VAR8; VAR13++)
        {
            for (VAR12 = 0; VAR12 < VAR2->VAR7; VAR12++)
            {
                const int VAR23 = VAR12 + VAR13 * VAR2->VAR6;
                int VAR36 = (VAR2->VAR16.VAR17 && VAR2->VAR16.VAR17->VAR18[0]) ? VAR37 : VAR38;
                if (FUN5(VAR2->VAR27.VAR28[VAR23]))
                    continue;
                if (!(VAR2->VAR26[VAR23] & VAR30))
                    continue;
                VAR2->VAR39[0][0][0] = 0;
                VAR2->VAR39[0][0][1] = 0;
                VAR2->FUN6(VAR2->VAR40, 0, VAR36, VAR41, &VAR2->VAR39, VAR12, VAR13, 0, 0);
            }
        }
        return;
    }
    for (VAR10 = 0;; VAR10++)
    {
        int VAR42, VAR43, VAR44;
        VAR44 = 1;
        VAR42 = 1;
        for (VAR43 = 0; (VAR42 || VAR43 < 2) && VAR43 < 10; VAR43++)
        {
            int VAR12, VAR13;
            int VAR45 = 0;
            VAR42 = 0;
            for (VAR13 = 0; VAR13 < VAR8; VAR13++)
            {
                for (VAR12 = (VAR13 ^ VAR43) & 1; VAR12 < VAR2->VAR7; VAR12 += 2)
                {
                    const int VAR23 = VAR12 + VAR13 * VAR2->VAR6;
                    int VAR46[8][2] = {{0}};
                    int VAR47[8] = {0};
                    int VAR48 = 0;
                    int VAR49;
                    int VAR50 = 256 * 256 * 256 * 64;
                    int VAR51 = 0;
                    const int VAR31 = (VAR12 + VAR13 * VAR15) * VAR14;
                    int VAR52 = 0, VAR53 = 0, VAR54 = 0;
                    if (VAR4[VAR23] == VAR29)
                        continue;
                    FUN7(!FUN5(VAR2->VAR27.VAR28[VAR23]));
                    FUN7(VAR2->VAR16.VAR17 && VAR2->VAR16.VAR17->VAR18[0]);
                    VAR49 = 0;
                    if (VAR12 > 0)
                        VAR49 |= VAR4[VAR23 - 1];
                    if (VAR12 + 1 < VAR7)
                        VAR49 |= VAR4[VAR23 + 1];
                    if (VAR13 > 0)
                        VAR49 |= VAR4[VAR23 - VAR6];
                    if (VAR13 + 1 < VAR8)
                        VAR49 |= VAR4[VAR23 + VAR6];
                    if (!(VAR49 & VAR29))
                        continue;
                    if (!(VAR49 & VAR55) && VAR43 > 1)
                        continue;
                    VAR44 = 0;
                    if (VAR12 > 0 && VAR4[VAR23 - 1])
                    {
                        VAR46[VAR48][0] = VAR2->VAR27.VAR21[0][VAR31 - VAR14][0];
                        VAR46[VAR48][1] = VAR2->VAR27.VAR21[0][VAR31 - VAR14][1];
                        VAR47[VAR48] = VAR2->VAR27.VAR32[0][4 * (VAR23 - 1)];
                        VAR48++;
                    }
                    if (VAR12 + 1 < VAR7 && VAR4[VAR23 + 1])
                    {
                        VAR46[VAR48][0] = VAR2->VAR27.VAR21[0][VAR31 + VAR14][0];
                        VAR46[VAR48][1] = VAR2->VAR27.VAR21[0][VAR31 + VAR14][1];
                        VAR47[VAR48] = VAR2->VAR27.VAR32[0][4 * (VAR23 + 1)];
                        VAR48++;
                    }
                    if (VAR13 > 0 && VAR4[VAR23 - VAR6])
                    {
                        VAR46[VAR48][0] = VAR2->VAR27.VAR21[0][VAR31 - VAR15 * VAR14][0];
                        VAR46[VAR48][1] = VAR2->VAR27.VAR21[0][VAR31 - VAR15 * VAR14][1];
                        VAR47[VAR48] = VAR2->VAR27.VAR32[0][4 * (VAR23 - VAR2->VAR6)];
                        VAR48++;
                    }
                    if (VAR13 + 1 < VAR8 && VAR4[VAR23 + VAR6])
                    {
                        VAR46[VAR48][0] = VAR2->VAR27.VAR21[0][VAR31 + VAR15 * VAR14][0];
                        VAR46[VAR48][1] = VAR2->VAR27.VAR21[0][VAR31 + VAR15 * VAR14][1];
                        VAR47[VAR48] = VAR2->VAR27.VAR32[0][4 * (VAR23 + VAR2->VAR6)];
                        VAR48++;
                    }
                    if (VAR48 == 0)
                        continue;
                    if (VAR48 > 1)
                    {
                        int VAR56 = 0, VAR57 = 0, VAR58 = 0;
                        int VAR59, VAR60, VAR61, VAR62, VAR63, VAR64;
                        for (VAR49 = 0; VAR49 < VAR48; VAR49++)
                        {
                            VAR56 += VAR46[VAR49][0];
                            VAR57 += VAR46[VAR49][1];
                            VAR58 += VAR47[VAR49];
                            if (VAR49 && VAR47[VAR49] != VAR47[VAR49 - 1])
                                goto VAR65;
                        }
                        VAR46[VAR48][0] = VAR56 / VAR49;
                        VAR46[VAR48][1] = VAR57 / VAR49;
                        VAR47[VAR48] = VAR58 / VAR49;
                        if (VAR48 >= 3)
                        {
                            VAR62 = VAR61 = VAR64 = 99999;
                            VAR60 = VAR59 = VAR63 = -99999;
                        }
                        else
                        {
                            VAR61 = VAR62 = VAR59 = VAR60 = VAR64 = VAR63 = 0;
                        }
                        for (VAR49 = 0; VAR49 < VAR48; VAR49++)
                        {
                            VAR59 = FUN8(VAR59, VAR46[VAR49][0]);
                            VAR60 = FUN8(VAR60, VAR46[VAR49][1]);
                            VAR63 = FUN8(VAR63, VAR47[VAR49]);
                            VAR61 = FUN2(VAR61, VAR46[VAR49][0]);
                            VAR62 = FUN2(VAR62, VAR46[VAR49][1]);
                            VAR64 = FUN2(VAR64, VAR47[VAR49]);
                        }
                        VAR46[VAR48 + 1][0] = VAR56 - VAR59 - VAR61;
                        VAR46[VAR48 + 1][1] = VAR57 - VAR60 - VAR62;
                        VAR47[VAR48 + 1] = VAR58 - VAR63 - VAR64;
                        if (VAR48 == 4)
                        {
                            VAR46[VAR48 + 1][0] /= 2;
                            VAR46[VAR48 + 1][1] /= 2;
                            VAR47[VAR48 + 1] /= 2;
                        }
                        VAR48 += 2;
                    }
                VAR65:
                    VAR48++;
                    VAR52 = VAR2->VAR27.VAR21[0][VAR31][0];
                    VAR53 = VAR2->VAR27.VAR21[0][VAR31][1];
                    VAR54 = VAR2->VAR27.VAR32[0][4 * VAR23];
                    VAR46[VAR48][0] = VAR52;
                    VAR46[VAR48][1] = VAR53;
                    VAR47[VAR48] = VAR54;
                    VAR48++;
                    for (VAR49 = 0; VAR49 < VAR48; VAR49++)
                    {
                        int *VAR66 = VAR2->VAR27.VAR17->VAR66;
                        int VAR67 = 0;
                        VAR3 *VAR68 = VAR2->VAR27.VAR17->VAR18[0] + VAR12 * 16 + VAR13 * 16 * VAR66[0];
                        VAR2->VAR27.VAR21[0][VAR31][0] = VAR2->VAR39[0][0][0] = VAR46[VAR49][0];
                        VAR2->VAR27.VAR21[0][VAR31][1] = VAR2->VAR39[0][0][1] = VAR46[VAR49][1];
                        if (VAR47[VAR49] < 0)
                            continue;
                        VAR2->FUN6(VAR2->VAR40, VAR47[VAR49], VAR37, VAR41, &VAR2->VAR39, VAR12, VAR13, 0, 0);
                        if (VAR12 > 0 && VAR4[VAR23 - 1])
                        {
                            int VAR69;
                            for (VAR69 = 0; VAR69 < 16; VAR69++)
                                VAR67 += FUN9(VAR68[VAR69 * VAR66[0] - 1] - VAR68[VAR69 * VAR66[0]]);
                        }
                        if (VAR12 + 1 < VAR7 && VAR4[VAR23 + 1])
                        {
                            int VAR69;
                            for (VAR69 = 0; VAR69 < 16; VAR69++)
                                VAR67 += FUN9(VAR68[VAR69 * VAR66[0] + 15] - VAR68[VAR69 * VAR66[0] + 16]);
                        }
                        if (VAR13 > 0 && VAR4[VAR23 - VAR6])
                        {
                            int VAR69;
                            for (VAR69 = 0; VAR69 < 16; VAR69++)
                                VAR67 += FUN9(VAR68[VAR69 - VAR66[0]] - VAR68[VAR69]);
                        }
                        if (VAR13 + 1 < VAR8 && VAR4[VAR23 + VAR6])
                        {
                            int VAR69;
                            for (VAR69 = 0; VAR69 < 16; VAR69++)
                                VAR67 += FUN9(VAR68[VAR69 + VAR66[0] * 15] - VAR68[VAR69 + VAR66[0] * 16]);
                        }
                        if (VAR67 <= VAR50)
                        {
                            VAR50 = VAR67;
                            VAR51 = VAR49;
                        }
                    }
                    VAR45 += VAR50;
                    VAR2->VAR39[0][0][0] = VAR46[VAR51][0];
                    VAR2->VAR39[0][0][1] = VAR46[VAR51][1];
                    for (VAR9 = 0; VAR9 < VAR14; VAR9++)
                        for (VAR49 = 0; VAR49 < VAR14; VAR49++)
                        {
                            VAR2->VAR27.VAR21[0][VAR31 + VAR9 + VAR49 * VAR15][0] = VAR2->VAR39[0][0][0];
                            VAR2->VAR27.VAR21[0][VAR31 + VAR9 + VAR49 * VAR15][1] = VAR2->VAR39[0][0][1];
                        }
                    VAR2->FUN6(VAR2->VAR40, VAR47[VAR51], VAR37, VAR41, &VAR2->VAR39, VAR12, VAR13, 0, 0);
                    if (VAR2->VAR39[0][0][0] != VAR52 || VAR2->VAR39[0][0][1] != VAR53)
                    {
                        VAR4[VAR23] = VAR55;
                        VAR42++;
                    }
                    else
                        VAR4[VAR23] = VAR70;
                }
            }
        }
        if (VAR44)
            return;
        for (VAR9 = 0; VAR9 < VAR7 * VAR8; VAR9++)
        {
            int VAR23 = VAR2->VAR24[VAR9];
            if (VAR4[VAR23])
                VAR4[VAR23] = VAR29;
        }
    }
}