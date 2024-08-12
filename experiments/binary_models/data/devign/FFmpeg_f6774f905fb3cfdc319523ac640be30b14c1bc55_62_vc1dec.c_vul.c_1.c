static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16 = 0, VAR17 = 0;
    int VAR18[4], VAR19[4], VAR20[4], VAR21[4];
    int VAR22;
    int VAR23 = VAR2->VAR24;
    int VAR25 = VAR5->VAR25 >> VAR2->VAR26;
    FUN2(*VAR27)[256];
    int VAR28;
    if (!VAR2->VAR26 && !VAR2->VAR5.VAR29.VAR30.VAR31[0])
        return;
    if (VAR5->VAR32 & VAR33)
        return;
    for (VAR15 = 0; VAR15 < 4; VAR15++)
    {
        VAR18[VAR15] = VAR5->VAR34[VAR3][VAR15][0];
        VAR19[VAR15] = VAR5->VAR34[VAR3][VAR15][1];
        VAR20[VAR15] = VAR2->VAR35[0][VAR5->VAR36[VAR15]];
        if (VAR2->VAR26)
            VAR21[VAR15] = VAR2->VAR21[VAR3][VAR5->VAR36[VAR15] + VAR2->VAR37];
    }
    if (!VAR2->VAR26 || (VAR2->VAR26 && !VAR2->VAR38))
    {
        VAR22 = FUN3(VAR18, VAR19, VAR20, 0, &VAR16, &VAR17);
        VAR23 = VAR2->VAR39;
        if (!VAR22)
        {
            VAR5->VAR40.VAR41[1][VAR5->VAR36[0] + VAR2->VAR37][0] = 0;
            VAR5->VAR40.VAR41[1][VAR5->VAR36[0] + VAR2->VAR37][1] = 0;
            VAR2->VAR42[VAR5->VAR43][0] = VAR2->VAR42[VAR5->VAR43][1] = 0;
            return;
        }
    }
    else
    {
        int VAR44 = 0;
        if (VAR21[0] + VAR21[1] + VAR21[2] + VAR21[3] > 2)
            VAR44 = 1;
        VAR22 = FUN3(VAR18, VAR19, VAR21, VAR44, &VAR16, &VAR17);
        if (VAR44)
            VAR23 = !VAR2->VAR24;
    }
    if (VAR2->VAR26 && VAR23 == 1 && VAR2->VAR24 == 1 && !VAR2->VAR5.VAR29.VAR30.VAR31[0])
        return;
    VAR5->VAR40.VAR41[1][VAR5->VAR36[0] + VAR2->VAR37][0] = VAR16;
    VAR5->VAR40.VAR41[1][VAR5->VAR36[0] + VAR2->VAR37][1] = VAR17;
    VAR11 = (VAR16 + ((VAR16 & 3) == 3)) >> 1;
    VAR12 = (VAR17 + ((VAR17 & 3) == 3)) >> 1;
    VAR2->VAR42[VAR5->VAR43][0] = VAR11;
    VAR2->VAR42[VAR5->VAR43][1] = VAR12;
    if (VAR2->VAR45)
    {
        VAR11 = VAR11 + ((VAR11 < 0) ? (VAR11 & 1) : -(VAR11 & 1));
        VAR12 = VAR12 + ((VAR12 < 0) ? (VAR12 & 1) : -(VAR12 & 1));
    }
    if (VAR2->VAR24 != VAR23)
        VAR12 += 2 - 4 * VAR23;
    VAR13 = VAR5->VAR43 * 8 + (VAR11 >> 2);
    VAR14 = VAR5->VAR46 * 8 + (VAR12 >> 2);
    if (VAR2->VAR47 != VAR48)
    {
        VAR13 = FUN4(VAR13, -8, VAR5->VAR49 * 8);
        VAR14 = FUN4(VAR14, -8, VAR5->VAR50 * 8);
    }
    else
    {
        VAR13 = FUN4(VAR13, -8, VAR5->VAR51->VAR52 >> 1);
        VAR14 = FUN4(VAR14, -8, VAR5->VAR51->VAR53 >> 1);
    }
    if (!VAR3)
    {
        if (VAR2->VAR26 && (VAR2->VAR24 != VAR23) && VAR2->VAR54)
        {
            VAR9 = VAR5->VAR40.VAR30.VAR31[1];
            VAR10 = VAR5->VAR40.VAR30.VAR31[2];
            VAR27 = VAR2->VAR55;
            VAR28 = VAR2->VAR56;
        }
        else
        {
            VAR9 = VAR5->VAR29.VAR30.VAR31[1];
            VAR10 = VAR5->VAR29.VAR30.VAR31[2];
            VAR27 = VAR2->VAR57;
            VAR28 = VAR2->VAR58;
        }
    }
    else
    {
        VAR9 = VAR5->VAR59.VAR30.VAR31[1];
        VAR10 = VAR5->VAR59.VAR30.VAR31[2];
        VAR27 = VAR2->VAR60;
        VAR28 = VAR2->VAR61;
    }
    if (!VAR9)
    {
        FUN5(VAR2->VAR5.VAR51, VAR62, "");
        return;
    }
    VAR9 += VAR14 * VAR5->VAR63 + VAR13;
    VAR10 += VAR14 * VAR5->VAR63 + VAR13;
    if (VAR2->VAR26)
    {
        if (VAR23)
        {
            VAR9 += VAR5->VAR64->VAR30.VAR65[1];
            VAR10 += VAR5->VAR64->VAR30.VAR65[2];
        }
    }
    if (VAR2->VAR66 || VAR28 || VAR5->VAR67 < 18 || VAR25 < 18 || (unsigned)VAR13 > (VAR5->VAR67 >> 1) - 9 || (unsigned)VAR14 > (VAR25 >> 1) - 9)
    {
        VAR5->VAR68.FUN6(VAR5->VAR69, VAR9, VAR5->VAR63, VAR5->VAR63, 8 + 1, 8 + 1, VAR13, VAR14, VAR5->VAR67 >> 1, VAR25 >> 1);
        VAR5->VAR68.FUN6(VAR5->VAR69 + 16, VAR10, VAR5->VAR63, VAR5->VAR63, 8 + 1, 8 + 1, VAR13, VAR14, VAR5->VAR67 >> 1, VAR25 >> 1);
        VAR9 = VAR5->VAR69;
        VAR10 = VAR5->VAR69 + 16;
        if (VAR2->VAR66)
        {
            int VAR70, VAR71;
            VAR8 *VAR72, *VAR73;
            VAR72 = VAR9;
            VAR73 = VAR10;
            for (VAR71 = 0; VAR71 < 9; VAR71++)
            {
                for (VAR70 = 0; VAR70 < 9; VAR70++)
                {
                    VAR72[VAR70] = ((VAR72[VAR70] - 128) >> 1) + 128;
                    VAR73[VAR70] = ((VAR73[VAR70] - 128) >> 1) + 128;
                }
                VAR72 += VAR5->VAR63;
                VAR73 += VAR5->VAR63;
            }
        }
        if (VAR28)
        {
            int VAR70, VAR71;
            VAR8 *VAR72, *VAR73;
            VAR72 = VAR9;
            VAR73 = VAR10;
            for (VAR71 = 0; VAR71 < 9; VAR71++)
            {
                int VAR30 = VAR2->VAR26 ? VAR23 : ((VAR71 + VAR14) & 1);
                for (VAR70 = 0; VAR70 < 9; VAR70++)
                {
                    VAR72[VAR70] = VAR27[VAR30][VAR72[VAR70]];
                    VAR73[VAR70] = VAR27[VAR30][VAR73[VAR70]];
                }
                VAR72 += VAR5->VAR63;
                VAR73 += VAR5->VAR63;
            }
        }
    }
    VAR11 = (VAR11 & 3) << 1;
    VAR12 = (VAR12 & 3) << 1;
    if (!VAR2->VAR74)
    {
        VAR7->VAR75[0](VAR5->VAR76[1], VAR9, VAR5->VAR63, 8, VAR11, VAR12);
        VAR7->VAR75[0](VAR5->VAR76[2], VAR10, VAR5->VAR63, 8, VAR11, VAR12);
    }
    else
    {
        VAR2->VAR77.VAR78[0](VAR5->VAR76[1], VAR9, VAR5->VAR63, 8, VAR11, VAR12);
        VAR2->VAR77.VAR78[0](VAR5->VAR76[2], VAR10, VAR5->VAR63, 8, VAR11, VAR12);
    }
}