static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    const VAR17 *VAR18;
    int VAR19, VAR20;
    if (VAR7)
    {
        if (VAR2->VAR21)
        {
            VAR8 = VAR2->VAR22[0][VAR2->VAR23[VAR5]];
            if (VAR5 < 4)
                VAR8 = (VAR8 + (VAR2->VAR24 >> 1)) / VAR2->VAR24;
            else
                VAR8 = (VAR8 + (VAR2->VAR25 >> 1)) / VAR2->VAR25;
            VAR12 = (VAR2->VAR26[VAR2->VAR27 + VAR2->VAR28 * VAR2->VAR29] << VAR5) & 32;
        }
        else
        {
            VAR8 = FUN2(VAR2, VAR5, &VAR12);
            if (VAR8 < 0)
                return -1;
        }
        VAR4[0] = VAR8;
        VAR9 = 0;
        if (!VAR6)
            goto VAR30;
        VAR14 = &VAR31;
        VAR16 = VAR31.VAR16[0];
        if (VAR2->VAR32)
        {
            if (VAR12 == 0)
                VAR18 = VAR2->VAR33.VAR34;
            else
                VAR18 = VAR2->VAR35.VAR34;
        }
        else
        {
            VAR18 = VAR2->VAR36.VAR34;
        }
        VAR19 = 1;
        VAR20 = 0;
    }
    else
    {
        VAR9 = -1;
        if (!VAR6)
        {
            VAR2->VAR37[VAR5] = VAR9;
            return 0;
        }
        VAR14 = &VAR38;
        VAR18 = VAR2->VAR36.VAR34;
        if (VAR2->VAR39)
        {
            VAR19 = 1;
            VAR20 = 0;
            VAR16 = VAR38.VAR16[0];
        }
        else
        {
            VAR19 = VAR2->VAR40 << 1;
            VAR20 = (VAR2->VAR40 - 1) | 1;
            VAR16 = VAR38.VAR16[VAR2->VAR40];
        }
    }
    {
        FUN3(VAR41, &VAR2->VAR42);
        for (;;)
        {
            FUN4(VAR41, &VAR2->VAR42);
            FUN5(VAR8, VAR11, VAR41, &VAR2->VAR42, VAR16, VAR43, 2);
            if (VAR8 == 0)
            {
                int VAR44;
                VAR44 = FUN6(VAR41, &VAR2->VAR42);
                if (VAR44 & 0x80000000)
                {
                    if (VAR44 & 0x40000000)
                    {
                        FUN7(VAR41, &VAR2->VAR42, 2);
                        VAR10 = FUN8(VAR41, &VAR2->VAR42, 1);
                        FUN7(VAR41, &VAR2->VAR42, 1);
                        VAR11 = FUN8(VAR41, &VAR2->VAR42, 6);
                        FUN9(VAR41, &VAR2->VAR42, 6);
                        FUN10(VAR41, &VAR2->VAR42, 2 + 1 + 6);
                        FUN4(VAR41, &VAR2->VAR42);
                        if (FUN8(VAR41, &VAR2->VAR42, 1) == 0)
                        {
                            fprintf(VAR45, "");
                            return -1;
                        };
                        FUN7(VAR41, &VAR2->VAR42, 1);
                        VAR8 = FUN11(VAR41, &VAR2->VAR42, 12);
                        FUN7(VAR41, &VAR2->VAR42, 12);
                        if (FUN8(VAR41, &VAR2->VAR42, 1) == 0)
                        {
                            fprintf(VAR45, "");
                            return -1;
                        };
                        FUN9(VAR41, &VAR2->VAR42, 1);
                        FUN10(VAR41, &VAR2->VAR42, 1 + 12 + 1);
                        if (VAR8 * VAR2->VAR40 > 1024 || VAR8 * VAR2->VAR40 < -1024)
                        {
                            fprintf(VAR45, "", VAR2->VAR40);
                            return -1;
                        }
                        {
                            const int VAR46 = FUN12(VAR8);
                            if (VAR46 <= VAR47 && VAR11 <= VAR48 && ((VAR2->VAR49 & VAR50) == 0))
                            {
                                const int VAR51 = VAR11 - VAR14->VAR52[VAR10][VAR46] - 1;
                                if (VAR46 <= VAR14->VAR53[VAR10][VAR11])
                                {
                                    fprintf(VAR45, "");
                                    return -1;
                                }
                                if (VAR46 <= VAR14->VAR53[VAR10][VAR11] * 2)
                                {
                                    fprintf(VAR45, "");
                                    return -1;
                                }
                                if (VAR51 >= 0 && VAR46 <= VAR14->VAR53[VAR10][VAR51])
                                {
                                    fprintf(VAR45, "");
                                    return -1;
                                }
                            }
                        }
                        if (VAR8 > 0)
                            VAR8 = VAR8 * VAR19 + VAR20;
                        else
                            VAR8 = VAR8 * VAR19 - VAR20;
                        VAR9 += VAR11 + 1;
                        if (VAR10)
                            VAR9 += 192;
                    }
                    else
                    {
                        FUN13(VAR41, &VAR2->VAR42, 2);
                        FUN4(VAR41, &VAR2->VAR42);
                        FUN14(VAR41, &VAR2->VAR42, 2);
                        FUN5(VAR8, VAR11, VAR41, &VAR2->VAR42, VAR16, VAR43, 2);
                        VAR9 += VAR11 + VAR14->VAR52[VAR11 >> 7][VAR8 / VAR19] + 1;
                        VAR8 = (VAR8 ^ FUN11(VAR41, &VAR2->VAR42, 1)) - FUN11(VAR41, &VAR2->VAR42, 1);
                        FUN13(VAR41, &VAR2->VAR42, 1);
                    }
                }
                else
                {
                    FUN13(VAR41, &VAR2->VAR42, 1);
                    FUN4(VAR41, &VAR2->VAR42);
                    FUN14(VAR41, &VAR2->VAR42, 1);
                    FUN5(VAR8, VAR11, VAR41, &VAR2->VAR42, VAR16, VAR43, 2);
                    VAR9 += VAR11;
                    VAR8 = VAR8 + VAR14->VAR53[VAR11 >> 7][(VAR11 - 1) & 63] * VAR19;
                    VAR8 = (VAR8 ^ FUN11(VAR41, &VAR2->VAR42, 1)) - FUN11(VAR41, &VAR2->VAR42, 1);
                    FUN13(VAR41, &VAR2->VAR42, 1);
                }
            }
            else
            {
                VAR9 += VAR11;
                VAR8 = (VAR8 ^ FUN11(VAR41, &VAR2->VAR42, 1)) - FUN11(VAR41, &VAR2->VAR42, 1);
                FUN13(VAR41, &VAR2->VAR42, 1);
            }
            if (VAR9 > 62)
            {
                VAR9 -= 192;
                if (VAR9 & (~63))
                {
                    fprintf(VAR45, "", VAR2->VAR27, VAR2->VAR28);
                    return -1;
                }
                VAR4[VAR18[VAR9]] = VAR8;
                break;
            }
            VAR4[VAR18[VAR9]] = VAR8;
        }
        FUN15(VAR41, &VAR2->VAR42);
    }
VAR30:
    if (VAR2->VAR54)
    {
        FUN16(VAR2, VAR4, VAR5, VAR12);
        if (VAR2->VAR32)
        {
            VAR9 = 63;
        }
    }
    VAR2->VAR37[VAR5] = VAR9;
    return 0;
}