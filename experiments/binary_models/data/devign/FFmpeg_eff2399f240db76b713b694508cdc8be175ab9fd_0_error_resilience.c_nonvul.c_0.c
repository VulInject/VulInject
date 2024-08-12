static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5 * VAR2->VAR6);
    const int VAR5 = VAR2->VAR5;
    const int VAR7 = VAR2->VAR7;
    const int VAR6 = VAR2->VAR6;
    int VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    FUN3(VAR2, &VAR13, &VAR14);
    VAR10 = 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
    {
        const int VAR16 = VAR2->VAR17[VAR8];
        int VAR18 = 0;
        int VAR19 = VAR2->VAR20[VAR16];
        if (FUN4(VAR2->VAR21.VAR18.VAR22[VAR16]))
            VAR18 = VAR23;
        if (!(VAR19 & VAR24))
            VAR18 = VAR23;
        VAR4[VAR16] = VAR18;
        if (VAR18 == VAR23)
            VAR10++;
        else if (VAR2->VAR25.VAR18.VAR26[0] && VAR2->VAR25.VAR18.VAR27[0])
        {
            const int VAR12 = VAR16 / VAR2->VAR5;
            const int VAR11 = VAR16 % VAR2->VAR5;
            const int VAR28 = (VAR11 + VAR12 * VAR14) * VAR13;
            VAR2->VAR21.VAR18.VAR27[0][VAR28][0] = VAR2->VAR25.VAR18.VAR27[0][VAR28][0];
            VAR2->VAR21.VAR18.VAR27[0][VAR28][1] = VAR2->VAR25.VAR18.VAR27[0][VAR28][1];
            VAR2->VAR21.VAR18.VAR29[0][4 * VAR16] = VAR2->VAR25.VAR18.VAR29[0][4 * VAR16];
        }
    }
    if ((!(VAR2->VAR30->VAR31 & VAR32)) || VAR10 <= VAR7 / 2)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR6; VAR12++)
        {
            for (VAR11 = 0; VAR11 < VAR2->VAR7; VAR11++)
            {
                const int VAR16 = VAR11 + VAR12 * VAR2->VAR5;
                if (FUN4(VAR2->VAR21.VAR18.VAR22[VAR16]))
                    continue;
                if (!(VAR2->VAR20[VAR16] & VAR24))
                    continue;
                VAR2->VAR33 = VAR2->VAR25.VAR18.VAR26[0] ? VAR34 : VAR35;
                VAR2->VAR36 = 0;
                VAR2->VAR37 = VAR38;
                VAR2->VAR39 = 0;
                VAR2->VAR40.FUN5(VAR2->VAR41[0]);
                VAR2->VAR11 = VAR11;
                VAR2->VAR12 = VAR12;
                VAR2->VAR42[0][0][0] = 0;
                VAR2->VAR42[0][0][1] = 0;
                FUN6(VAR2, 0);
            }
        }
        goto VAR43;
    }
    for (VAR9 = 0;; VAR9++)
    {
        int VAR44, VAR45, VAR46;
        VAR46 = 1;
        VAR44 = 1;
        for (VAR45 = 0; (VAR44 || VAR45 < 2) && VAR45 < 10; VAR45++)
        {
            int VAR11, VAR12;
            int VAR47 = 0;
            VAR44 = 0;
            for (VAR12 = 0; VAR12 < VAR2->VAR6; VAR12++)
            {
                for (VAR11 = 0; VAR11 < VAR2->VAR7; VAR11++)
                {
                    const int VAR16 = VAR11 + VAR12 * VAR2->VAR5;
                    int VAR48[8][2] = {{0}};
                    int VAR49[8] = {0};
                    int VAR50 = 0;
                    int VAR51;
                    int VAR52 = 256 * 256 * 256 * 64;
                    int VAR53 = 0;
                    const int VAR28 = (VAR11 + VAR12 * VAR14) * VAR13;
                    int VAR54, VAR55, VAR56;
                    if ((VAR11 ^ VAR12 ^ VAR45) & 1)
                        continue;
                    if (VAR4[VAR16] == VAR23)
                        continue;
                    assert(!FUN4(VAR2->VAR21.VAR18.VAR22[VAR16]));
                    assert(VAR2->VAR57 && VAR2->VAR57->VAR18.VAR26[0]);
                    VAR51 = 0;
                    if (VAR11 > 0 && VAR4[VAR16 - 1] == VAR23)
                        VAR51 = 1;
                    if (VAR11 + 1 < VAR7 && VAR4[VAR16 + 1] == VAR23)
                        VAR51 = 1;
                    if (VAR12 > 0 && VAR4[VAR16 - VAR5] == VAR23)
                        VAR51 = 1;
                    if (VAR12 + 1 < VAR6 && VAR4[VAR16 + VAR5] == VAR23)
                        VAR51 = 1;
                    if (VAR51 == 0)
                        continue;
                    VAR51 = 0;
                    if (VAR11 > 0 && VAR4[VAR16 - 1] == VAR58)
                        VAR51 = 1;
                    if (VAR11 + 1 < VAR7 && VAR4[VAR16 + 1] == VAR58)
                        VAR51 = 1;
                    if (VAR12 > 0 && VAR4[VAR16 - VAR5] == VAR58)
                        VAR51 = 1;
                    if (VAR12 + 1 < VAR6 && VAR4[VAR16 + VAR5] == VAR58)
                        VAR51 = 1;
                    if (VAR51 == 0 && VAR45 > 1)
                        continue;
                    VAR46 = 0;
                    if (VAR11 > 0 && VAR4[VAR16 - 1])
                    {
                        VAR48[VAR50][0] = VAR2->VAR21.VAR18.VAR27[0][VAR28 - VAR13][0];
                        VAR48[VAR50][1] = VAR2->VAR21.VAR18.VAR27[0][VAR28 - VAR13][1];
                        VAR49[VAR50] = VAR2->VAR21.VAR18.VAR29[0][4 * (VAR16 - 1)];
                        VAR50++;
                    }
                    if (VAR11 + 1 < VAR7 && VAR4[VAR16 + 1])
                    {
                        VAR48[VAR50][0] = VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR13][0];
                        VAR48[VAR50][1] = VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR13][1];
                        VAR49[VAR50] = VAR2->VAR21.VAR18.VAR29[0][4 * (VAR16 + 1)];
                        VAR50++;
                    }
                    if (VAR12 > 0 && VAR4[VAR16 - VAR5])
                    {
                        VAR48[VAR50][0] = VAR2->VAR21.VAR18.VAR27[0][VAR28 - VAR14 * VAR13][0];
                        VAR48[VAR50][1] = VAR2->VAR21.VAR18.VAR27[0][VAR28 - VAR14 * VAR13][1];
                        VAR49[VAR50] = VAR2->VAR21.VAR18.VAR29[0][4 * (VAR16 - VAR2->VAR5)];
                        VAR50++;
                    }
                    if (VAR12 + 1 < VAR6 && VAR4[VAR16 + VAR5])
                    {
                        VAR48[VAR50][0] = VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR14 * VAR13][0];
                        VAR48[VAR50][1] = VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR14 * VAR13][1];
                        VAR49[VAR50] = VAR2->VAR21.VAR18.VAR29[0][4 * (VAR16 + VAR2->VAR5)];
                        VAR50++;
                    }
                    if (VAR50 == 0)
                        continue;
                    if (VAR50 > 1)
                    {
                        int VAR59 = 0, VAR60 = 0, VAR61 = 0;
                        int VAR62, VAR63, VAR64, VAR65, VAR66, VAR67;
                        for (VAR51 = 0; VAR51 < VAR50; VAR51++)
                        {
                            VAR59 += VAR48[VAR51][0];
                            VAR60 += VAR48[VAR51][1];
                            VAR61 += VAR49[VAR51];
                            if (VAR51 && VAR49[VAR51] != VAR49[VAR51 - 1])
                                goto VAR68;
                        }
                        VAR48[VAR50][0] = VAR59 / VAR51;
                        VAR48[VAR50][1] = VAR60 / VAR51;
                        VAR49[VAR50] = VAR61 / VAR51;
                        if (VAR50 >= 3)
                        {
                            VAR65 = VAR64 = VAR67 = 99999;
                            VAR63 = VAR62 = VAR66 = -99999;
                        }
                        else
                        {
                            VAR64 = VAR65 = VAR62 = VAR63 = VAR67 = VAR66 = 0;
                        }
                        for (VAR51 = 0; VAR51 < VAR50; VAR51++)
                        {
                            VAR62 = FUN7(VAR62, VAR48[VAR51][0]);
                            VAR63 = FUN7(VAR63, VAR48[VAR51][1]);
                            VAR66 = FUN7(VAR66, VAR49[VAR51]);
                            VAR64 = FUN8(VAR64, VAR48[VAR51][0]);
                            VAR65 = FUN8(VAR65, VAR48[VAR51][1]);
                            VAR67 = FUN8(VAR67, VAR49[VAR51]);
                        }
                        VAR48[VAR50 + 1][0] = VAR59 - VAR62 - VAR64;
                        VAR48[VAR50 + 1][1] = VAR60 - VAR63 - VAR65;
                        VAR49[VAR50 + 1] = VAR61 - VAR66 - VAR67;
                        if (VAR50 == 4)
                        {
                            VAR48[VAR50 + 1][0] /= 2;
                            VAR48[VAR50 + 1][1] /= 2;
                            VAR49[VAR50 + 1] /= 2;
                        }
                        VAR50 += 2;
                    }
                VAR68:
                    VAR50++;
                    if (!VAR4[VAR16] && 0)
                    {
                        if (VAR2->VAR30->VAR69 == VAR70)
                        {
                        }
                        else
                        {
                            FUN9(&VAR2->VAR57->VAR18, VAR12, 0);
                        }
                        if (!VAR2->VAR25.VAR18.VAR27[0] || !VAR2->VAR25.VAR18.VAR29[0])
                            goto VAR71;
                        VAR54 = VAR2->VAR25.VAR18.VAR27[0][VAR28][0];
                        VAR55 = VAR2->VAR25.VAR18.VAR27[0][VAR28][1];
                        VAR56 = VAR2->VAR25.VAR18.VAR29[0][4 * VAR16];
                    }
                    else
                    {
                        VAR54 = VAR2->VAR21.VAR18.VAR27[0][VAR28][0];
                        VAR55 = VAR2->VAR21.VAR18.VAR27[0][VAR28][1];
                        VAR56 = VAR2->VAR21.VAR18.VAR29[0][4 * VAR16];
                    }
                    VAR48[VAR50][0] = VAR54;
                    VAR48[VAR50][1] = VAR55;
                    VAR49[VAR50] = VAR56;
                    VAR50++;
                VAR71:
                    VAR2->VAR33 = VAR34;
                    VAR2->VAR36 = 0;
                    VAR2->VAR37 = VAR38;
                    VAR2->VAR39 = 0;
                    VAR2->VAR40.FUN5(VAR2->VAR41[0]);
                    VAR2->VAR11 = VAR11;
                    VAR2->VAR12 = VAR12;
                    for (VAR51 = 0; VAR51 < VAR50; VAR51++)
                    {
                        int VAR72 = 0;
                        VAR3 *VAR73 = VAR2->VAR21.VAR18.VAR26[0] + VAR11 * 16 + VAR12 * 16 * VAR2->VAR74;
                        VAR2->VAR21.VAR18.VAR27[0][VAR28][0] = VAR2->VAR42[0][0][0] = VAR48[VAR51][0];
                        VAR2->VAR21.VAR18.VAR27[0][VAR28][1] = VAR2->VAR42[0][0][1] = VAR48[VAR51][1];
                        if (VAR49[VAR51] < 0)
                            continue;
                        FUN6(VAR2, VAR49[VAR51]);
                        if (VAR11 > 0 && VAR4[VAR16 - 1])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR72 += FUN10(VAR73[VAR75 * VAR2->VAR74 - 1] - VAR73[VAR75 * VAR2->VAR74]);
                        }
                        if (VAR11 + 1 < VAR7 && VAR4[VAR16 + 1])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR72 += FUN10(VAR73[VAR75 * VAR2->VAR74 + 15] - VAR73[VAR75 * VAR2->VAR74 + 16]);
                        }
                        if (VAR12 > 0 && VAR4[VAR16 - VAR5])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR72 += FUN10(VAR73[VAR75 - VAR2->VAR74] - VAR73[VAR75]);
                        }
                        if (VAR12 + 1 < VAR6 && VAR4[VAR16 + VAR5])
                        {
                            int VAR75;
                            for (VAR75 = 0; VAR75 < 16; VAR75++)
                                VAR72 += FUN10(VAR73[VAR75 + VAR2->VAR74 * 15] - VAR73[VAR75 + VAR2->VAR74 * 16]);
                        }
                        if (VAR72 <= VAR52)
                        {
                            VAR52 = VAR72;
                            VAR53 = VAR51;
                        }
                    }
                    VAR47 += VAR52;
                    VAR2->VAR42[0][0][0] = VAR48[VAR53][0];
                    VAR2->VAR42[0][0][1] = VAR48[VAR53][1];
                    for (VAR8 = 0; VAR8 < VAR13; VAR8++)
                        for (VAR51 = 0; VAR51 < VAR13; VAR51++)
                        {
                            VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR8 + VAR51 * VAR14][0] = VAR2->VAR42[0][0][0];
                            VAR2->VAR21.VAR18.VAR27[0][VAR28 + VAR8 + VAR51 * VAR14][1] = VAR2->VAR42[0][0][1];
                        }
                    FUN6(VAR2, VAR49[VAR53]);
                    if (VAR2->VAR42[0][0][0] != VAR54 || VAR2->VAR42[0][0][1] != VAR55)
                    {
                        VAR4[VAR16] = VAR58;
                        VAR44++;
                    }
                    else
                        VAR4[VAR16] = VAR76;
                }
            }
        }
        if (VAR46)
            goto VAR43;
        for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
        {
            int VAR16 = VAR2->VAR17[VAR8];
            if (VAR4[VAR16])
                VAR4[VAR16] = VAR23;
        }
    }
VAR43:
    FUN11(VAR4);
}