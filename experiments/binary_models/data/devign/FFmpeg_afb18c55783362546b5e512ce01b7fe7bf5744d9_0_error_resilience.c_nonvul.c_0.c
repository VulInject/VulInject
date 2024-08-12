void FUN1(VAR1 *VAR2)
{
    int *VAR3 = VAR2->VAR4->VAR5.VAR3;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14;
    int VAR15[4] = {100, 100, 100};
    int VAR16 = 50;
    int VAR17;
    int VAR18 = VAR2->VAR19 * 2 * VAR2->VAR20;
    if (!VAR2->VAR21->VAR22 || VAR2->VAR23 == 0 || VAR2->VAR21->VAR24 || !FUN2(VAR2) || VAR2->VAR23 == 3 * VAR2->VAR25 * (VAR2->VAR21->VAR26 + VAR2->VAR21->VAR27))
    {
        return;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
    {
        int VAR28 = VAR2->VAR29[VAR7 + (VAR2->VAR20 - 1) * VAR2->VAR30];
        if (VAR28 != 0x7F)
            break;
    }
    if (VAR7 == VAR2->VAR25 && VAR2->VAR21->VAR31 == VAR32 && (VAR2->VAR21->VAR33 & 16) && VAR2->VAR23 == 3 * VAR2->VAR25 * (VAR2->VAR21->VAR26 + VAR2->VAR21->VAR27 + 1))
    {
        FUN3(VAR2->VAR21, VAR34, "");
        return;
    }
    if (VAR2->VAR35)
    {
        if (VAR2->VAR35->VAR5.VAR36 != VAR2->VAR4->VAR5.VAR36 || VAR2->VAR35->VAR5.VAR33 != VAR2->VAR4->VAR5.VAR33 || VAR2->VAR35->VAR5.VAR37 != VAR2->VAR4->VAR5.VAR37)
        {
            FUN3(VAR2->VAR21, VAR38, "");
            VAR2->VAR35 = NULL;
        }
    }
    if (VAR2->VAR39)
    {
        if (VAR2->VAR39->VAR5.VAR36 != VAR2->VAR4->VAR5.VAR36 || VAR2->VAR39->VAR5.VAR33 != VAR2->VAR4->VAR5.VAR33 || VAR2->VAR39->VAR5.VAR37 != VAR2->VAR4->VAR5.VAR37)
        {
            FUN3(VAR2->VAR21, VAR38, "");
            VAR2->VAR39 = NULL;
        }
    }
    if (VAR2->VAR4->VAR40[0] == NULL)
    {
        FUN3(VAR2->VAR21, VAR41, "");
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            VAR2->VAR4->VAR42[VAR6] = FUN4(VAR2->VAR30 * VAR2->VAR20 * 4 * sizeof(VAR43));
            VAR2->VAR4->VAR44[VAR6] = FUN4((VAR18 + 4) * 2 * sizeof(VAR45));
            if (!VAR2->VAR4->VAR42[VAR6] || !VAR2->VAR4->VAR44[VAR6])
                break;
            VAR2->VAR4->VAR46[VAR6] = VAR2->VAR4->VAR42[VAR6]->VAR47;
            VAR2->VAR4->VAR40[VAR6] = (FUN5(*)[2])VAR2->VAR4->VAR44[VAR6]->VAR47 + 4;
        }
        if (VAR6 < 2)
        {
            for (VAR6 = 0; VAR6 < 2; VAR6++)
            {
                FUN6(&VAR2->VAR4->VAR42[VAR6]);
                FUN6(&VAR2->VAR4->VAR44[VAR6]);
                VAR2->VAR4->VAR46[VAR6] = NULL;
                VAR2->VAR4->VAR40[VAR6] = NULL;
            }
            return;
        }
    }
    if (VAR2->VAR21->VAR48 & VAR49)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
            {
                int VAR28 = VAR2->VAR29[VAR7 + VAR8 * VAR2->VAR30];
                FUN3(VAR2->VAR21, VAR34, "", VAR28);
            }
            FUN3(VAR2->VAR21, VAR34, "");
        }
    }
    for (VAR10 = 1; VAR10 <= 3; VAR10++)
    {
        int VAR50 = 0;
        for (VAR6 = VAR2->VAR51 - 1; VAR6 >= 0; VAR6--)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            int VAR9 = VAR2->VAR29[VAR52];
            if (VAR9 & (1 << VAR10))
                VAR50 = 1;
            if (VAR9 & (8 << VAR10))
                VAR50 = 1;
            if (!VAR50)
                VAR2->VAR29[VAR52] |= 1 << VAR10;
            if (VAR9 & VAR54)
                VAR50 = 0;
        }
    }
    if (VAR2->VAR55)
    {
        int VAR50 = 0;
        for (VAR6 = VAR2->VAR51 - 1; VAR6 >= 0; VAR6--)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            int VAR9 = VAR2->VAR29[VAR52];
            if (VAR9 & VAR56)
                VAR50 = 0;
            if ((VAR9 & VAR57) || (VAR9 & VAR58) || (VAR9 & VAR59))
                VAR50 = 1;
            if (!VAR50)
                VAR2->VAR29[VAR52] |= VAR59;
            if (VAR9 & VAR54)
                VAR50 = 0;
        }
    }
    if (VAR2->VAR21->VAR60 & VAR61)
    {
        int VAR50 = 1;
        for (VAR6 = VAR2->VAR51 - 2; VAR6 >= VAR2->VAR25 + 100; VAR6--)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            int VAR62 = VAR2->VAR29[VAR52];
            int VAR63 = VAR2->VAR29[VAR2->VAR53[VAR6 + 1]];
            if (VAR62 & VAR54)
                VAR50 = 1;
            if (VAR63 == (VAR54 | VAR64 | VAR65) && VAR62 != (VAR54 | VAR64 | VAR65) && ((VAR62 & VAR56) || (VAR62 & VAR58) || (VAR62 & VAR57)))
            {
                VAR50 = 0;
            }
            if (!VAR50)
                VAR2->VAR29[VAR52] |= VAR64;
        }
    }
    VAR14 = 9999999;
    for (VAR10 = 1; VAR10 <= 3; VAR10++)
    {
        for (VAR6 = VAR2->VAR51 - 1; VAR6 >= 0; VAR6--)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            int VAR9 = VAR2->VAR29[VAR52];
            if (!VAR2->VAR66[VAR52])
                VAR14++;
            if (VAR9 & (1 << VAR10))
                VAR14 = 0;
            if (VAR2->VAR55)
            {
                if (VAR14 < VAR15[VAR10 - 1])
                    VAR2->VAR29[VAR52] |= 1 << VAR10;
            }
            else
            {
                if (VAR14 < VAR16)
                    VAR2->VAR29[VAR52] |= 1 << VAR10;
            }
            if (VAR9 & VAR54)
                VAR14 = 9999999;
        }
    }
    VAR9 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
    {
        const int VAR52 = VAR2->VAR53[VAR6];
        int VAR67 = VAR2->VAR29[VAR52];
        if (VAR67 & VAR54)
        {
            VAR9 = VAR67 & VAR64;
        }
        else
        {
            VAR9 |= VAR67 & VAR64;
            VAR2->VAR29[VAR52] |= VAR9;
        }
    }
    if (!VAR2->VAR55)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            VAR9 = VAR2->VAR29[VAR52];
            if (VAR9 & VAR64)
                VAR9 |= VAR64;
            VAR2->VAR29[VAR52] = VAR9;
        }
    }
    VAR11 = VAR13 = VAR12 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
    {
        const int VAR52 = VAR2->VAR53[VAR6];
        VAR9 = VAR2->VAR29[VAR52];
        if (VAR9 & VAR68)
            VAR11++;
        if (VAR9 & VAR59)
            VAR13++;
        if (VAR9 & VAR69)
            VAR12++;
    }
    FUN3(VAR2->VAR21, VAR70, "", VAR11, VAR13, VAR12, FUN7(VAR2->VAR4->VAR5.VAR71));
    VAR17 = FUN8(VAR2);
    for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
    {
        const int VAR52 = VAR2->VAR53[VAR6];
        VAR9 = VAR2->VAR29[VAR52];
        if (!((VAR9 & VAR68) && (VAR9 & VAR69)))
            continue;
        if (VAR17)
            VAR2->VAR4->VAR72[VAR52] = VAR73;
        else
            VAR2->VAR4->VAR72[VAR52] = VAR74 | VAR75;
    }
    if (!(VAR2->VAR35 && VAR2->VAR35->VAR5.VAR47[0]) && !(VAR2->VAR39 && VAR2->VAR39->VAR5.VAR47[0]))
        for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
        {
            const int VAR52 = VAR2->VAR53[VAR6];
            if (!FUN9(VAR2->VAR4->VAR72[VAR52]))
                VAR2->VAR4->VAR72[VAR52] = VAR73;
        }
    for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
        {
            const int VAR52 = VAR7 + VAR8 * VAR2->VAR30;
            const int VAR72 = VAR2->VAR4->VAR72[VAR52];
            const int VAR76 = !(VAR2->VAR35 && VAR2->VAR35->VAR5.VAR47[0]);
            const int VAR77 = VAR76 ? VAR78 : VAR79;
            int VAR80;
            VAR9 = VAR2->VAR29[VAR52];
            if (FUN9(VAR72))
                continue;
            if (VAR9 & VAR69)
                continue;
            if (!(VAR9 & VAR59))
                continue;
            if (FUN10(VAR72))
            {
                int VAR81 = VAR7 * 2 + VAR8 * 2 * VAR2->VAR19;
                int VAR82;
                VAR80 = VAR83;
                for (VAR82 = 0; VAR82 < 4; VAR82++)
                {
                    VAR2->VAR84[0][VAR82][0] = VAR2->VAR4->VAR40[VAR76][VAR81 + (VAR82 & 1) + (VAR82 >> 1) * VAR2->VAR19][0];
                    VAR2->VAR84[0][VAR82][1] = VAR2->VAR4->VAR40[VAR76][VAR81 + (VAR82 & 1) + (VAR82 >> 1) * VAR2->VAR19][1];
                }
            }
            else
            {
                VAR80 = VAR85;
                VAR2->VAR84[0][0][0] = VAR2->VAR4->VAR40[VAR76][VAR7 * 2 + VAR8 * 2 * VAR2->VAR19][0];
                VAR2->VAR84[0][0][1] = VAR2->VAR4->VAR40[VAR76][VAR7 * 2 + VAR8 * 2 * VAR2->VAR19][1];
            }
            VAR2->FUN11(VAR2->VAR86, 0, VAR77, VAR80, &VAR2->VAR84, VAR7, VAR8, 0, 0);
        }
    }
    if (VAR2->VAR4->VAR5.VAR71 == VAR87)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
            {
                int VAR88 = VAR7 * 2 + VAR8 * 2 * VAR2->VAR19;
                const int VAR52 = VAR7 + VAR8 * VAR2->VAR30;
                const int VAR72 = VAR2->VAR4->VAR72[VAR52];
                int VAR77 = VAR79 | VAR78;
                VAR9 = VAR2->VAR29[VAR52];
                if (FUN9(VAR72))
                    continue;
                if (!(VAR9 & VAR69))
                    continue;
                if (!(VAR9 & VAR59))
                    continue;
                if (!(VAR2->VAR35 && VAR2->VAR35->VAR5.VAR47[0]))
                    VAR77 &= ~VAR79;
                if (!(VAR2->VAR39 && VAR2->VAR39->VAR5.VAR47[0]))
                    VAR77 &= ~VAR78;
                if (VAR2->VAR89)
                {
                    int VAR90 = VAR2->VAR89;
                    int VAR91 = VAR2->VAR92;
                    FUN12(VAR2->VAR21->VAR31 != VAR93);
                    FUN13(&VAR2->VAR39->VAR94, VAR8, 0);
                    VAR2->VAR84[0][0][0] = VAR2->VAR39->VAR40[0][VAR88][0] * VAR91 / VAR90;
                    VAR2->VAR84[0][0][1] = VAR2->VAR39->VAR40[0][VAR88][1] * VAR91 / VAR90;
                    VAR2->VAR84[1][0][0] = VAR2->VAR39->VAR40[0][VAR88][0] * (VAR91 - VAR90) / VAR90;
                    VAR2->VAR84[1][0][1] = VAR2->VAR39->VAR40[0][VAR88][1] * (VAR91 - VAR90) / VAR90;
                }
                else
                {
                    VAR2->VAR84[0][0][0] = 0;
                    VAR2->VAR84[0][0][1] = 0;
                    VAR2->VAR84[1][0][0] = 0;
                    VAR2->VAR84[1][0][1] = 0;
                }
                VAR2->FUN11(VAR2->VAR86, 0, VAR77, VAR85, &VAR2->VAR84, VAR7, VAR8, 0, 0);
            }
        }
    }
    else
        FUN14(VAR2);
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR95 && VAR2->VAR21->VAR96) goto VAR97;
    FF_ENABLE_DEPRECATION_WARNINGS for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
        {
            int VAR98, VAR99, VAR100, VAR101, VAR102;
            VAR103 *VAR104;
            VAR43 *VAR105, *VAR106, *VAR107;
            const int VAR52 = VAR7 + VAR8 * VAR2->VAR30;
            const int VAR72 = VAR2->VAR4->VAR72[VAR52];
            VAR9 = VAR2->VAR29[VAR52];
            if (FUN9(VAR72) && VAR2->VAR55)
                continue;
            VAR105 = VAR2->VAR4->VAR5.VAR47[0] + VAR7 * 16 + VAR8 * 16 * VAR3[0];
            VAR106 = VAR2->VAR4->VAR5.VAR47[1] + VAR7 * 8 + VAR8 * 8 * VAR3[1];
            VAR107 = VAR2->VAR4->VAR5.VAR47[2] + VAR7 * 8 + VAR8 * 8 * VAR3[2];
            VAR104 = &VAR2->VAR108[0][VAR7 * 2 + VAR8 * 2 * VAR2->VAR19];
            for (VAR102 = 0; VAR102 < 4; VAR102++)
            {
                VAR98 = 0;
                for (VAR101 = 0; VAR101 < 8; VAR101++)
                {
                    int VAR109;
                    for (VAR109 = 0; VAR109 < 8; VAR109++)
                        VAR98 += VAR105[VAR109 + (VAR102 & 1) * 8 + (VAR101 + (VAR102 >> 1) * 8) * VAR3[0]];
                }
                VAR104[(VAR102 & 1) + (VAR102 >> 1) * VAR2->VAR19] = (VAR98 + 4) >> 3;
            }
            VAR99 = VAR100 = 0;
            for (VAR101 = 0; VAR101 < 8; VAR101++)
            {
                int VAR109;
                for (VAR109 = 0; VAR109 < 8; VAR109++)
                {
                    VAR99 += VAR106[VAR109 + VAR101 * VAR3[1]];
                    VAR100 += VAR107[VAR109 + VAR101 * VAR3[2]];
                }
            }
            VAR2->VAR108[1][VAR7 + VAR8 * VAR2->VAR30] = (VAR99 + 4) >> 3;
            VAR2->VAR108[2][VAR7 + VAR8 * VAR2->VAR30] = (VAR100 + 4) >> 3;
        }
    }
    FUN15(VAR2, VAR2->VAR108[0], VAR2->VAR25 * 2, VAR2->VAR20 * 2, VAR2->VAR19, 1);
    FUN15(VAR2, VAR2->VAR108[1], VAR2->VAR25, VAR2->VAR20, VAR2->VAR30, 0);
    FUN15(VAR2, VAR2->VAR108[2], VAR2->VAR25, VAR2->VAR20, VAR2->VAR30, 0);
    FUN16(VAR2->VAR108[0], VAR2->VAR25 * 2, VAR2->VAR20 * 2, VAR2->VAR19);
    for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
        {
            VAR43 *VAR105, *VAR106, *VAR107;
            const int VAR52 = VAR7 + VAR8 * VAR2->VAR30;
            const int VAR72 = VAR2->VAR4->VAR72[VAR52];
            VAR9 = VAR2->VAR29[VAR52];
            if (FUN17(VAR72))
                continue;
            if (!(VAR9 & VAR59))
                continue;
            VAR105 = VAR2->VAR4->VAR5.VAR47[0] + VAR7 * 16 + VAR8 * 16 * VAR3[0];
            VAR106 = VAR2->VAR4->VAR5.VAR47[1] + VAR7 * 8 + VAR8 * 8 * VAR3[1];
            VAR107 = VAR2->VAR4->VAR5.VAR47[2] + VAR7 * 8 + VAR8 * 8 * VAR3[2];
            FUN18(VAR2, VAR105, VAR106, VAR107, VAR7, VAR8);
        }
    }
    if (VAR2->VAR21->VAR22 & VAR110)
    {
        FUN19(VAR2, VAR2->VAR4->VAR5.VAR47[0], VAR2->VAR25 * 2, VAR2->VAR20 * 2, VAR3[0], 1);
        FUN19(VAR2, VAR2->VAR4->VAR5.VAR47[1], VAR2->VAR25, VAR2->VAR20, VAR3[1], 0);
        FUN19(VAR2, VAR2->VAR4->VAR5.VAR47[2], VAR2->VAR25, VAR2->VAR20, VAR3[2], 0);
        FUN20(VAR2, VAR2->VAR4->VAR5.VAR47[0], VAR2->VAR25 * 2, VAR2->VAR20 * 2, VAR3[0], 1);
        FUN20(VAR2, VAR2->VAR4->VAR5.VAR47[1], VAR2->VAR25, VAR2->VAR20, VAR3[1], 0);
        FUN20(VAR2, VAR2->VAR4->VAR5.VAR47[2], VAR2->VAR25, VAR2->VAR20, VAR3[2], 0);
    }
VAR97:
    for (VAR6 = 0; VAR6 < VAR2->VAR51; VAR6++)
    {
        const int VAR52 = VAR2->VAR53[VAR6];
        int VAR9 = VAR2->VAR29[VAR52];
        if (VAR2->VAR4->VAR5.VAR71 != VAR87 && (VAR9 & (VAR68 | VAR69 | VAR59)))
        {
            VAR2->VAR66[VAR52] = 0;
        }
        VAR2->VAR111[VAR52] = 1;
    }
    VAR2->VAR4 = NULL;
    VAR2->VAR39 = NULL;
    VAR2->VAR35 = NULL;
}