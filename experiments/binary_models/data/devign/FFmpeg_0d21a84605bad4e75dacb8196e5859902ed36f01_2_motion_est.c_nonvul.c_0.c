void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6, *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    int VAR25 = 0, VAR26 = 0;
    int VAR27[10][2];
    const int VAR28 = 1 + VAR2->VAR29;
    int VAR30 = 0;
    VAR31 *VAR32 = VAR2->VAR33[0];
    FUN2(VAR2, &VAR13, &VAR17, &VAR18, &VAR19, &VAR20, VAR2->VAR34);
    VAR21 = VAR17 - VAR3 * 16;
    VAR23 = VAR19 - VAR3 * 16;
    VAR22 = VAR18 - VAR4 * 16;
    VAR24 = VAR20 - VAR4 * 16;
    VAR2->VAR35 = 0;
    switch (VAR2->VAR36)
    {
    case VAR37:
    default:
        FUN3(VAR2, &VAR11, &VAR12);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        VAR14 = 0;
        break;
    case VAR38:
        VAR14 = FUN4(VAR2, &VAR11, &VAR12, VAR13, VAR17, VAR18, VAR19, VAR20, VAR32);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR39:
        VAR14 = FUN5(VAR2, &VAR11, &VAR12, VAR13 / 2, VAR17, VAR18, VAR19, VAR20, VAR32);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR40:
        VAR14 = FUN6(VAR2, &VAR11, &VAR12, VAR13 / 2, VAR17, VAR18, VAR19, VAR20, VAR32);
        VAR11 -= VAR3 * 16;
        VAR12 -= VAR4 * 16;
        break;
    case VAR41:
    case VAR42:
    {
        const int VAR43 = VAR2->VAR44[0];
        const int VAR45 = VAR2->VAR46[0];
        VAR47[0] = VAR2->VAR48[VAR45][0];
        VAR47[1] = VAR2->VAR48[VAR45][1];
        VAR49[0] = VAR2->VAR48[VAR45 - 1][0];
        VAR49[1] = VAR2->VAR48[VAR45 - 1][1];
        VAR50[0] = VAR2->VAR48[VAR45 + 2][0];
        VAR50[1] = VAR2->VAR48[VAR45 + 2][1];
        VAR51[0] = VAR2->VAR48[VAR45 + 2 * VAR43][0];
        VAR51[1] = VAR2->VAR48[VAR45 + 2 * VAR43][1];
        if (VAR49[0] > (VAR23 << VAR28))
            VAR49[0] = (VAR23 << VAR28);
        if (VAR50[0] < (VAR21 << VAR28))
            VAR50[0] = (VAR21 << VAR28);
        if (VAR51[1] < (VAR22 << VAR28))
            VAR51[1] = (VAR22 << VAR28);
        if ((VAR4 == 0 || VAR2->VAR52))
        {
            VAR25 = VAR49[0];
            VAR26 = VAR49[1];
        }
        else
        {
            VAR53[0] = VAR2->VAR48[VAR45 - VAR43][0];
            VAR53[1] = VAR2->VAR48[VAR45 - VAR43][1];
            VAR54[0] = VAR2->VAR48[VAR45 - VAR43 + 2][0];
            VAR54[1] = VAR2->VAR48[VAR45 - VAR43 + 2][1];
            if (VAR53[1] > (VAR24 << VAR28))
                VAR53[1] = (VAR24 << VAR28);
            if (VAR54[0] < (VAR21 << VAR28))
                VAR54[0] = (VAR21 << VAR28);
            if (VAR54[1] > (VAR24 << VAR28))
                VAR54[1] = (VAR24 << VAR28);
            VAR55[0] = FUN7(VAR49[0], VAR53[0], VAR54[0]);
            VAR55[1] = FUN7(VAR49[1], VAR53[1], VAR54[1]);
            if (VAR2->VAR56 == VAR57)
            {
                VAR25 = VAR55[0];
                VAR26 = VAR55[1];
            }
            else
            {
                VAR25 = VAR49[0];
                VAR26 = VAR49[1];
            }
        }
    }
        VAR14 = FUN8(VAR2, &VAR11, &VAR12, VAR27, VAR25, VAR26, VAR21, VAR22, VAR23, VAR24, VAR32);
        break;
    }
    VAR15 = VAR3 * 16;
    VAR16 = VAR4 * 16;
    VAR6 = VAR2->VAR58[0] + (VAR16 * VAR2->VAR59) + VAR15;
    VAR7 = VAR32 + ((VAR16 + VAR12) * VAR2->VAR59) + (VAR15 + VAR11);
    VAR8 = FUN9(VAR6, VAR2->VAR59);
    VAR8 = (VAR8 + 8) >> 4;
    VAR9 = (FUN10(VAR6, VAR2->VAR59) - VAR8 * VAR8 + 500 + 128) >> 8;
    VAR10 = (FUN11(VAR6, VAR7, VAR2->VAR59) + 128) >> 8;
    VAR2->VAR60[VAR2->VAR61 * VAR4 + VAR3] = VAR9;
    VAR2->VAR62[VAR2->VAR61 * VAR4 + VAR3] = VAR10;
    VAR2->VAR63 += VAR9;
    VAR2->VAR64 += VAR10;
    FUN12("", VAR9, VAR2->VAR65, VAR8, VAR10, VAR11 - VAR15, VAR12 - VAR16);
    if (VAR2->VAR66 & VAR67)
    {
        if (VAR10 * 2 + 200 > VAR9)
            VAR30 |= VAR68;
        if (VAR9 * 2 + 200 > VAR10)
        {
            VAR30 |= VAR69;
            if (VAR2->VAR36 >= VAR42)
                FUN13(VAR2, &VAR11, &VAR12, VAR14, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR32, VAR70, VAR71, VAR72, 0);
            else
                FUN14(VAR2, &VAR11, &VAR12, VAR14, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR32, VAR70, VAR71, VAR72, 0);
        }
        else
        {
            VAR11 <<= 1;
            VAR12 <<= 1;
        }
        if ((VAR2->VAR66 & VAR73) && !VAR2->VAR35 && VAR9 > 50 && VAR10 > 10)
        {
            FUN15(VAR2, VAR21, VAR22, VAR23, VAR24, VAR11, VAR12, VAR28);
            VAR30 |= VAR74;
            FUN16(VAR2, VAR11, VAR12, 0);
        }
        else
            FUN16(VAR2, VAR11, VAR12, 1);
    }
    else
    {
        if (VAR10 <= 64 || VAR10 < VAR9)
        {
            VAR30 |= VAR69;
            if (VAR2->VAR36 != VAR37)
            {
                if (VAR2->VAR36 >= VAR42)
                    VAR14 = FUN13(VAR2, &VAR11, &VAR12, VAR14, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR32, VAR70, VAR71, VAR72, 0);
                else
                    VAR14 = FUN14(VAR2, &VAR11, &VAR12, VAR14, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR32, VAR70, VAR71, VAR72, 0);
                if ((VAR2->VAR66 & VAR73) && !VAR2->VAR35 && VAR9 > 50 && VAR10 > 10)
                {
                    int VAR75 = FUN15(VAR2, VAR21, VAR22, VAR23, VAR24, VAR11, VAR12, VAR28);
                    if (VAR75 + 128 < VAR14)
                        VAR30 = VAR74;
                }
                FUN16(VAR2, VAR11, VAR12, VAR30 != VAR74);
            }
            else
            {
                VAR11 <<= 1;
                VAR12 <<= 1;
            }
            if (VAR10 < 10)
            {
                VAR76++;
                fprintf(VAR77, "", VAR76, VAR10, VAR9, VAR14);
            }
        }
        else
        {
            VAR30 |= VAR68;
            VAR11 = 0;
            VAR12 = 0;
        }
    }
    VAR2->VAR30[VAR4 * VAR2->VAR61 + VAR3] = VAR30;
}