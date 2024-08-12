static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    const VAR18 *VAR19;
    int VAR20, VAR21;
    if (VAR7)
    {
        if (VAR2->VAR22)
        {
            if (VAR2->VAR23)
            {
                VAR9 = VAR2->VAR24[0][VAR2->VAR25[VAR5]];
                if (VAR5 < 4)
                    VAR9 = FUN2((VAR9 + (VAR2->VAR26 >> 1)), VAR2->VAR26);
                else
                    VAR9 = FUN2((VAR9 + (VAR2->VAR27 >> 1)), VAR2->VAR27);
                VAR13 = (VAR2->VAR28[VAR2->VAR29 + VAR2->VAR30 * VAR2->VAR31] << VAR5) & 32;
            }
            else
            {
                VAR9 = FUN3(VAR2, VAR5, &VAR13);
                if (VAR9 < 0)
                    return -1;
            }
            VAR4[0] = VAR9;
            VAR10 = 0;
        }
        else
        {
            VAR10 = -1;
            FUN4(VAR2, VAR5, 0, &VAR13, 0);
        }
        if (!VAR6)
            goto VAR32;
        if (VAR8)
        {
            VAR15 = &VAR33;
            VAR17 = VAR33.VAR17[0];
        }
        else
        {
            VAR15 = &VAR34;
            VAR17 = VAR34.VAR17[0];
        }
        if (VAR2->VAR35)
        {
            if (VAR13 == 0)
                VAR19 = VAR2->VAR36.VAR37;
            else
                VAR19 = VAR2->VAR38.VAR37;
        }
        else
        {
            VAR19 = VAR2->VAR39.VAR37;
        }
        VAR20 = 1;
        VAR21 = 0;
    }
    else
    {
        VAR10 = -1;
        if (!VAR6)
        {
            VAR2->VAR40[VAR5] = VAR10;
            return 0;
        }
        if (VAR8)
            VAR15 = &VAR41;
        else
            VAR15 = &VAR42;
        VAR19 = VAR2->VAR39.VAR37;
        if (VAR2->VAR43)
        {
            VAR20 = 1;
            VAR21 = 0;
            if (VAR8)
            {
                VAR17 = VAR41.VAR17[0];
            }
            else
            {
                VAR17 = VAR42.VAR17[0];
            }
        }
        else
        {
            VAR20 = VAR2->VAR44 << 1;
            VAR21 = (VAR2->VAR44 - 1) | 1;
            if (VAR8)
            {
                VAR17 = VAR41.VAR17[VAR2->VAR44];
            }
            else
            {
                VAR17 = VAR42.VAR17[VAR2->VAR44];
            }
        }
    }
    {
        FUN5(VAR45, &VAR2->VAR46);
        for (;;)
        {
            FUN6(VAR45, &VAR2->VAR46);
            FUN7(VAR9, VAR12, VAR45, &VAR2->VAR46, VAR17, VAR47, 2, 0);
            if (VAR9 == 0)
            {
                if (VAR8)
                {
                    if (FUN8(VAR45, &VAR2->VAR46, 1) == 0)
                    {
                        FUN9(VAR2->VAR48, VAR49, "");
                        return -1;
                    };
                    FUN10(VAR45, &VAR2->VAR46, 1);
                    VAR11 = FUN8(VAR45, &VAR2->VAR46, 1);
                    FUN10(VAR45, &VAR2->VAR46, 1);
                    VAR12 = FUN8(VAR45, &VAR2->VAR46, 6);
                    FUN11(VAR45, &VAR2->VAR46, 6);
                    FUN12(VAR45, &VAR2->VAR46, 1 + 1 + 6);
                    FUN6(VAR45, &VAR2->VAR46);
                    if (FUN8(VAR45, &VAR2->VAR46, 1) == 0)
                    {
                        FUN9(VAR2->VAR48, VAR49, "");
                        return -1;
                    };
                    FUN10(VAR45, &VAR2->VAR46, 1);
                    VAR9 = FUN8(VAR45, &VAR2->VAR46, 11);
                    FUN10(VAR45, &VAR2->VAR46, 11);
                    if (FUN8(VAR45, &VAR2->VAR46, 5) != 0x10)
                    {
                        FUN9(VAR2->VAR48, VAR49, "");
                        return -1;
                    };
                    FUN10(VAR45, &VAR2->VAR46, 5);
                    VAR9 = VAR9 * VAR20 + VAR21;
                    VAR9 = (VAR9 ^ FUN13(VAR45, &VAR2->VAR46, 1)) - FUN13(VAR45, &VAR2->VAR46, 1);
                    FUN11(VAR45, &VAR2->VAR46, 1);
                    FUN12(VAR45, &VAR2->VAR46, 1 + 11 + 5 + 1);
                    VAR10 += VAR12 + 1;
                    if (VAR11)
                        VAR10 += 192;
                }
                else
                {
                    int VAR50;
                    VAR50 = FUN14(VAR45, &VAR2->VAR46);
                    if (VAR51)
                        VAR50 ^= 0xC0000000;
                    if (VAR50 & 0x80000000)
                    {
                        if (VAR50 & 0x40000000)
                        {
                            FUN10(VAR45, &VAR2->VAR46, 2);
                            VAR11 = FUN8(VAR45, &VAR2->VAR46, 1);
                            FUN10(VAR45, &VAR2->VAR46, 1);
                            VAR12 = FUN8(VAR45, &VAR2->VAR46, 6);
                            FUN11(VAR45, &VAR2->VAR46, 6);
                            FUN12(VAR45, &VAR2->VAR46, 2 + 1 + 6);
                            FUN6(VAR45, &VAR2->VAR46);
                            if (VAR51)
                            {
                                VAR9 = FUN13(VAR45, &VAR2->VAR46, 12);
                                FUN15(VAR45, &VAR2->VAR46, 12);
                            }
                            else
                            {
                                if (FUN8(VAR45, &VAR2->VAR46, 1) == 0)
                                {
                                    FUN9(VAR2->VAR48, VAR49, "");
                                    return -1;
                                };
                                FUN10(VAR45, &VAR2->VAR46, 1);
                                VAR9 = FUN13(VAR45, &VAR2->VAR46, 12);
                                FUN10(VAR45, &VAR2->VAR46, 12);
                                if (FUN8(VAR45, &VAR2->VAR46, 1) == 0)
                                {
                                    FUN9(VAR2->VAR48, VAR49, "");
                                    return -1;
                                };
                                FUN11(VAR45, &VAR2->VAR46, 1);
                                FUN12(VAR45, &VAR2->VAR46, 1 + 12 + 1);
                            }
                            if (VAR2->VAR52 >= VAR53)
                            {
                                const int VAR54 = FUN16(VAR9);
                                if (VAR54 <= VAR55 && VAR12 <= VAR56)
                                {
                                    const int VAR57 = VAR12 - VAR15->VAR58[VAR11][VAR54] - 1;
                                    if (VAR54 <= VAR15->VAR59[VAR11][VAR12])
                                    {
                                        FUN9(VAR2->VAR48, VAR49, "");
                                        return -1;
                                    }
                                    if (VAR2->VAR52 > VAR53)
                                    {
                                        if (VAR54 <= VAR15->VAR59[VAR11][VAR12] * 2)
                                        {
                                            FUN9(VAR2->VAR48, VAR49, "");
                                            return -1;
                                        }
                                        if (VAR57 >= 0 && VAR54 <= VAR15->VAR59[VAR11][VAR57])
                                        {
                                            FUN9(VAR2->VAR48, VAR49, "");
                                            return -1;
                                        }
                                    }
                                }
                            }
                            if (VAR9 > 0)
                                VAR9 = VAR9 * VAR20 + VAR21;
                            else
                                VAR9 = VAR9 * VAR20 - VAR21;
                            if ((unsigned)(VAR9 + 2048) > 4095)
                            {
                                if (VAR2->VAR52 > VAR53)
                                {
                                    if (VAR9 > 2560 || VAR9 < -2560)
                                    {
                                        FUN9(VAR2->VAR48, VAR49, "", VAR2->VAR44);
                                        return -1;
                                    }
                                }
                                VAR9 = VAR9 < 0 ? -2048 : 2047;
                            }
                            VAR10 += VAR12 + 1;
                            if (VAR11)
                                VAR10 += 192;
                        }
                        else
                        {
                            FUN15(VAR45, &VAR2->VAR46, 2);
                            FUN6(VAR45, &VAR2->VAR46);
                            FUN17(VAR45, &VAR2->VAR46, 2);
                            FUN7(VAR9, VAR12, VAR45, &VAR2->VAR46, VAR17, VAR47, 2, 1);
                            VAR10 += VAR12 + VAR15->VAR58[VAR12 >> 7][VAR9 / VAR20] + 1;
                            VAR9 = (VAR9 ^ FUN13(VAR45, &VAR2->VAR46, 1)) - FUN13(VAR45, &VAR2->VAR46, 1);
                            FUN15(VAR45, &VAR2->VAR46, 1);
                        }
                    }
                    else
                    {
                        FUN15(VAR45, &VAR2->VAR46, 1);
                        FUN6(VAR45, &VAR2->VAR46);
                        FUN17(VAR45, &VAR2->VAR46, 1);
                        FUN7(VAR9, VAR12, VAR45, &VAR2->VAR46, VAR17, VAR47, 2, 1);
                        VAR10 += VAR12;
                        VAR9 = VAR9 + VAR15->VAR59[VAR12 >> 7][(VAR12 - 1) & 63] * VAR20;
                        VAR9 = (VAR9 ^ FUN13(VAR45, &VAR2->VAR46, 1)) - FUN13(VAR45, &VAR2->VAR46, 1);
                        FUN15(VAR45, &VAR2->VAR46, 1);
                    }
                }
            }
            else
            {
                VAR10 += VAR12;
                VAR9 = (VAR9 ^ FUN13(VAR45, &VAR2->VAR46, 1)) - FUN13(VAR45, &VAR2->VAR46, 1);
                FUN15(VAR45, &VAR2->VAR46, 1);
            }
            if (VAR10 > 62)
            {
                VAR10 -= 192;
                if (VAR10 & (~63))
                {
                    FUN9(VAR2->VAR48, VAR49, "", VAR2->VAR29, VAR2->VAR30);
                    return -1;
                }
                VAR4[VAR19[VAR10]] = VAR9;
                break;
            }
            VAR4[VAR19[VAR10]] = VAR9;
        }
        FUN18(VAR45, &VAR2->VAR46);
    }
VAR32:
    if (VAR7)
    {
        if (!VAR2->VAR22)
        {
            VAR4[0] = FUN4(VAR2, VAR5, VAR4[0], &VAR13, 0);
            VAR10 -= VAR10 >> 31;
        }
        FUN19(VAR2, VAR4, VAR5, VAR13);
        if (VAR2->VAR35)
        {
            VAR10 = 63;
        }
    }
    VAR2->VAR40[VAR5] = VAR10;
    return 0;
}