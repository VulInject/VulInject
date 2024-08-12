static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9, *VAR10, *VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21 = VAR5->VAR21 >> VAR2->VAR22;
    int VAR23;
    FUN2(*VAR24)[256], (*VAR25)[256];
    int VAR26;
    if ((!VAR2->VAR22 || (VAR2->VAR27[VAR3] == 1 && VAR2->VAR28 == 1)) && !VAR2->VAR5.VAR29.VAR30.VAR31[0])
        return;
    VAR13 = VAR5->VAR32[VAR3][0][0];
    VAR14 = VAR5->VAR32[VAR3][0][1];
    if (VAR5->VAR33 == VAR34)
    {
        for (VAR23 = 0; VAR23 < 4; VAR23++)
        {
            VAR5->VAR35.VAR36[1][VAR5->VAR37[VAR23] + VAR2->VAR38][0] = VAR13;
            VAR5->VAR35.VAR36[1][VAR5->VAR37[VAR23] + VAR2->VAR38][1] = VAR14;
        }
    }
    VAR15 = (VAR13 + ((VAR13 & 3) == 3)) >> 1;
    VAR16 = (VAR14 + ((VAR14 & 3) == 3)) >> 1;
    VAR2->VAR39[VAR5->VAR40][0] = VAR15;
    VAR2->VAR39[VAR5->VAR40][1] = VAR16;
    if (VAR2->VAR22 && VAR2->VAR28 != VAR2->VAR27[VAR3])
    {
        VAR14 = VAR14 - 2 + 4 * VAR2->VAR28;
        VAR16 = VAR16 - 2 + 4 * VAR2->VAR28;
    }
    if (VAR2->VAR41 && (VAR2->VAR42 != VAR43))
    {
        VAR15 = VAR15 + ((VAR15 < 0) ? (VAR15 & 1) : -(VAR15 & 1));
        VAR16 = VAR16 + ((VAR16 < 0) ? (VAR16 & 1) : -(VAR16 & 1));
    }
    if (!VAR3)
    {
        if (VAR2->VAR22 && (VAR2->VAR28 != VAR2->VAR27[VAR3]) && VAR2->VAR44)
        {
            VAR9 = VAR5->VAR35.VAR30.VAR31[0];
            VAR10 = VAR5->VAR35.VAR30.VAR31[1];
            VAR11 = VAR5->VAR35.VAR30.VAR31[2];
            VAR24 = VAR2->VAR45;
            VAR25 = VAR2->VAR46;
            VAR26 = VAR2->VAR47;
        }
        else
        {
            VAR9 = VAR5->VAR29.VAR30.VAR31[0];
            VAR10 = VAR5->VAR29.VAR30.VAR31[1];
            VAR11 = VAR5->VAR29.VAR30.VAR31[2];
            VAR24 = VAR2->VAR48;
            VAR25 = VAR2->VAR49;
            VAR26 = VAR2->VAR50;
        }
    }
    else
    {
        VAR9 = VAR5->VAR51.VAR30.VAR31[0];
        VAR10 = VAR5->VAR51.VAR30.VAR31[1];
        VAR11 = VAR5->VAR51.VAR30.VAR31[2];
        VAR24 = VAR2->VAR52;
        VAR25 = VAR2->VAR53;
        VAR26 = VAR2->VAR54;
    }
    if (!VAR9 || !VAR10)
    {
        FUN3(VAR2->VAR5.VAR55, VAR56, "");
        return;
    }
    VAR17 = VAR5->VAR40 * 16 + (VAR13 >> 2);
    VAR18 = VAR5->VAR57 * 16 + (VAR14 >> 2);
    VAR19 = VAR5->VAR40 * 8 + (VAR15 >> 2);
    VAR20 = VAR5->VAR57 * 8 + (VAR16 >> 2);
    if (VAR2->VAR58 != VAR59)
    {
        VAR17 = FUN4(VAR17, -16, VAR5->VAR60 * 16);
        VAR18 = FUN4(VAR18, -16, VAR5->VAR61 * 16);
        VAR19 = FUN4(VAR19, -8, VAR5->VAR60 * 8);
        VAR20 = FUN4(VAR20, -8, VAR5->VAR61 * 8);
    }
    else
    {
        VAR17 = FUN4(VAR17, -17, VAR5->VAR55->VAR62);
        VAR18 = FUN4(VAR18, -18, VAR5->VAR55->VAR63 + 1);
        VAR19 = FUN4(VAR19, -8, VAR5->VAR55->VAR62 >> 1);
        VAR20 = FUN4(VAR20, -8, VAR5->VAR55->VAR63 >> 1);
    }
    VAR9 += VAR18 * VAR5->VAR64 + VAR17;
    VAR10 += VAR20 * VAR5->VAR65 + VAR19;
    VAR11 += VAR20 * VAR5->VAR65 + VAR19;
    if (VAR2->VAR22 && VAR2->VAR27[VAR3])
    {
        VAR9 += VAR5->VAR66->VAR30.VAR64[0];
        VAR10 += VAR5->VAR66->VAR30.VAR64[1];
        VAR11 += VAR5->VAR66->VAR30.VAR64[2];
    }
    if (VAR5->VAR67 & VAR68)
    {
        VAR10 = VAR5->VAR69 + 18 * VAR5->VAR64;
        VAR11 = VAR5->VAR69 + 18 * VAR5->VAR64;
    }
    if (VAR2->VAR70 || VAR26 || VAR5->VAR71 < 22 || VAR21 < 22 || (unsigned)(VAR17 - VAR5->VAR72) > VAR5->VAR71 - (VAR13 & 3) - 16 - VAR5->VAR72 * 3 || (unsigned)(VAR18 - 1) > VAR21 - (VAR14 & 3) - 16 - 3)
    {
        VAR8 *VAR73 = VAR5->VAR69 + 19 * VAR5->VAR64;
        VAR9 -= VAR5->VAR72 * (1 + VAR5->VAR64);
        VAR5->VAR74.FUN5(VAR5->VAR69, VAR9, VAR5->VAR64, VAR5->VAR64, 17 + VAR5->VAR72 * 2, 17 + VAR5->VAR72 * 2, VAR17 - VAR5->VAR72, VAR18 - VAR5->VAR72, VAR5->VAR71, VAR21);
        VAR9 = VAR5->VAR69;
        VAR5->VAR74.FUN5(VAR73, VAR10, VAR5->VAR65, VAR5->VAR65, 8 + 1, 8 + 1, VAR19, VAR20, VAR5->VAR71 >> 1, VAR21 >> 1);
        VAR5->VAR74.FUN5(VAR73 + 16, VAR11, VAR5->VAR65, VAR5->VAR65, 8 + 1, 8 + 1, VAR19, VAR20, VAR5->VAR71 >> 1, VAR21 >> 1);
        VAR10 = VAR73;
        VAR11 = VAR73 + 16;
        if (VAR2->VAR70)
        {
            int VAR23, VAR75;
            VAR8 *VAR76, *VAR77;
            VAR76 = VAR9;
            for (VAR75 = 0; VAR75 < 17 + VAR5->VAR72 * 2; VAR75++)
            {
                for (VAR23 = 0; VAR23 < 17 + VAR5->VAR72 * 2; VAR23++)
                    VAR76[VAR23] = ((VAR76[VAR23] - 128) >> 1) + 128;
                VAR76 += VAR5->VAR64;
            }
            VAR76 = VAR10;
            VAR77 = VAR11;
            for (VAR75 = 0; VAR75 < 9; VAR75++)
            {
                for (VAR23 = 0; VAR23 < 9; VAR23++)
                {
                    VAR76[VAR23] = ((VAR76[VAR23] - 128) >> 1) + 128;
                    VAR77[VAR23] = ((VAR77[VAR23] - 128) >> 1) + 128;
                }
                VAR76 += VAR5->VAR65;
                VAR77 += VAR5->VAR65;
            }
        }
        if (VAR26)
        {
            int VAR23, VAR75;
            VAR8 *VAR76, *VAR77;
            VAR76 = VAR9;
            for (VAR75 = 0; VAR75 < 17 + VAR5->VAR72 * 2; VAR75++)
            {
                int VAR30 = VAR2->VAR22 ? VAR2->VAR27[VAR3] : ((VAR75 + VAR18 - VAR5->VAR72) & 1);
                for (VAR23 = 0; VAR23 < 17 + VAR5->VAR72 * 2; VAR23++)
                    VAR76[VAR23] = VAR24[VAR30][VAR76[VAR23]];
                VAR76 += VAR5->VAR64;
            }
            VAR76 = VAR10;
            VAR77 = VAR11;
            for (VAR75 = 0; VAR75 < 9; VAR75++)
            {
                int VAR30 = VAR2->VAR22 ? VAR2->VAR27[VAR3] : ((VAR75 + VAR20) & 1);
                for (VAR23 = 0; VAR23 < 9; VAR23++)
                {
                    VAR76[VAR23] = VAR25[VAR30][VAR76[VAR23]];
                    VAR77[VAR23] = VAR25[VAR30][VAR77[VAR23]];
                }
                VAR76 += VAR5->VAR65;
                VAR77 += VAR5->VAR65;
            }
        }
        VAR9 += VAR5->VAR72 * (1 + VAR5->VAR64);
    }
    if (VAR5->VAR72)
    {
        VAR12 = ((VAR14 & 3) << 2) | (VAR13 & 3);
        VAR2->VAR78.VAR79[VAR12](VAR5->VAR80[0], VAR9, VAR5->VAR64, VAR2->VAR81);
        VAR2->VAR78.VAR79[VAR12](VAR5->VAR80[0] + 8, VAR9 + 8, VAR5->VAR64, VAR2->VAR81);
        VAR9 += VAR5->VAR64 * 8;
        VAR2->VAR78.VAR79[VAR12](VAR5->VAR80[0] + 8 * VAR5->VAR64, VAR9, VAR5->VAR64, VAR2->VAR81);
        VAR2->VAR78.VAR79[VAR12](VAR5->VAR80[0] + 8 * VAR5->VAR64 + 8, VAR9 + 8, VAR5->VAR64, VAR2->VAR81);
    }
    else
    {
        VAR12 = (VAR14 & 2) | ((VAR13 & 2) >> 1);
        if (!VAR2->VAR81)
            VAR5->VAR82.VAR83[0][VAR12](VAR5->VAR80[0], VAR9, VAR5->VAR64, 16);
        else
            VAR5->VAR82.VAR84[0][VAR12](VAR5->VAR80[0], VAR9, VAR5->VAR64, 16);
    }
    if (VAR5->VAR67 & VAR68)
        return;
    VAR15 = (VAR15 & 3) << 1;
    VAR16 = (VAR16 & 3) << 1;
    if (!VAR2->VAR81)
    {
        VAR7->VAR85[0](VAR5->VAR80[1], VAR10, VAR5->VAR65, 8, VAR15, VAR16);
        VAR7->VAR85[0](VAR5->VAR80[2], VAR11, VAR5->VAR65, 8, VAR15, VAR16);
    }
    else
    {
        VAR2->VAR78.VAR86[0](VAR5->VAR80[1], VAR10, VAR5->VAR65, 8, VAR15, VAR16);
        VAR2->VAR78.VAR86[0](VAR5->VAR80[2], VAR11, VAR5->VAR65, 8, VAR15, VAR16);
    }
}