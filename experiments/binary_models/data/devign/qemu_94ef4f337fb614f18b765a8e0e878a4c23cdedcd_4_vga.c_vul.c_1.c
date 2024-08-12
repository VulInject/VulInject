static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2->VAR6);
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22, VAR23, VAR24, VAR25, VAR26;
    VAR27 *VAR28, *VAR29, *VAR30, *VAR31, *VAR32;
    const VAR27 *VAR33, *VAR34[2];
    int VAR35, VAR36;
    VAR37 *VAR38;
    VAR37 *VAR39;
    int64_t VAR40 = FUN3(VAR41);
    VAR25 = VAR2->VAR42[VAR43];
    VAR22 = (((VAR25 >> 4) & 1) | ((VAR25 << 1) & 6)) * 8192 * 4 + 2;
    if (VAR22 != VAR2->VAR44[0])
    {
        VAR2->VAR44[0] = VAR22;
        VAR3 = 1;
    }
    VAR34[0] = VAR2->VAR45 + VAR22;
    VAR22 = (((VAR25 >> 5) & 1) | ((VAR25 >> 1) & 6)) * 8192 * 4 + 2;
    VAR34[1] = VAR2->VAR45 + VAR22;
    if (VAR22 != VAR2->VAR44[1])
    {
        VAR2->VAR44[1] = VAR22;
        VAR3 = 1;
    }
    if (VAR2->VAR46 & (1 << 2) || VAR2->VAR47)
    {
        VAR2->VAR46 = 0;
        VAR3 = 1;
    }
    VAR3 |= FUN4(VAR2);
    VAR36 = VAR2->VAR36;
    FUN5(VAR2, &VAR14, &VAR13, &VAR10, &VAR9);
    if ((VAR13 * VAR14) <= 1)
    {
        return;
    }
    if ((VAR13 * VAR14) > VAR48)
    {
        return;
    }
    if (VAR14 != VAR2->VAR49 || VAR13 != VAR2->VAR50 || VAR10 != VAR2->VAR51 || VAR9 != VAR2->VAR52 || VAR2->VAR53)
    {
        VAR2->VAR54 = VAR14 * VAR10;
        VAR2->VAR55 = VAR13 * VAR9;
        FUN6(VAR2->VAR6, VAR2->VAR54, VAR2->VAR55);
        VAR5 = FUN2(VAR2->VAR6);
        FUN7(VAR2->VAR6, VAR14, VAR13);
        VAR2->VAR53 = 0;
        VAR2->VAR49 = VAR14;
        VAR2->VAR50 = VAR13;
        VAR2->VAR52 = VAR9;
        VAR2->VAR51 = VAR10;
        VAR3 = 1;
    }
    VAR3 |= FUN8(VAR2);
    VAR38 = VAR2->VAR56;
    VAR19 = VAR10 * FUN9(VAR5);
    if (VAR3)
    {
        VAR2->VAR57 = 1;
    }
    if (VAR2->VAR58)
    {
        VAR2->VAR58 = 0;
        VAR3 |= 1;
    }
    VAR26 = ((VAR2->VAR59[VAR60] << 8) | VAR2->VAR59[VAR61]) - VAR2->VAR62;
    if (VAR26 != VAR2->VAR26 || VAR2->VAR59[VAR63] != VAR2->VAR64 || VAR2->VAR59[VAR65] != VAR2->VAR66)
    {
        if (VAR2->VAR26 < VAR48)
            VAR2->VAR67[VAR2->VAR26] = -1;
        if (VAR26 < VAR48)
            VAR2->VAR67[VAR26] = -1;
        VAR2->VAR26 = VAR26;
        VAR2->VAR64 = VAR2->VAR59[VAR63];
        VAR2->VAR66 = VAR2->VAR59[VAR65];
    }
    VAR32 = VAR2->VAR45 + (VAR2->VAR62 + VAR26) * 4;
    if (VAR40 >= VAR2->VAR68)
    {
        VAR2->VAR68 = VAR40 + VAR69 / 2;
        VAR2->VAR70 = !VAR2->VAR70;
    }
    VAR31 = FUN10(VAR5);
    VAR18 = FUN11(VAR5);
    VAR39 = VAR2->VAR67;
    VAR20 = 0;
    VAR22 = VAR2->VAR62 * 4;
    for (VAR8 = 0; VAR8 < VAR13; VAR8++)
    {
        VAR28 = VAR31;
        VAR30 = VAR2->VAR45 + VAR22;
        VAR16 = VAR14;
        VAR17 = -1;
        for (VAR7 = 0; VAR7 < VAR14; VAR7++)
        {
            VAR15 = *(VAR71 *)VAR30;
            if (VAR3 || VAR15 != *VAR39 || VAR30 == VAR32)
            {
                if (VAR7 < VAR16)
                    VAR16 = VAR7;
                if (VAR7 > VAR17)
                    VAR17 = VAR7;
                *VAR39 = VAR15;
                VAR11 = VAR15 >> 8;
                VAR12 = VAR15 & 0xff;
                VAR11 = VAR15 & 0xff;
                VAR12 = VAR15 >> 8;
                VAR33 = VAR34[(VAR12 >> 3) & 1];
                VAR33 += 32 * 4 * VAR11;
                VAR24 = VAR38[VAR12 >> 4];
                VAR23 = VAR38[VAR12 & 0x0f];
                if (VAR10 == 16)
                {
                    FUN12(VAR28, VAR18, VAR33, VAR9, VAR23, VAR24);
                }
                else if (VAR10 != 9)
                {
                    FUN13(VAR28, VAR18, VAR33, VAR9, VAR23, VAR24);
                }
                else
                {
                    VAR35 = 0;
                    if (VAR11 >= 0xb0 && VAR11 <= 0xdf && (VAR2->VAR72[VAR73] & 0x04))
                    {
                        VAR35 = 1;
                    }
                    FUN14(VAR28, VAR18, VAR33, VAR9, VAR23, VAR24, VAR35);
                }
                if (VAR30 == VAR32 && !(VAR2->VAR59[VAR63] & 0x20) && VAR2->VAR70)
                {
                    int VAR74, VAR75, VAR76;
                    VAR74 = VAR2->VAR59[VAR63] & 0x1f;
                    VAR75 = VAR2->VAR59[VAR65] & 0x1f;
                    if (VAR75 > VAR9 - 1)
                        VAR75 = VAR9 - 1;
                    if (VAR75 >= VAR74 && VAR74 < VAR9)
                    {
                        VAR76 = VAR75 - VAR74 + 1;
                        VAR29 = VAR28 + VAR18 * VAR74;
                        if (VAR10 == 16)
                        {
                            FUN12(VAR29, VAR18, VAR77, VAR76, VAR23, VAR24);
                        }
                        else if (VAR10 != 9)
                        {
                            FUN13(VAR29, VAR18, VAR77, VAR76, VAR23, VAR24);
                        }
                        else
                        {
                            FUN14(VAR29, VAR18, VAR77, VAR76, VAR23, VAR24, 1);
                        }
                    }
                }
            }
            VAR28 += VAR19;
            VAR30 += 4;
            VAR39++;
        }
        if (VAR17 != -1)
        {
            FUN15(VAR2->VAR6, VAR16 * VAR10, VAR8 * VAR9, (VAR17 - VAR16 + 1) * VAR10, VAR9);
        }
        VAR31 += VAR18 * VAR9;
        VAR21 = VAR20 + VAR9;
        VAR22 += VAR36;
        if (VAR20 < VAR2->VAR78 && VAR21 >= VAR2->VAR78)
        {
            VAR22 = 0;
        }
        VAR20 = VAR21;
    }
}