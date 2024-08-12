void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12[4] = {100, 100, 100};
    int VAR13 = 50;
    int VAR14;
    int VAR15 = VAR2->VAR16 * 2 * VAR2->VAR17;
    VAR18 *VAR19 = VAR2->VAR20;
    if (!VAR2->VAR21 || VAR2->VAR22 == 0 || VAR2->VAR23->VAR24 || VAR2->VAR23->VAR25->VAR26 & VAR27 || VAR2->VAR22 == 3 * VAR2->VAR28 * (VAR2->VAR23->VAR29 + VAR2->VAR23->VAR30))
        return;
    if (VAR2->VAR31.VAR32[0] == NULL)
    {
        FUN2(VAR2->VAR23, VAR33, "");
        for (VAR3 = 0; VAR3 < 2; VAR3++)
        {
            VAR19->VAR34[VAR3] = FUN3(VAR15 * sizeof(VAR35));
            VAR19->VAR36[VAR3] = FUN3((VAR15 + 4) * 2 * sizeof(VAR37));
            VAR19->VAR32[VAR3] = VAR19->VAR36[VAR3] + 4;
        }
        VAR19->VAR38 = 3;
        VAR2->VAR31 = *VAR2->VAR20;
    }
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        if (VAR19->VAR34[VAR3])
            memset(VAR19->VAR34[VAR3], 0, VAR15 * sizeof(VAR35));
    }
    if (VAR2->VAR23->VAR39 & VAR40)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR28; VAR4++)
            {
                int VAR41 = VAR2->VAR42[VAR4 + VAR5 * VAR2->VAR43];
                FUN2(VAR2->VAR23, VAR44, "", VAR41);
            }
            FUN2(VAR2->VAR23, VAR44, "");
        }
    }
    for (VAR7 = 1; VAR7 <= 3; VAR7++)
    {
        int VAR45 = 0;
        for (VAR3 = VAR2->VAR46 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR47 = VAR2->VAR48[VAR3];
            int VAR6 = VAR2->VAR42[VAR47];
            if (VAR6 & (1 << VAR7))
                VAR45 = 1;
            if (VAR6 & (8 << VAR7))
                VAR45 = 1;
            if (!VAR45)
                VAR2->VAR42[VAR47] |= 1 << VAR7;
            if (VAR6 & VAR49)
                VAR45 = 0;
        }
    }
    if (VAR2->VAR50)
    {
        int VAR45 = 0;
        for (VAR3 = VAR2->VAR46 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR47 = VAR2->VAR48[VAR3];
            int VAR6 = VAR2->VAR42[VAR47];
            if (VAR6 & VAR51)
                VAR45 = 0;
            if ((VAR6 & VAR52) || (VAR6 & VAR53) || (VAR6 & VAR54))
                VAR45 = 1;
            if (!VAR45)
                VAR2->VAR42[VAR47] |= VAR54;
            if (VAR6 & VAR49)
                VAR45 = 0;
        }
    }
    if (VAR2->VAR21 >= 4)
    {
        int VAR45 = 1;
        for (VAR3 = VAR2->VAR46 - 2; VAR3 >= VAR2->VAR28 + 100; VAR3--)
        {
            const int VAR47 = VAR2->VAR48[VAR3];
            int VAR55 = VAR2->VAR42[VAR47];
            int VAR56 = VAR2->VAR42[VAR2->VAR48[VAR3 + 1]];
            if (VAR55 & VAR49)
                VAR45 = 1;
            if (VAR56 == (VAR49 | VAR57 | VAR54 | VAR58 | VAR51 | VAR53 | VAR52) && VAR55 != (VAR49 | VAR57 | VAR54 | VAR58 | VAR51 | VAR53 | VAR52) && ((VAR55 & VAR51) || (VAR55 & VAR53) || (VAR55 & VAR52)))
            {
                VAR45 = 0;
            }
            if (!VAR45)
                VAR2->VAR42[VAR47] |= VAR57 | VAR54 | VAR58;
        }
    }
    VAR11 = 9999999;
    for (VAR7 = 1; VAR7 <= 3; VAR7++)
    {
        for (VAR3 = VAR2->VAR46 - 1; VAR3 >= 0; VAR3--)
        {
            const int VAR47 = VAR2->VAR48[VAR3];
            int VAR6 = VAR2->VAR42[VAR47];
            if (!VAR2->VAR59[VAR47])
                VAR11++;
            if (VAR6 & (1 << VAR7))
                VAR11 = 0;
            if (VAR2->VAR50)
            {
                if (VAR11 < VAR12[VAR7 - 1])
                    VAR2->VAR42[VAR47] |= 1 << VAR7;
            }
            else
            {
                if (VAR11 < VAR13)
                    VAR2->VAR42[VAR47] |= 1 << VAR7;
            }
            if (VAR6 & VAR49)
                VAR11 = 9999999;
        }
    }
    VAR6 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR46; VAR3++)
    {
        const int VAR47 = VAR2->VAR48[VAR3];
        int VAR60 = VAR2->VAR42[VAR47];
        if (VAR60 & VAR49)
            VAR6 = VAR60 & (VAR57 | VAR54 | VAR58);
        else
        {
            VAR6 |= VAR60 & (VAR57 | VAR54 | VAR58);
            VAR2->VAR42[VAR47] |= VAR6;
        }
    }
    if (!VAR2->VAR50)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR46; VAR3++)
        {
            const int VAR47 = VAR2->VAR48[VAR3];
            VAR6 = VAR2->VAR42[VAR47];
            if (VAR6 & (VAR54 | VAR57 | VAR58))
                VAR6 |= VAR54 | VAR57 | VAR58;
            VAR2->VAR42[VAR47] = VAR6;
        }
    }
    VAR8 = VAR10 = VAR9 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR46; VAR3++)
    {
        const int VAR47 = VAR2->VAR48[VAR3];
        VAR6 = VAR2->VAR42[VAR47];
        if (VAR6 & VAR57)
            VAR8++;
        if (VAR6 & VAR54)
            VAR10++;
        if (VAR6 & VAR58)
            VAR9++;
    }
    FUN2(VAR2->VAR23, VAR61, "", VAR8, VAR10, VAR9);
    VAR14 = FUN4(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR46; VAR3++)
    {
        const int VAR47 = VAR2->VAR48[VAR3];
        VAR6 = VAR2->VAR42[VAR47];
        if (!((VAR6 & VAR57) && (VAR6 & VAR58)))
            continue;
        if (VAR14)
            VAR2->VAR31.VAR62[VAR47] = VAR63;
        else
            VAR2->VAR31.VAR62[VAR47] = VAR64 | VAR65;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR28; VAR4++)
        {
            const int VAR47 = VAR4 + VAR5 * VAR2->VAR43;
            const int VAR62 = VAR2->VAR31.VAR62[VAR47];
            VAR6 = VAR2->VAR42[VAR47];
            if (FUN5(VAR62))
                continue;
            if (VAR6 & VAR58)
                continue;
            if (!(VAR6 & VAR54))
                continue;
            VAR2->VAR66 = VAR67;
            VAR2->VAR68 = 0;
            VAR2->VAR69 = 0;
            if (FUN6(VAR62))
            {
                int VAR70 = VAR4 * 2 + VAR5 * 2 * VAR2->VAR16;
                int VAR71;
                VAR2->VAR72 = VAR73;
                for (VAR71 = 0; VAR71 < 4; VAR71++)
                {
                    VAR2->VAR74[0][VAR71][0] = VAR2->VAR31.VAR32[0][VAR70 + (VAR71 & 1) + (VAR71 >> 1) * VAR2->VAR16][0];
                    VAR2->VAR74[0][VAR71][1] = VAR2->VAR31.VAR32[0][VAR70 + (VAR71 & 1) + (VAR71 >> 1) * VAR2->VAR16][1];
                }
            }
            else
            {
                VAR2->VAR72 = VAR75;
                VAR2->VAR74[0][0][0] = VAR2->VAR31.VAR32[0][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16][0];
                VAR2->VAR74[0][0][1] = VAR2->VAR31.VAR32[0][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16][1];
            }
            VAR2->VAR76.FUN7(VAR2->VAR77[0]);
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            FUN8(VAR2);
        }
    }
    if (VAR2->VAR78 == VAR79)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR28; VAR4++)
            {
                int VAR80 = VAR4 * 2 + VAR5 * 2 * VAR2->VAR16;
                const int VAR47 = VAR4 + VAR5 * VAR2->VAR43;
                const int VAR62 = VAR2->VAR31.VAR62[VAR47];
                VAR6 = VAR2->VAR42[VAR47];
                if (FUN5(VAR62))
                    continue;
                if (!(VAR6 & VAR58))
                    continue;
                if (!(VAR6 & VAR54))
                    continue;
                VAR2->VAR66 = VAR67 | VAR81;
                VAR2->VAR68 = 0;
                VAR2->VAR72 = VAR75;
                VAR2->VAR69 = 0;
                if (VAR2->VAR82)
                {
                    int VAR83 = VAR2->VAR82;
                    int VAR84 = VAR2->VAR85;
                    VAR2->VAR74[0][0][0] = VAR2->VAR86.VAR32[0][VAR80][0] * VAR84 / VAR83;
                    VAR2->VAR74[0][0][1] = VAR2->VAR86.VAR32[0][VAR80][1] * VAR84 / VAR83;
                    VAR2->VAR74[1][0][0] = VAR2->VAR86.VAR32[0][VAR80][0] * (VAR84 - VAR83) / VAR83;
                    VAR2->VAR74[1][0][1] = VAR2->VAR86.VAR32[0][VAR80][1] * (VAR84 - VAR83) / VAR83;
                }
                else
                {
                    VAR2->VAR74[0][0][0] = 0;
                    VAR2->VAR74[0][0][1] = 0;
                    VAR2->VAR74[1][0][0] = 0;
                    VAR2->VAR74[1][0][1] = 0;
                }
                VAR2->VAR76.FUN7(VAR2->VAR77[0]);
                VAR2->VAR4 = VAR4;
                VAR2->VAR5 = VAR5;
                FUN8(VAR2);
            }
        }
    }
    else
        FUN9(VAR2);
    if (VAR87 && VAR2->VAR23->VAR88)
        goto VAR89;
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR28; VAR4++)
        {
            int VAR90, VAR91, VAR92, VAR93, VAR94;
            VAR95 *VAR96;
            VAR35 *VAR97, *VAR98, *VAR99;
            const int VAR47 = VAR4 + VAR5 * VAR2->VAR43;
            const int VAR62 = VAR2->VAR31.VAR62[VAR47];
            VAR6 = VAR2->VAR42[VAR47];
            if (FUN5(VAR62) && VAR2->VAR50)
                continue;
            VAR97 = VAR2->VAR31.VAR100[0] + VAR4 * 16 + VAR5 * 16 * VAR2->VAR101;
            VAR98 = VAR2->VAR31.VAR100[1] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR102;
            VAR99 = VAR2->VAR31.VAR100[2] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR102;
            VAR96 = &VAR2->VAR103[0][VAR4 * 2 + VAR5 * 2 * VAR2->VAR16];
            for (VAR94 = 0; VAR94 < 4; VAR94++)
            {
                VAR90 = 0;
                for (VAR93 = 0; VAR93 < 8; VAR93++)
                {
                    int VAR104;
                    for (VAR104 = 0; VAR104 < 8; VAR104++)
                    {
                        VAR90 += VAR97[VAR104 + (VAR94 & 1) * 8 + (VAR93 + (VAR94 >> 1) * 8) * VAR2->VAR101];
                    }
                }
                VAR96[(VAR94 & 1) + (VAR94 >> 1) * VAR2->VAR16] = (VAR90 + 4) >> 3;
            }
            VAR91 = VAR92 = 0;
            for (VAR93 = 0; VAR93 < 8; VAR93++)
            {
                int VAR104;
                for (VAR104 = 0; VAR104 < 8; VAR104++)
                {
                    VAR91 += VAR98[VAR104 + VAR93 * (VAR2->VAR102)];
                    VAR92 += VAR99[VAR104 + VAR93 * (VAR2->VAR102)];
                }
            }
            VAR2->VAR103[1][VAR4 + VAR5 * VAR2->VAR43] = (VAR91 + 4) >> 3;
            VAR2->VAR103[2][VAR4 + VAR5 * VAR2->VAR43] = (VAR92 + 4) >> 3;
        }
    }
    FUN10(VAR2, VAR2->VAR103[0], VAR2->VAR28 * 2, VAR2->VAR17 * 2, VAR2->VAR16, 1);
    FUN10(VAR2, VAR2->VAR103[1], VAR2->VAR28, VAR2->VAR17, VAR2->VAR43, 0);
    FUN10(VAR2, VAR2->VAR103[2], VAR2->VAR28, VAR2->VAR17, VAR2->VAR43, 0);
    FUN11(VAR2->VAR103[0], VAR2->VAR28 * 2, VAR2->VAR17 * 2, VAR2->VAR16);
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR28; VAR4++)
        {
            VAR35 *VAR97, *VAR98, *VAR99;
            const int VAR47 = VAR4 + VAR5 * VAR2->VAR43;
            const int VAR62 = VAR2->VAR31.VAR62[VAR47];
            VAR6 = VAR2->VAR42[VAR47];
            if (FUN12(VAR62))
                continue;
            if (!(VAR6 & VAR54))
                continue;
            VAR97 = VAR2->VAR31.VAR100[0] + VAR4 * 16 + VAR5 * 16 * VAR2->VAR101;
            VAR98 = VAR2->VAR31.VAR100[1] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR102;
            VAR99 = VAR2->VAR31.VAR100[2] + VAR4 * 8 + VAR5 * 8 * VAR2->VAR102;
            FUN13(VAR2, VAR97, VAR98, VAR99, VAR4, VAR5);
        }
    }
    if (VAR2->VAR23->VAR105 & VAR106)
    {
        FUN14(VAR2, VAR2->VAR31.VAR100[0], VAR2->VAR28 * 2, VAR2->VAR17 * 2, VAR2->VAR101, 1);
        FUN14(VAR2, VAR2->VAR31.VAR100[1], VAR2->VAR28, VAR2->VAR17, VAR2->VAR102, 0);
        FUN14(VAR2, VAR2->VAR31.VAR100[2], VAR2->VAR28, VAR2->VAR17, VAR2->VAR102, 0);
        FUN15(VAR2, VAR2->VAR31.VAR100[0], VAR2->VAR28 * 2, VAR2->VAR17 * 2, VAR2->VAR101, 1);
        FUN15(VAR2, VAR2->VAR31.VAR100[1], VAR2->VAR28, VAR2->VAR17, VAR2->VAR102, 0);
        FUN15(VAR2, VAR2->VAR31.VAR100[2], VAR2->VAR28, VAR2->VAR17, VAR2->VAR102, 0);
    }
VAR89:
    for (VAR3 = 0; VAR3 < VAR2->VAR46; VAR3++)
    {
        const int VAR47 = VAR2->VAR48[VAR3];
        int VAR6 = VAR2->VAR42[VAR47];
        if (VAR2->VAR78 != VAR79 && (VAR6 & (VAR57 | VAR58 | VAR54)))
        {
            VAR2->VAR59[VAR47] = 0;
        }
        VAR2->VAR107[VAR47] = 1;
    }
}