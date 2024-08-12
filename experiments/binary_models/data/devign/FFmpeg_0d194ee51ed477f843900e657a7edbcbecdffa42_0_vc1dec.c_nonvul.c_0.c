static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16 = 0, VAR17 = 0;
    int VAR18[4], VAR19[4], VAR20[4], VAR21[4];
    int VAR22;
    int VAR23 = VAR2->VAR24, VAR25 = 0;
    int VAR26 = VAR5->VAR26 >> VAR2->VAR27;
    if (!VAR2->VAR27 && !VAR2->VAR5.VAR28.VAR29.VAR30[0])
        return;
    if (VAR5->VAR31 & VAR32)
        return;
    for (VAR15 = 0; VAR15 < 4; VAR15++)
    {
        VAR18[VAR15] = VAR5->VAR33[VAR3][VAR15][0];
        VAR19[VAR15] = VAR5->VAR33[VAR3][VAR15][1];
        VAR20[VAR15] = VAR2->VAR34[0][VAR5->VAR35[VAR15]];
        if (VAR2->VAR27)
            VAR21[VAR15] = VAR2->VAR21[VAR3][VAR5->VAR35[VAR15] + VAR2->VAR36];
    }
    if (!VAR2->VAR27 || (VAR2->VAR27 && !VAR2->VAR37))
    {
        VAR22 = FUN2(VAR18, VAR19, VAR20, 0, &VAR16, &VAR17);
        VAR23 = VAR2->VAR38;
        if (!VAR22)
        {
            VAR5->VAR39.VAR29.VAR40[1][VAR5->VAR35[0] + VAR2->VAR36][0] = 0;
            VAR5->VAR39.VAR29.VAR40[1][VAR5->VAR35[0] + VAR2->VAR36][1] = 0;
            VAR2->VAR41[VAR5->VAR42][0] = VAR2->VAR41[VAR5->VAR42][1] = 0;
            return;
        }
    }
    else
    {
        int VAR43 = 0;
        if (VAR21[0] + VAR21[1] + VAR21[2] + VAR21[3] > 2)
            VAR43 = 1;
        VAR22 = FUN2(VAR18, VAR19, VAR21, VAR43, &VAR16, &VAR17);
        if (VAR43)
            VAR23 = !VAR2->VAR24;
    }
    if (VAR2->VAR27 && VAR23 == 1 && VAR2->VAR24 == 1 && !VAR2->VAR5.VAR28.VAR29.VAR30[0])
        return;
    VAR5->VAR39.VAR29.VAR40[1][VAR5->VAR35[0] + VAR2->VAR36][0] = VAR16;
    VAR5->VAR39.VAR29.VAR40[1][VAR5->VAR35[0] + VAR2->VAR36][1] = VAR17;
    VAR11 = (VAR16 + ((VAR16 & 3) == 3)) >> 1;
    VAR12 = (VAR17 + ((VAR17 & 3) == 3)) >> 1;
    VAR2->VAR41[VAR5->VAR42][0] = VAR11;
    VAR2->VAR41[VAR5->VAR42][1] = VAR12;
    if (VAR2->VAR44)
    {
        VAR11 = VAR11 + ((VAR11 < 0) ? (VAR11 & 1) : -(VAR11 & 1));
        VAR12 = VAR12 + ((VAR12 < 0) ? (VAR12 & 1) : -(VAR12 & 1));
    }
    if (VAR2->VAR24 != VAR23)
        VAR12 += 2 - 4 * VAR23;
    VAR13 = VAR5->VAR42 * 8 + (VAR11 >> 2);
    VAR14 = VAR5->VAR45 * 8 + (VAR12 >> 2);
    if (VAR2->VAR46 != VAR47)
    {
        VAR13 = FUN3(VAR13, -8, VAR5->VAR48 * 8);
        VAR14 = FUN3(VAR14, -8, VAR5->VAR49 * 8);
    }
    else
    {
        VAR13 = FUN3(VAR13, -8, VAR5->VAR50->VAR51 >> 1);
        VAR14 = FUN3(VAR14, -8, VAR5->VAR50->VAR52 >> 1);
    }
    if (!VAR3)
    {
        if (VAR2->VAR27)
        {
            if ((VAR2->VAR24 != VAR23) && VAR2->VAR24)
            {
                VAR9 = VAR5->VAR39.VAR29.VAR30[1];
                VAR10 = VAR5->VAR39.VAR29.VAR30[2];
            }
            else
            {
                VAR9 = VAR5->VAR28.VAR29.VAR30[1];
                VAR10 = VAR5->VAR28.VAR29.VAR30[2];
            }
        }
        else
        {
            VAR9 = VAR5->VAR28.VAR29.VAR30[1];
            VAR10 = VAR5->VAR28.VAR29.VAR30[2];
        }
    }
    else
    {
        VAR9 = VAR5->VAR53.VAR29.VAR30[1];
        VAR10 = VAR5->VAR53.VAR29.VAR30[2];
    }
    if (!VAR9)
        return;
    VAR9 += VAR14 * VAR5->VAR54 + VAR13;
    VAR10 += VAR14 * VAR5->VAR54 + VAR13;
    if (VAR2->VAR27)
    {
        if (VAR23)
        {
            VAR9 += VAR5->VAR55->VAR29.VAR56[1];
            VAR10 += VAR5->VAR55->VAR29.VAR56[2];
        }
        VAR25 = 0;
    }
    if (VAR2->VAR57 || (VAR2->VAR58 == VAR59) || VAR5->VAR60 < 18 || VAR26 < 18 || (unsigned)VAR13 > (VAR5->VAR60 >> 1) - 9 || (unsigned)VAR14 > (VAR26 >> 1) - 9)
    {
        VAR5->VAR61.FUN4(VAR5->VAR62, VAR9, VAR5->VAR54, 8 + 1, 8 + 1, VAR13, VAR14, VAR5->VAR60 >> 1, VAR26 >> 1);
        VAR5->VAR61.FUN4(VAR5->VAR62 + 16, VAR10, VAR5->VAR54, 8 + 1, 8 + 1, VAR13, VAR14, VAR5->VAR60 >> 1, VAR26 >> 1);
        VAR9 = VAR5->VAR62;
        VAR10 = VAR5->VAR62 + 16;
        if (VAR2->VAR57)
        {
            int VAR63, VAR64;
            VAR8 *VAR65, *VAR66;
            VAR65 = VAR9;
            VAR66 = VAR10;
            for (VAR64 = 0; VAR64 < 9; VAR64++)
            {
                for (VAR63 = 0; VAR63 < 9; VAR63++)
                {
                    VAR65[VAR63] = ((VAR65[VAR63] - 128) >> 1) + 128;
                    VAR66[VAR63] = ((VAR66[VAR63] - 128) >> 1) + 128;
                }
                VAR65 += VAR5->VAR54;
                VAR66 += VAR5->VAR54;
            }
        }
        if (VAR2->VAR58 == VAR59)
        {
            int VAR63, VAR64;
            VAR8 *VAR65, *VAR66;
            VAR65 = VAR9;
            VAR66 = VAR10;
            for (VAR64 = 0; VAR64 < 9; VAR64++)
            {
                for (VAR63 = 0; VAR63 < 9; VAR63++)
                {
                    VAR65[VAR63] = VAR2->VAR67[VAR65[VAR63]];
                    VAR66[VAR63] = VAR2->VAR67[VAR66[VAR63]];
                }
                VAR65 += VAR5->VAR54;
                VAR66 += VAR5->VAR54;
            }
        }
    }
    VAR11 = (VAR11 & 3) << 1;
    VAR12 = (VAR12 & 3) << 1;
    if (!VAR2->VAR68)
    {
        VAR7->VAR69[0](VAR5->VAR70[1] + VAR25, VAR9, VAR5->VAR54, 8, VAR11, VAR12);
        VAR7->VAR69[0](VAR5->VAR70[2] + VAR25, VAR10, VAR5->VAR54, 8, VAR11, VAR12);
    }
    else
    {
        VAR2->VAR71.VAR72[0](VAR5->VAR70[1] + VAR25, VAR9, VAR5->VAR54, 8, VAR11, VAR12);
        VAR2->VAR71.VAR72[0](VAR5->VAR70[2] + VAR25, VAR10, VAR5->VAR54, 8, VAR11, VAR12);
    }
}