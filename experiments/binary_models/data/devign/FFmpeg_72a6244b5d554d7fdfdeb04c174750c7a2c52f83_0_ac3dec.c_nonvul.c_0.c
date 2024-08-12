static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR2->VAR4;
    int VAR5 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    VAR13 *VAR14 = &VAR2->VAR14;
    uint8_t VAR15[VAR16];
    memset(VAR15, 0, VAR16);
    VAR10 = 0;
    if (VAR2->VAR17)
    {
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR18[VAR9] = FUN2(VAR14);
            if (VAR9 > 1 && VAR2->VAR18[VAR9] != VAR2->VAR18[1])
                VAR10 = 1;
        }
    }
    if (VAR2->VAR19)
    {
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR20[VAR9] = FUN2(VAR14);
        }
    }
    VAR6 = !(VAR2->VAR5);
    do
    {
        if (FUN2(VAR14))
        {
            VAR2->VAR21[VAR6] = ((VAR22[FUN3(VAR14, 8)] - 1.0) * VAR2->VAR23->VAR24) + 1.0;
        }
        else if (VAR3 == 0)
        {
            VAR2->VAR21[VAR6] = 1.0f;
        }
    } while (VAR6--);
    if (VAR2->VAR25 && (!VAR3 || FUN2(VAR14)))
    {
        if (FUN2(VAR14))
        {
            FUN4(VAR2->VAR23, "", 1);
            return -1;
        }
    }
    if (VAR2->VAR25 ? VAR2->VAR26[VAR3] : FUN2(VAR14))
    {
        memset(VAR15, 3, VAR16);
        if (!VAR2->VAR25)
            VAR2->VAR12[VAR3] = FUN2(VAR14);
        if (VAR2->VAR12[VAR3])
        {
            int VAR27, VAR28;
            if (VAR5 < VAR29)
            {
                FUN5(VAR2->VAR23, VAR30, "");
                return -1;
            }
            if (VAR2->VAR25 && FUN2(VAR14))
            {
                FUN4(VAR2->VAR23, "", 1);
                return -1;
            }
            if (VAR2->VAR25 && VAR2->VAR5 == VAR29)
            {
                VAR2->VAR31[1] = 1;
                VAR2->VAR31[2] = 1;
            }
            else
            {
                for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
                    VAR2->VAR31[VAR9] = FUN2(VAR14);
            }
            if (VAR5 == VAR29)
                VAR2->VAR32 = FUN2(VAR14);
            VAR27 = FUN3(VAR14, 4);
            VAR28 = FUN3(VAR14, 4) + 3;
            VAR2->VAR33 = VAR28 - VAR27;
            if (VAR2->VAR33 < 0)
            {
                FUN5(VAR2->VAR23, VAR30, "", VAR27, VAR28);
                return -1;
            }
            VAR2->VAR34[VAR35] = VAR27 * 12 + 37;
            VAR2->VAR36[VAR35] = VAR28 * 12 + 37;
            FUN6(VAR14, VAR3, VAR2->VAR25, 0, VAR27, VAR28, VAR37, VAR2->VAR38, &VAR2->VAR33, &VAR2->VAR39, NULL);
        }
        else
        {
            for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
            {
                VAR2->VAR31[VAR9] = 0;
                VAR2->VAR40[VAR9] = 1;
            }
            VAR2->VAR41 = VAR2->VAR25;
            VAR2->VAR32 = 0;
        }
    }
    else if (!VAR2->VAR25)
    {
        if (!VAR3)
        {
            FUN5(VAR2->VAR23, VAR30, "");
            return -1;
        }
        else
        {
            VAR2->VAR12[VAR3] = VAR2->VAR12[VAR3 - 1];
        }
    }
    VAR12 = VAR2->VAR12[VAR3];
    if (VAR12)
    {
        int VAR42 = 0;
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            if (VAR2->VAR31[VAR9])
            {
                if ((VAR2->VAR25 && VAR2->VAR40[VAR9]) || FUN2(VAR14))
                {
                    int VAR43, VAR44, VAR45;
                    VAR2->VAR40[VAR9] = 0;
                    VAR42 = 1;
                    VAR43 = 3 * FUN3(VAR14, 2);
                    for (VAR7 = 0; VAR7 < VAR2->VAR39; VAR7++)
                    {
                        VAR44 = FUN3(VAR14, 4);
                        VAR45 = FUN3(VAR14, 4);
                        if (VAR44 == 15)
                            VAR2->VAR46[VAR9][VAR7] = VAR45 << 22;
                        else
                            VAR2->VAR46[VAR9][VAR7] = (VAR45 + 16) << 21;
                        VAR2->VAR46[VAR9][VAR7] >>= (VAR44 + VAR43);
                    }
                }
                else if (!VAR3)
                {
                    FUN5(VAR2->VAR23, VAR30, "");
                    return -1;
                }
            }
            else
            {
                VAR2->VAR40[VAR9] = 1;
            }
        }
        if (VAR5 == VAR29 && VAR42)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR39; VAR7++)
            {
                VAR2->VAR47[VAR7] = VAR2->VAR32 ? FUN2(VAR14) : 0;
            }
        }
    }
    if (VAR5 == VAR29)
    {
        if ((VAR2->VAR25 && !VAR3) || FUN2(VAR14))
        {
            VAR2->VAR48 = 4;
            if (VAR12 && VAR2->VAR34[VAR35] <= 61)
                VAR2->VAR48 -= 1 + (VAR2->VAR34[VAR35] == 37);
            for (VAR7 = 0; VAR7 < VAR2->VAR48; VAR7++)
                VAR2->VAR49[VAR7] = FUN2(VAR14);
        }
        else if (!VAR3)
        {
            FUN5(VAR2->VAR23, VAR30, "");
            return -1;
        }
    }
    for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
    {
        if (!VAR2->VAR25)
            VAR2->VAR51[VAR3][VAR9] = FUN3(VAR14, 2 - (VAR9 == VAR2->VAR52));
        if (VAR2->VAR51[VAR3][VAR9] != VAR53)
            VAR15[VAR9] = 3;
    }
    for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
    {
        VAR2->VAR34[VAR9] = 0;
        if (VAR2->VAR51[VAR3][VAR9] != VAR53)
        {
            int VAR54;
            int VAR55 = VAR2->VAR36[VAR9];
            if (VAR2->VAR31[VAR9])
                VAR2->VAR36[VAR9] = VAR2->VAR34[VAR35];
            else
            {
                int VAR56 = FUN3(VAR14, 6);
                if (VAR56 > 60)
                {
                    FUN5(VAR2->VAR23, VAR30, "", VAR56);
                    return -1;
                }
                VAR2->VAR36[VAR9] = VAR56 * 3 + 73;
            }
            VAR54 = 3 << (VAR2->VAR51[VAR3][VAR9] - 1);
            VAR2->VAR57[VAR9] = (VAR2->VAR36[VAR9] + VAR54 - 4) / VAR54;
            if (VAR3 > 0 && VAR2->VAR36[VAR9] != VAR55)
                memset(VAR15, 3, VAR16);
        }
    }
    if (VAR12 && VAR2->VAR51[VAR3][VAR35] != VAR53)
    {
        VAR2->VAR57[VAR35] = (VAR2->VAR36[VAR35] - VAR2->VAR34[VAR35]) / (3 << (VAR2->VAR51[VAR3][VAR35] - 1));
    }
    for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
    {
        if (VAR2->VAR51[VAR3][VAR9] != VAR53)
        {
            VAR2->VAR58[VAR9][0] = FUN3(VAR14, 4) << !VAR9;
            if (FUN7(VAR14, VAR2->VAR51[VAR3][VAR9], VAR2->VAR57[VAR9], VAR2->VAR58[VAR9][0], &VAR2->VAR58[VAR9][VAR2->VAR34[VAR9] + !!VAR9]))
            {
                FUN5(VAR2->VAR23, VAR30, "");
                return -1;
            }
            if (VAR9 != VAR35 && VAR9 != VAR2->VAR52)
                FUN8(VAR14, 2);
        }
    }
    if (VAR2->VAR59)
    {
        if (FUN2(VAR14))
        {
            VAR2->VAR60.VAR61 = VAR62[FUN3(VAR14, 2)] >> VAR2->VAR60.VAR63;
            VAR2->VAR60.VAR64 = VAR65[FUN3(VAR14, 2)] >> VAR2->VAR60.VAR63;
            VAR2->VAR60.VAR66 = VAR67[FUN3(VAR14, 2)];
            VAR2->VAR60.VAR68 = VAR69[FUN3(VAR14, 2)];
            VAR2->VAR60.VAR70 = VAR71[FUN3(VAR14, 3)];
            for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
                VAR15[VAR9] = FUN9(VAR15[VAR9], 2);
        }
        else if (!VAR3)
        {
            FUN5(VAR2->VAR23, VAR30, "");
            return -1;
        }
    }
    if (!VAR2->VAR25 || !VAR3)
    {
        if (VAR2->VAR72 && FUN2(VAR14))
        {
            int VAR73 = 0;
            int VAR74;
            VAR74 = (FUN3(VAR14, 6) - 15) << 4;
            for (VAR6 = VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
            {
                if (VAR9 == VAR6 || VAR2->VAR72 == 2)
                    VAR73 = (VAR74 + FUN3(VAR14, 4)) << 2;
                if (VAR3 && VAR2->VAR75[VAR9] != VAR73)
                {
                    VAR15[VAR9] = FUN9(VAR15[VAR9], 1);
                }
                VAR2->VAR75[VAR9] = VAR73;
                if (!VAR2->VAR25)
                {
                    int VAR55 = VAR2->VAR76[VAR9];
                    VAR2->VAR76[VAR9] = VAR77[FUN3(VAR14, 3)];
                    if (VAR3 && VAR55 != VAR2->VAR76[VAR9])
                        VAR15[VAR9] = FUN9(VAR15[VAR9], 2);
                }
            }
        }
        else if (!VAR2->VAR25 && !VAR3)
        {
            FUN5(VAR2->VAR23, VAR30, "");
            return -1;
        }
    }
    if (VAR2->VAR78 && FUN2(VAR14))
    {
        for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
        {
            int VAR55 = VAR2->VAR76[VAR9];
            VAR2->VAR76[VAR9] = VAR77[FUN3(VAR14, 3)];
            if (VAR3 && VAR55 != VAR2->VAR76[VAR9])
                VAR15[VAR9] = FUN9(VAR15[VAR9], 2);
        }
    }
    else if (VAR2->VAR25 && !VAR3)
    {
        for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
            VAR2->VAR76[VAR9] = VAR77[4];
    }
    if (VAR2->VAR79 == VAR80 && FUN2(VAR14))
    {
        FUN8(VAR14, 10);
    }
    if (VAR12)
    {
        if (VAR2->VAR41 || FUN2(VAR14))
        {
            int VAR81 = FUN3(VAR14, 3);
            int VAR82 = FUN3(VAR14, 3);
            if (VAR3 && (VAR81 != VAR2->VAR60.VAR83 || VAR82 != VAR2->VAR60.VAR84))
            {
                VAR15[VAR35] = FUN9(VAR15[VAR35], 2);
            }
            VAR2->VAR60.VAR83 = VAR81;
            VAR2->VAR60.VAR84 = VAR82;
        }
        else if (!VAR2->VAR25 && !VAR3)
        {
            FUN5(VAR2->VAR23, VAR30, "");
            return -1;
        }
        VAR2->VAR41 = 0;
    }
    if (VAR2->VAR85 && FUN2(VAR14))
    {
        for (VAR9 = !VAR12; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR86[VAR9] = FUN3(VAR14, 2);
            if (VAR2->VAR86[VAR9] == VAR87)
            {
                FUN5(VAR2->VAR23, VAR30, "");
                return -1;
            }
            VAR15[VAR9] = FUN9(VAR15[VAR9], 2);
        }
        for (VAR9 = !VAR12; VAR9 <= VAR4; VAR9++)
        {
            if (VAR2->VAR86[VAR9] == VAR88)
            {
                VAR2->VAR89[VAR9] = FUN3(VAR14, 3);
                for (VAR8 = 0; VAR8 <= VAR2->VAR89[VAR9]; VAR8++)
                {
                    VAR2->VAR90[VAR9][VAR8] = FUN3(VAR14, 5);
                    VAR2->VAR91[VAR9][VAR8] = FUN3(VAR14, 4);
                    VAR2->VAR92[VAR9][VAR8] = FUN3(VAR14, 3);
                }
                VAR15[VAR9] = FUN9(VAR15[VAR9], 2);
            }
        }
    }
    else if (VAR3 == 0)
    {
        for (VAR9 = 0; VAR9 <= VAR2->VAR50; VAR9++)
        {
            VAR2->VAR86[VAR9] = VAR93;
        }
    }
    for (VAR9 = !VAR12; VAR9 <= VAR2->VAR50; VAR9++)
    {
        if (VAR15[VAR9] > 2)
        {
            FUN10(VAR2->VAR58[VAR9], VAR2->VAR34[VAR9], VAR2->VAR36[VAR9], VAR2->VAR94[VAR9], VAR2->VAR95[VAR9]);
        }
        if (VAR15[VAR9] > 1)
        {
            if (FUN11(&VAR2->VAR60, VAR2->VAR95[VAR9], VAR2->VAR34[VAR9], VAR2->VAR36[VAR9], VAR2->VAR76[VAR9], (VAR9 == VAR2->VAR52), VAR2->VAR86[VAR9], VAR2->VAR89[VAR9], VAR2->VAR90[VAR9], VAR2->VAR91[VAR9], VAR2->VAR92[VAR9], VAR2->VAR96[VAR9]))
            {
                FUN5(VAR2->VAR23, VAR30, "");
                return -1;
            }
        }
        if (VAR15[VAR9] > 0)
        {
            const VAR97 *VAR98 = VAR2->VAR99[VAR9] ? VAR100 : VAR101;
            FUN12(VAR2->VAR96[VAR9], VAR2->VAR94[VAR9], VAR2->VAR34[VAR9], VAR2->VAR36[VAR9], VAR2->VAR75[VAR9], VAR2->VAR60.VAR70, VAR98, VAR2->VAR102[VAR9]);
        }
    }
    if (VAR2->VAR103 && FUN2(VAR14))
    {
        int VAR104 = FUN3(VAR14, 9);
        while (VAR104--)
            FUN8(VAR14, 8);
    }
    FUN13(VAR2, VAR3);
    if (VAR2->VAR5 == VAR29)
        FUN14(VAR2);
    for (VAR9 = 1; VAR9 <= VAR2->VAR50; VAR9++)
    {
        float VAR105 = VAR2->VAR106 / 4194304.0f;
        if (VAR2->VAR5 == VAR107)
        {
            VAR105 *= VAR2->VAR21[VAR9 - 1];
        }
        else
        {
            VAR105 *= VAR2->VAR21[0];
        }
        VAR2->VAR108.FUN15(VAR2->VAR109[VAR9], VAR2->VAR110[VAR9], VAR105, 256);
    }
    VAR11 = VAR2->VAR50 != VAR2->VAR111 && !((VAR2->VAR112 & VAR113) && VAR2->VAR4 == VAR2->VAR111);
    if (VAR10)
    {
        if (VAR2->VAR114)
        {
            VAR2->VAR114 = 0;
            FUN16(VAR2);
        }
        FUN17(VAR2, VAR2->VAR50);
        if (VAR11)
        {
            VAR2->VAR108.FUN18(VAR2->VAR115, VAR2->VAR116, VAR2->VAR111, VAR2->VAR4, 256);
        }
    }
    else
    {
        if (VAR11)
        {
            VAR2->VAR108.FUN18(VAR2->VAR109 + 1, VAR2->VAR116, VAR2->VAR111, VAR2->VAR4, 256);
        }
        if (VAR11 && !VAR2->VAR114)
        {
            VAR2->VAR114 = 1;
            VAR2->VAR108.FUN18(VAR2->VAR117, VAR2->VAR116, VAR2->VAR111, VAR2->VAR4, 128);
        }
        FUN17(VAR2, VAR2->VAR111);
    }
    return 0;
}