static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR3 *VAR7, int VAR8, int VAR9)
{
    int16_t VAR10[64];
    DCTELEM VAR11[64];
    const int *VAR12;
    const VAR13 *VAR14 = VAR2->VAR15.VAR14;
    const VAR13 *VAR16 = VAR2->VAR15.VAR17;
    int VAR18[65];
    int VAR19 = 0;
    int VAR20 = 0;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    VAR13 *VAR27;
    VAR13 *VAR28;
    int VAR29;
    int VAR30, VAR31, VAR32, VAR33;
    static int VAR34 = 0;
    static int VAR35 = 0;
    static int VAR36 = 0;
    static int VAR37 = 0;
    static int VAR38 = 0;
    static int VAR39 = 0;
    static int VAR40 = 0;
    if (VAR41[0][0] == 0)
        FUN2(VAR2->VAR42.VAR43);
    VAR21 = VAR9 * 2;
    VAR22 = (VAR9 - 1) | 1;
    if (VAR2->VAR44)
    {
        if (!VAR2->VAR45)
        {
            if (VAR8 < 4)
                VAR32 = VAR2->VAR46;
            else
                VAR32 = VAR2->VAR47;
        }
        else
        {
            VAR32 = 1;
            VAR22 = 0;
        }
        VAR32 <<= VAR48 - 3;
        VAR26 = VAR4[0] * VAR32;
        VAR23 = 1;
        VAR12 = VAR2->VAR49[VAR9];
        VAR27 = VAR2->VAR50;
        VAR28 = VAR2->VAR51;
    }
    else
    {
        VAR26 = 0;
        VAR23 = 0;
        VAR12 = VAR2->VAR52[VAR9];
        VAR27 = VAR2->VAR53;
        VAR28 = VAR2->VAR54;
    }
    VAR24 = VAR2->VAR55[VAR8];
    {
        START_TIMER VAR26 += (1 << (VAR48 - 1));
        for (VAR25 = 0; VAR25 < 64; VAR25++)
        {
            VAR10[VAR25] = VAR26 - (VAR7[VAR25] << VAR48);
        }
        FUN3("")
    }
    VAR33 = 0;
    for (VAR25 = 0; VAR25 < 64; VAR25++)
    {
        int VAR56 = 36;
        int VAR57 = 4;
        int VAR58;
        VAR58 = FUN4(VAR6[VAR25]) + VAR57 * VAR56;
        VAR58 = 15 + (48 * VAR57 * VAR56 + VAR58 / 2) / VAR58;
        VAR6[VAR25] = VAR58;
        assert(VAR58 > 0);
        assert(VAR58 < (1 << 6));
        VAR33 += VAR58 * VAR58;
    }
    VAR29 = VAR33 * (VAR59)VAR2->VAR60 >> (VAR61 - 6 + 6 + 6 + 6);
    {
        START_TIMER VAR31 = 0;
        VAR30 = 0;
        for (VAR25 = VAR23; VAR25 <= VAR24; VAR25++)
        {
            int VAR62 = VAR16[VAR25];
            const int VAR63 = VAR4[VAR62];
            int VAR64;
            if (VAR63)
            {
                if (VAR63 < 0)
                    VAR64 = VAR21 * VAR63 - VAR22;
                else
                    VAR64 = VAR21 * VAR63 + VAR22;
                VAR18[VAR30++] = VAR31;
                VAR31 = 0;
                VAR2->VAR42.FUN5(VAR10, VAR41[VAR62], VAR64);
            }
            else
            {
                VAR31++;
            }
        }
        if (VAR24 > 0)
        {
            FUN3("")
        }
    }
    {
        START_TIMER for (;;)
        {
            int VAR65 = VAR2->VAR42.FUN6(VAR10, VAR6, VAR41[0], 0);
            int VAR66 = 0;
            int VAR67 = 0;
            int VAR68, VAR69 = 0, VAR70;
            {
                START_TIMER VAR70 = VAR24 > 2 || VAR2->VAR71->VAR72 >= 3;
                if (VAR70)
                {
                    {
                        START_TIMER for (VAR25 = 0; VAR25 < 64; VAR25++)
                        {
                            int VAR58 = VAR6[VAR25];
                            VAR11[VAR25] = (VAR10[VAR25] * VAR58 * VAR58 + (1 << (VAR48 + 12 - 1))) >> (VAR48 + 12);
                        }
                        FUN3("")
                    }
                    {
                        START_TIMER VAR2->VAR42.FUN7(VAR11);
                        FUN3("")
                    }
                }
                if (VAR23)
                {
                    const int VAR63 = VAR4[0];
                    int VAR73, VAR74;
                    assert(VAR2->VAR44);
                    VAR74 = VAR32 * VAR63;
                    for (VAR73 = -1; VAR73 <= 1; VAR73 += 2)
                    {
                        int VAR75 = VAR63 + VAR73;
                        int VAR76, VAR77;
                        VAR77 = VAR32 * VAR75;
                        if (VAR77 >= 2048 || VAR77 < 0)
                            continue;
                        VAR76 = VAR2->VAR42.FUN6(VAR10, VAR6, VAR41[0], VAR77 - VAR74);
                        if (VAR76 < VAR65)
                        {
                            VAR65 = VAR76;
                            VAR66 = 0;
                            VAR67 = VAR73;
                            VAR69 = VAR77 - VAR74;
                        }
                    }
                }
                VAR31 = 0;
                VAR30 = 0;
                VAR68 = VAR18[VAR30++];
                VAR20 = 0;
                VAR19 = 0;
                for (VAR25 = VAR23; VAR25 < 64; VAR25++)
                {
                    int VAR62 = VAR16[VAR25];
                    const int VAR63 = VAR4[VAR62];
                    int VAR73, VAR74;
                    if (VAR2->VAR71->VAR72 < 3 && VAR25 > VAR24 + 1)
                        break;
                    if (VAR63)
                    {
                        if (VAR63 < 0)
                            VAR74 = VAR21 * VAR63 - VAR22;
                        else
                            VAR74 = VAR21 * VAR63 + VAR22;
                        VAR68 = VAR18[VAR30++];
                    }
                    else
                    {
                        VAR74 = 0;
                        VAR68--;
                        assert(VAR68 >= 0 || VAR25 >= VAR24);
                    }
                    for (VAR73 = -1; VAR73 <= 1; VAR73 += 2)
                    {
                        int VAR75 = VAR63 + VAR73;
                        int VAR76, VAR77, VAR78;
                        VAR76 = 0;
                        if (VAR2->VAR71->VAR72 < 2 && FUN4(VAR75) > FUN4(VAR63))
                            continue;
                        if (VAR75)
                        {
                            if (VAR75 < 0)
                                VAR77 = VAR21 * VAR75 - VAR22;
                            else
                                VAR77 = VAR21 * VAR75 + VAR22;
                            if (VAR77 >= 2048 || VAR77 <= -2048)
                                continue;
                            if (VAR63)
                            {
                                if (VAR63 < 63 && VAR63 > -63)
                                {
                                    if (VAR25 < VAR24)
                                        VAR76 += VAR27[FUN8(VAR31, VAR75 + 64)] - VAR27[FUN8(VAR31, VAR63 + 64)];
                                    else
                                        VAR76 += VAR28[FUN8(VAR31, VAR75 + 64)] - VAR28[FUN8(VAR31, VAR63 + 64)];
                                }
                            }
                            else
                            {
                                assert(FUN4(VAR75) == 1);
                                if (VAR70)
                                {
                                    int VAR79 = VAR11[VAR14[VAR25]];
                                    if (VAR79 && (VAR79 ^ VAR75) >= 0)
                                        continue;
                                }
                                if (VAR25 < VAR24)
                                {
                                    int VAR80 = VAR25 + VAR68 + 1;
                                    int VAR81 = VAR4[VAR16[VAR80]] + 64;
                                    if (VAR81 & (~127))
                                        VAR81 = 0;
                                    if (VAR80 < VAR24)
                                        VAR76 += VAR27[FUN8(VAR31, 65)] + VAR27[FUN8(VAR68, VAR81)] - VAR27[FUN8(VAR31 + VAR68 + 1, VAR81)];
                                    else
                                        VAR76 += VAR27[FUN8(VAR31, 65)] + VAR28[FUN8(VAR68, VAR81)] - VAR28[FUN8(VAR31 + VAR68 + 1, VAR81)];
                                }
                                else
                                {
                                    VAR76 += VAR28[FUN8(VAR31, 65)];
                                    if (VAR20)
                                    {
                                        VAR76 += VAR27[FUN8(VAR19, VAR20)] - VAR28[FUN8(VAR19, VAR20)];
                                    }
                                }
                            }
                        }
                        else
                        {
                            VAR77 = 0;
                            assert(FUN4(VAR63) == 1);
                            if (VAR25 < VAR24)
                            {
                                int VAR80 = VAR25 + VAR68 + 1;
                                int VAR81 = VAR4[VAR16[VAR80]] + 64;
                                if (VAR81 & (~127))
                                    VAR81 = 0;
                                if (VAR80 < VAR24)
                                    VAR76 += VAR27[FUN8(VAR31 + VAR68 + 1, VAR81)] - VAR27[FUN8(VAR68, VAR81)] - VAR27[FUN8(VAR31, 65)];
                                else
                                    VAR76 += VAR28[FUN8(VAR31 + VAR68 + 1, VAR81)] - VAR28[FUN8(VAR68, VAR81)] - VAR27[FUN8(VAR31, 65)];
                            }
                            else
                            {
                                VAR76 += -VAR28[FUN8(VAR31, 65)];
                                if (VAR20)
                                {
                                    VAR76 += VAR28[FUN8(VAR19, VAR20)] - VAR27[FUN8(VAR19, VAR20)];
                                }
                            }
                        }
                        VAR76 *= VAR29;
                        VAR78 = VAR77 - VAR74;
                        assert((VAR76 < 100 * VAR29 && VAR76 > -100 * VAR29) || VAR29 == 0);
                        VAR76 += VAR2->VAR42.FUN6(VAR10, VAR6, VAR41[VAR62], VAR78);
                        if (VAR76 < VAR65)
                        {
                            VAR65 = VAR76;
                            VAR66 = VAR25;
                            VAR67 = VAR73;
                            VAR69 = VAR78;
                        }
                    }
                    if (VAR63)
                    {
                        VAR20 = VAR63 + 64;
                        if (VAR20 & (~127))
                            VAR20 = 0;
                        VAR19 = VAR31;
                        VAR31 = 0;
                    }
                    else
                    {
                        VAR31++;
                    }
                }
                FUN3("")
            }
            if (VAR67)
            {
                int VAR62 = VAR16[VAR66];
                VAR4[VAR62] += VAR67;
                if (VAR66 > VAR24)
                {
                    VAR24 = VAR66;
                    assert(VAR4[VAR62]);
                    VAR35++;
                }
                else
                {
                    if (VAR4[VAR62])
                    {
                        if (VAR4[VAR62] - VAR67)
                        {
                            if (FUN4(VAR4[VAR62]) > FUN4(VAR4[VAR62] - VAR67))
                            {
                                VAR38++;
                            }
                            else
                            {
                                VAR39++;
                            }
                        }
                        else
                        {
                            VAR37++;
                        }
                    }
                    else
                    {
                        VAR36++;
                    }
                    for (; VAR24 >= VAR23; VAR24--)
                    {
                        if (VAR4[VAR16[VAR24]])
                            break;
                    }
                }
                VAR34++;
                if (256 * 256 * 256 * 64 % VAR34 == 0)
                {
                    FUN9("", VAR35, VAR36, VAR37, VAR38, VAR39, VAR40, VAR2->VAR82, VAR2->VAR83, VAR2->VAR84);
                }
                VAR31 = 0;
                VAR30 = 0;
                for (VAR25 = VAR23; VAR25 <= VAR24; VAR25++)
                {
                    int VAR62 = VAR16[VAR25];
                    const int VAR63 = VAR4[VAR62];
                    if (VAR63)
                    {
                        VAR18[VAR30++] = VAR31;
                        VAR31 = 0;
                    }
                    else
                    {
                        VAR31++;
                    }
                }
                VAR2->VAR42.FUN5(VAR10, VAR41[VAR62], VAR69);
            }
            else
            {
                break;
            }
        }
        if (VAR24 > 0)
        {
            FUN3("")
        }
    }
    return VAR24;
}