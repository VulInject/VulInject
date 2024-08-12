static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR22 *VAR23, *VAR24, *VAR25, *VAR26, *VAR27, *VAR28;
    const VAR22 *VAR29, *VAR30[2];
    int VAR31, VAR32, VAR33;
    VAR34 *VAR35;
    VAR34 *VAR36;
    VAR37 *VAR38;
    VAR39 *VAR40;
    FUN2(VAR2);
    VAR20 = VAR2->VAR41[3];
    VAR17 = (((VAR20 >> 4) & 1) | ((VAR20 << 1) & 6)) * 8192 * 4 + 2;
    if (VAR17 != VAR2->VAR42[0])
    {
        VAR2->VAR42[0] = VAR17;
        VAR3 = 1;
    }
    VAR30[0] = VAR2->VAR43 + VAR17;
    VAR17 = (((VAR20 >> 5) & 1) | ((VAR20 >> 1) & 6)) * 8192 * 4 + 2;
    VAR30[1] = VAR2->VAR43 + VAR17;
    if (VAR17 != VAR2->VAR42[1])
    {
        VAR2->VAR42[1] = VAR17;
        VAR3 = 1;
    }
    if (VAR2->VAR44 & (1 << 2))
    {
        VAR2->VAR44 = 0;
        VAR3 = 1;
    }
    VAR3 |= FUN3(VAR2);
    VAR32 = VAR2->VAR32;
    VAR26 = VAR2->VAR43 + (VAR2->VAR45 * 4);
    FUN4(VAR2, &VAR11, &VAR10, &VAR7, &VAR6);
    VAR16 = VAR7 * ((FUN5(VAR2->VAR46) + 7) >> 3);
    if ((VAR10 * VAR11) > VAR47)
    {
        return;
    }
    if (VAR11 != VAR2->VAR48 || VAR10 != VAR2->VAR49 || VAR7 != VAR2->VAR50 || VAR6 != VAR2->VAR51 || VAR2->VAR52)
    {
        VAR2->VAR53 = VAR11 * VAR7;
        VAR2->VAR54 = VAR10 * VAR6;
        FUN6(VAR2->VAR46, VAR2->VAR53, VAR2->VAR54);
        VAR2->VAR52 = 0;
        VAR2->VAR48 = VAR11;
        VAR2->VAR49 = VAR10;
        VAR2->VAR51 = VAR6;
        VAR2->VAR50 = VAR7;
        VAR3 = 1;
    }
    VAR2->VAR55 = VAR56[FUN7(VAR2->VAR46)];
    VAR3 |= FUN8(VAR2);
    VAR35 = VAR2->VAR57;
    VAR16 = VAR7 * ((FUN5(VAR2->VAR46) + 7) >> 3);
    VAR21 = ((VAR2->VAR58[0x0e] << 8) | VAR2->VAR58[0x0f]) - VAR2->VAR45;
    if (VAR21 != VAR2->VAR21 || VAR2->VAR58[0xa] != VAR2->VAR59 || VAR2->VAR58[0xb] != VAR2->VAR60)
    {
        if (VAR2->VAR21 < VAR47)
            VAR2->VAR61[VAR2->VAR21] = -1;
        if (VAR21 < VAR47)
            VAR2->VAR61[VAR21] = -1;
        VAR2->VAR21 = VAR21;
        VAR2->VAR59 = VAR2->VAR58[0xa];
        VAR2->VAR60 = VAR2->VAR58[0xb];
    }
    VAR28 = VAR2->VAR43 + (VAR2->VAR45 + VAR21) * 4;
    VAR33 = FUN7(VAR2->VAR46);
    if (VAR7 == 16)
        VAR38 = VAR62[VAR33];
    else
        VAR38 = VAR63[VAR33];
    VAR40 = VAR64[VAR33];
    VAR27 = FUN9(VAR2->VAR46);
    VAR15 = FUN10(VAR2->VAR46);
    VAR36 = VAR2->VAR61;
    for (VAR5 = 0; VAR5 < VAR10; VAR5++)
    {
        VAR23 = VAR27;
        VAR25 = VAR26;
        VAR13 = VAR11;
        VAR14 = -1;
        for (VAR4 = 0; VAR4 < VAR11; VAR4++)
        {
            VAR12 = *(VAR65 *)VAR25;
            if (VAR3 || VAR12 != *VAR36)
            {
                if (VAR4 < VAR13)
                    VAR13 = VAR4;
                if (VAR4 > VAR14)
                    VAR14 = VAR4;
                *VAR36 = VAR12;
                VAR8 = VAR12 >> 8;
                VAR9 = VAR12 & 0xff;
                VAR8 = VAR12 & 0xff;
                VAR9 = VAR12 >> 8;
                VAR29 = VAR30[(VAR9 >> 3) & 1];
                VAR29 += 32 * 4 * VAR8;
                VAR19 = VAR35[VAR9 >> 4];
                VAR18 = VAR35[VAR9 & 0x0f];
                if (VAR7 != 9)
                {
                    FUN11(VAR23, VAR15, VAR29, VAR6, VAR18, VAR19);
                }
                else
                {
                    VAR31 = 0;
                    if (VAR8 >= 0xb0 && VAR8 <= 0xdf && (VAR2->VAR66[0x10] & 0x04))
                        VAR31 = 1;
                    FUN12(VAR23, VAR15, VAR29, VAR6, VAR18, VAR19, VAR31);
                }
                if (VAR25 == VAR28 && !(VAR2->VAR58[0x0a] & 0x20))
                {
                    int VAR67, VAR68, VAR69;
                    VAR67 = VAR2->VAR58[0x0a] & 0x1f;
                    VAR68 = VAR2->VAR58[0x0b] & 0x1f;
                    if (VAR68 > VAR6 - 1)
                        VAR68 = VAR6 - 1;
                    if (VAR68 >= VAR67 && VAR67 < VAR6)
                    {
                        VAR69 = VAR68 - VAR67 + 1;
                        VAR24 = VAR23 + VAR15 * VAR67;
                        if (VAR7 != 9)
                        {
                            FUN11(VAR24, VAR15, VAR70, VAR69, VAR18, VAR19);
                        }
                        else
                        {
                            FUN12(VAR24, VAR15, VAR70, VAR69, VAR18, VAR19, 1);
                        }
                    }
                }
            }
            VAR23 += VAR16;
            VAR25 += 4;
            VAR36++;
        }
        if (VAR14 != -1)
        {
            FUN13(VAR2->VAR46, VAR13 * VAR7, VAR5 * VAR6, (VAR14 - VAR13 + 1) * VAR7, VAR6);
        }
        VAR27 += VAR15 * VAR6;
        VAR26 += VAR32;
    }
}