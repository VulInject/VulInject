void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12[4] = {100, 100, 100};
    int VAR13 = 50;
    int VAR14;
    int VAR15 = VAR2->VAR16 * 2 * VAR2->VAR17;
    VAR18 *VAR19 = VAR2->VAR20;
    if (!VAR2->VAR21 || VAR2->VAR22 == 0 || VAR2->VAR23->VAR24 || VAR2->VAR23->VAR25 || VAR2->VAR23->VAR26->VAR27 & VAR28 || VAR2->VAR22 == 3 * VAR2->VAR29 * (VAR2->VAR23->VAR30 + VAR2->VAR23->VAR31))
        return;
    if (VAR2->VAR32.VAR33[0] == NULL)
    {
        FUN2(VAR2->VAR23, VAR34, "");
        for (VAR3 = 0; VAR3 < 2; VAR3++)
        {
            VAR19->VAR35[VAR3] = FUN3(VAR15 * sizeof(VAR36));
            VAR19->VAR37[VAR3] = FUN3((VAR15 + 4) * 2 * sizeof(VAR38));
            VAR19->VAR33[VAR3] = VAR19->VAR37[VAR3] + 4;
        }
        VAR19->VAR39 = 3;
        VAR2->VAR32 = *VAR2->VAR20;
    }
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        if (VAR19->VAR35[VAR3])
            memset(VAR19->VAR35[VAR3], 0, VAR15 * sizeof(VAR36));
    }
    if (VAR2->VAR23->VAR40 & VAR41)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR29; VAR4++)
            {
                int VAR42 = VAR2->VAR43[VAR4 + VAR5 * VAR2->VAR44];
                FUN2(VAR2->VAR23, VAR45, "", VAR42);
            }
            FUN2(VAR2->VAR23, VAR45, "");
        }
    }
    for (VAR7 = 1; VAR7 <= 3; VAR7++)
    {
        int VAR46 = 0;
        for (VAR3 = VAR2->VAR47 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            int VAR6 = VAR2->VAR43[VAR48];
            if (VAR6 & (1 << VAR7))
                VAR46 = 1;
            if (VAR6 & (8 << VAR7))
                VAR46 = 1;
            if (!VAR46)
                VAR2->VAR43[VAR48] |= 1 << VAR7;
            if (VAR6 & VAR50)
                VAR46 = 0;
        }
    }
    if (VAR2->VAR51)
    {
        int VAR46 = 0;
        for (VAR3 = VAR2->VAR47 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            int VAR6 = VAR2->VAR43[VAR48];
            if (VAR6 & VAR52)
                VAR46 = 0;
            if ((VAR6 & VAR53) || (VAR6 & VAR54) || (VAR6 & VAR55))
                VAR46 = 1;
            if (!VAR46)
                VAR2->VAR43[VAR48] |= VAR55;
            if (VAR6 & VAR50)
                VAR46 = 0;
        }
    }
    if (VAR2->VAR21 >= 4)
    {
        int VAR46 = 1;
        for (VAR3 = VAR2->VAR47 - 2; VAR3 >= VAR2->VAR29 + 100; VAR3--)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            int VAR56 = VAR2->VAR43[VAR48];
            int VAR57 = VAR2->VAR43[VAR2->VAR49[VAR3 + 1]];
            if (VAR56 & VAR50)
                VAR46 = 1;
            if (VAR57 == (VAR50 | VAR58 | VAR55 | VAR59 | VAR52 | VAR54 | VAR53) && VAR56 != (VAR50 | VAR58 | VAR55 | VAR59 | VAR52 | VAR54 | VAR53) && ((VAR56 & VAR52) || (VAR56 & VAR54) || (VAR56 & VAR53)))
            {
                VAR46 = 0;
            }
            if (!VAR46)
                VAR2->VAR43[VAR48] |= VAR58 | VAR55 | VAR59;
        }
    }
    VAR11 = 9999999;
    for (VAR7 = 1; VAR7 <= 3; VAR7++)
    {
        for (VAR3 = VAR2->VAR47 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            int VAR6 = VAR2->VAR43[VAR48];
            if (!VAR2->VAR60[VAR48])
                VAR11++;
            if (VAR6 & (1 << VAR7))
                VAR11 = 0;
            if (VAR2->VAR51)
            {
                if (VAR11 < VAR12[VAR7 - 1])
                    VAR2->VAR43[VAR48] |= 1 << VAR7;
            }
            else
            {
                if (VAR11 < VAR13)
                    VAR2->VAR43[VAR48] |= 1 << VAR7;
            }
            if (VAR6 & VAR50)
                VAR11 = 9999999;
        }
    }
    VAR6 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
    {
        const int VAR48 = VAR2->VAR49[VAR3];
        int VAR61 = VAR2->VAR43[VAR48];
        if (VAR61 & VAR50)
            VAR6 = VAR61 & (VAR58 | VAR55 | VAR59);
        else
        {
            VAR6 |= VAR61 & (VAR58 | VAR55 | VAR59);
            VAR2->VAR43[VAR48] |= VAR6;
        }
    }
    if (!VAR2->VAR51)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            VAR6 = VAR2->VAR43[VAR48];
            if (VAR6 & (VAR55 | VAR58 | VAR59))
                VAR6 |= VAR55 | VAR58 | VAR59;
            VAR2->VAR43[VAR48] = VAR6;
        }
    }
    VAR8 = VAR10 = VAR9 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
    {
        const int VAR48 = VAR2->VAR49[VAR3];
        VAR6 = VAR2->VAR43[VAR48];
        if (VAR6 & VAR58)
            VAR8++;
        if (VAR6 & VAR55)
            VAR10++;
        if (VAR6 & VAR59)
            VAR9++;
    }
    FUN2(VAR2->VAR23, VAR62, "", VAR8, VAR10, VAR9);
    VAR14 = FUN4(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
    {
        const int VAR48 = VAR2->VAR49[VAR3];
        VAR6 = VAR2->VAR43[VAR48];
        if (!((VAR6 & VAR58) && (VAR6 & VAR59)))
            continue;
        if (VAR14)
            VAR2->VAR32.VAR63[VAR48] = VAR64;
        else
            VAR2->VAR32.VAR63[VAR48] = VAR65 | VAR66;
    }
    if (!VAR2->VAR67.VAR68[0] && !VAR2->VAR69.VAR68[0])
        for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
        {
            const int VAR48 = VAR2->VAR49[VAR3];
            if (!FUN5(VAR2->VAR32.VAR63[VAR48]))
                VAR2->VAR32.VAR63[VAR48] = VAR64;
        }
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR29; VAR4++)
        {
            const int VAR48 = VAR4 + VAR5 * VAR2->VAR44;
            const int VAR63 = VAR2->VAR32.VAR63[VAR48];
            int VAR70 = !VAR2->VAR67.VAR68[0];
            VAR6 = VAR2->VAR43[VAR48];
            if (FUN5(VAR63))
                continue;
            if (VAR6 & VAR59)
                continue;
            if (!(VAR6 & VAR55))
                continue;
            VAR2->VAR71 = VAR70 ? VAR72 : VAR73;
            VAR2->VAR74 = 0;
            VAR2->VAR75 = 0;
            if (FUN6(VAR63))
            {
                int VAR76 = VAR4 * 2 + VAR5 * 2 * VAR2->VAR16;
                int VAR77;
                VAR2->VAR78 = VAR79;
                for (VAR77 = 0; VAR77 < 4; VAR77++)
                {
                    VAR2->VAR80[0][VAR77][0] = VAR2->VAR32.VAR33[VAR70][VAR76 + (VAR77 & 1) + (VAR77 >> 1) * VAR2->VAR16][0];
                    VAR2->VAR80[0][VAR77][1] = VAR2->VAR32.VAR33[VAR70][VAR76 + (VAR77 & 1) + (VAR77 >> 1) * VAR2->VAR16][1];
                }
            }
            else
            {
                VAR2->VAR78 = VAR81;
                VAR2->VAR80[0][0][0] = VAR2->VAR32.VAR33[VAR70][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16][0];
                VAR2->VAR80[0][0][1] = VAR2->VAR32.VAR33[VAR70][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16][1];
            }
            VAR2->VAR82.FUN7(VAR2->VAR83[0]);
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            FUN8(VAR2);
        }
    }
    if (VAR2->VAR84 == VAR85)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR29; VAR4++)
            {
                int VAR86 = VAR4 * 2 + VAR5 * 2 * VAR2->VAR16;
                const int VAR48 = VAR4 + VAR5 * VAR2->VAR44;
                const int VAR63 = VAR2->VAR32.VAR63[VAR48];
                VAR6 = VAR2->VAR43[VAR48];
                if (FUN5(VAR63))
                    continue;
                if (!(VAR6 & VAR59))
                    continue;
                if (!(VAR6 & VAR55))
                    continue;
                VAR2->VAR71 = VAR73 | VAR72;
                if (!VAR2->VAR67.VAR68[0])
                    VAR2->VAR71 &= ~VAR73;
                if (!VAR2->VAR69.VAR68[0])
                    VAR2->VAR71 &= ~VAR72;
                VAR2->VAR74 = 0;
                VAR2->VAR78 = VAR81;
                VAR2->VAR75 = 0;
                if (VAR2->VAR87)
                {
                    int VAR88 = VAR2->VAR87;
                    int VAR89 = VAR2->VAR90;
                    VAR2->VAR80[0][0][0] = VAR2->VAR69.VAR33[0][VAR86][0] * VAR89 / VAR88;
                    VAR2->VAR80[0][0][1] = VAR2->VAR69.VAR33[0][VAR86][1] * VAR89 / VAR88;
                    VAR2->VAR80[1][0][0] = VAR2->VAR69.VAR33[0][VAR86][0] * (VAR89 - VAR88) / VAR88;
                    VAR2->VAR80[1][0][1] = VAR2->VAR69.VAR33[0][VAR86][1] * (VAR89 - VAR88) / VAR88;
                }
                else
                {
                    VAR2->VAR80[0][0][0] = 0;
                    VAR2->VAR80[0][0][1] = 0;
                    VAR2->VAR80[1][0][0] = 0;
                    VAR2->VAR80[1][0][1] = 0;
                }
                VAR2->VAR82.FUN7(VAR2->VAR83[0]);
                VAR2->VAR4 = VAR4;
                VAR2->VAR5 = VAR5;
                FUN8(VAR2);
            }
        }
    }
    else
        FUN9(VAR2);
    if (VAR91 && VAR2->VAR23->VAR92)
        goto VAR93;
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR29; VAR4++)
        {
            int VAR94, VAR95, VAR96, VAR97, VAR98;
            VAR99 *VAR100;
            VAR36 *VAR101, *VAR102, *VAR103;
            const int VAR48 = VAR4 + VAR5 * VAR2->VAR44;
            const int VAR63 = VAR2->VAR32.VAR63[VAR48];
            VAR6 = VAR2->VAR43[VAR48];
            if (FUN5(VAR63) && VAR2->VAR51)
                continue;
            VAR101 = VAR2->VAR32.VAR68[0] + VAR4 * 16 + VAR5 * 16 * VAR2->VAR104;
            VAR102 = VAR2->VAR32.VAR68[1] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR105;
            VAR103 = VAR2->VAR32.VAR68[2] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR105;
            VAR100 = &VAR2->VAR106[0][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16];
            for (VAR98 = 0; VAR98 < 4; VAR98++)
            {
                VAR94 = 0;
                for (VAR97 = 0; VAR97 < 8; VAR97++)
                {
                    int VAR107;
                    for (VAR107 = 0; VAR107 < 8; VAR107++)
                    {
                        VAR94 += VAR101[VAR107 + (VAR98 & 1) * 8 + (VAR97 + (VAR98 >> 1) * 8) * VAR2->VAR104];
                    }
                }
                VAR100[(VAR98 & 1) + (VAR98 >> 1) * VAR2->VAR16] = (VAR94 + 4) >> 3;
            }
            VAR95 = VAR96 = 0;
            for (VAR97 = 0; VAR97 < 8; VAR97++)
            {
                int VAR107;
                for (VAR107 = 0; VAR107 < 8; VAR107++)
                {
                    VAR95 += VAR102[VAR107 + VAR97 * (VAR2->VAR105)];
                    VAR96 += VAR103[VAR107 + VAR97 * (VAR2->VAR105)];
                }
            }
            VAR2->VAR106[1][VAR4 + VAR5 * VAR2->VAR44] = (VAR95 + 4) >> 3;
            VAR2->VAR106[2][VAR4 + VAR5 * VAR2->VAR44] = (VAR96 + 4) >> 3;
        }
    }
    FUN10(VAR2, VAR2->VAR106[0], VAR2->VAR29 * 2, VAR2->VAR17 * 2, VAR2->VAR16, 1);
    FUN10(VAR2, VAR2->VAR106[1], VAR2->VAR29, VAR2->VAR17, VAR2->VAR44, 0);
    FUN10(VAR2, VAR2->VAR106[2], VAR2->VAR29, VAR2->VAR17, VAR2->VAR44, 0);
    FUN11(VAR2->VAR106[0], VAR2->VAR29 * 2, VAR2->VAR17 * 2, VAR2->VAR16);
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR29; VAR4++)
        {
            VAR36 *VAR101, *VAR102, *VAR103;
            const int VAR48 = VAR4 + VAR5 * VAR2->VAR44;
            const int VAR63 = VAR2->VAR32.VAR63[VAR48];
            VAR6 = VAR2->VAR43[VAR48];
            if (FUN12(VAR63))
                continue;
            if (!(VAR6 & VAR55))
                continue;
            VAR101 = VAR2->VAR32.VAR68[0] + VAR4 * 16 + VAR5 * 16 * VAR2->VAR104;
            VAR102 = VAR2->VAR32.VAR68[1] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR105;
            VAR103 = VAR2->VAR32.VAR68[2] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR105;
            FUN13(VAR2, VAR101, VAR102, VAR103, VAR4, VAR5);
        }
    }
    if (VAR2->VAR23->VAR108 & VAR109)
    {
        FUN14(VAR2, VAR2->VAR32.VAR68[0], VAR2->VAR29 * 2, VAR2->VAR17 * 2, VAR2->VAR104, 1);
        FUN14(VAR2, VAR2->VAR32.VAR68[1], VAR2->VAR29, VAR2->VAR17, VAR2->VAR105, 0);
        FUN14(VAR2, VAR2->VAR32.VAR68[2], VAR2->VAR29, VAR2->VAR17, VAR2->VAR105, 0);
        FUN15(VAR2, VAR2->VAR32.VAR68[0], VAR2->VAR29 * 2, VAR2->VAR17 * 2, VAR2->VAR104, 1);
        FUN15(VAR2, VAR2->VAR32.VAR68[1], VAR2->VAR29, VAR2->VAR17, VAR2->VAR105, 0);
        FUN15(VAR2, VAR2->VAR32.VAR68[2], VAR2->VAR29, VAR2->VAR17, VAR2->VAR105, 0);
    }
VAR93:
    for (VAR3 = 0; VAR3 < VAR2->VAR47; VAR3++)
    {
        const int VAR48 = VAR2->VAR49[VAR3];
        int VAR6 = VAR2->VAR43[VAR48];
        if (VAR2->VAR84 != VAR85 && (VAR6 & (VAR58 | VAR59 | VAR55)))
        {
            VAR2->VAR60[VAR48] = 0;
        }
        VAR2->VAR110[VAR48] = 1;
    }