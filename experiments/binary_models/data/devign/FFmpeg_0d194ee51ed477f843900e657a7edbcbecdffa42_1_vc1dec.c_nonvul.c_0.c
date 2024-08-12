static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR5.VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11, *VAR12, *VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24;
    int VAR25 = VAR5->VAR25 >> VAR2->VAR26;
    if ((!VAR2->VAR26 || (VAR2->VAR27[VAR3] == 1 && VAR2->VAR28 == 1)) && !VAR2->VAR5.VAR29.VAR30.VAR31[0])
        return;
    VAR15 = VAR5->VAR32[VAR3][0][0];
    VAR16 = VAR5->VAR32[VAR3][0][1];
    if (VAR5->VAR33 == VAR34)
    {
        VAR5->VAR35.VAR30.VAR36[1][VAR5->VAR37[0] + VAR2->VAR38][0] = VAR15;
        VAR5->VAR35.VAR30.VAR36[1][VAR5->VAR37[0] + VAR2->VAR38][1] = VAR16;
    }
    VAR17 = (VAR15 + ((VAR15 & 3) == 3)) >> 1;
    VAR18 = (VAR16 + ((VAR16 & 3) == 3)) >> 1;
    VAR2->VAR39[VAR5->VAR40][0] = VAR17;
    VAR2->VAR39[VAR5->VAR40][1] = VAR18;
    if (VAR2->VAR26 && VAR2->VAR28 != VAR2->VAR27[VAR3])
    {
        VAR16 = VAR16 - 2 + 4 * VAR2->VAR28;
        VAR18 = VAR18 - 2 + 4 * VAR2->VAR28;
    }
    if (VAR2->VAR41 && (VAR2->VAR42 != VAR43))
    {
        VAR17 = VAR17 + ((VAR17 < 0) ? (VAR17 & 1) : -(VAR17 & 1));
        VAR18 = VAR18 + ((VAR18 < 0) ? (VAR18 & 1) : -(VAR18 & 1));
    }
    if (VAR2->VAR26)
    {
        if (!VAR3)
        {
            if ((VAR2->VAR28 != VAR2->VAR27[VAR3]) && VAR2->VAR44)
            {
                VAR11 = VAR5->VAR35.VAR30.VAR31[0];
                VAR12 = VAR5->VAR35.VAR30.VAR31[1];
                VAR13 = VAR5->VAR35.VAR30.VAR31[2];
            }
            else
            {
                VAR11 = VAR5->VAR29.VAR30.VAR31[0];
                VAR12 = VAR5->VAR29.VAR30.VAR31[1];
                VAR13 = VAR5->VAR29.VAR30.VAR31[2];
            }
        }
        else
        {
            VAR11 = VAR5->VAR45.VAR30.VAR31[0];
            VAR12 = VAR5->VAR45.VAR30.VAR31[1];
            VAR13 = VAR5->VAR45.VAR30.VAR31[2];
        }
    }
    else
    {
        if (!VAR3)
        {
            VAR11 = VAR5->VAR29.VAR30.VAR31[0];
            VAR12 = VAR5->VAR29.VAR30.VAR31[1];
            VAR13 = VAR5->VAR29.VAR30.VAR31[2];
        }
        else
        {
            VAR11 = VAR5->VAR45.VAR30.VAR31[0];
            VAR12 = VAR5->VAR45.VAR30.VAR31[1];
            VAR13 = VAR5->VAR45.VAR30.VAR31[2];
        }
    }
    if (!VAR11)
        return;
    VAR19 = VAR5->VAR40 * 16 + (VAR15 >> 2);
    VAR20 = VAR5->VAR46 * 16 + (VAR16 >> 2);
    VAR21 = VAR5->VAR40 * 8 + (VAR17 >> 2);
    VAR22 = VAR5->VAR46 * 8 + (VAR18 >> 2);
    if (VAR2->VAR47 != VAR48)
    {
        VAR19 = FUN2(VAR19, -16, VAR5->VAR49 * 16);
        VAR20 = FUN2(VAR20, -16, VAR5->VAR50 * 16);
        VAR21 = FUN2(VAR21, -8, VAR5->VAR49 * 8);
        VAR22 = FUN2(VAR22, -8, VAR5->VAR50 * 8);
    }
    else
    {
        VAR19 = FUN2(VAR19, -17, VAR5->VAR51->VAR52);
        VAR20 = FUN2(VAR20, -18, VAR5->VAR51->VAR53 + 1);
        VAR21 = FUN2(VAR21, -8, VAR5->VAR51->VAR52 >> 1);
        VAR22 = FUN2(VAR22, -8, VAR5->VAR51->VAR53 >> 1);
    }
    VAR11 += VAR20 * VAR5->VAR54 + VAR19;
    VAR12 += VAR22 * VAR5->VAR55 + VAR21;
    VAR13 += VAR22 * VAR5->VAR55 + VAR21;
    if (VAR2->VAR26 && VAR2->VAR27[VAR3])
    {
        VAR11 += VAR5->VAR56->VAR30.VAR54[0];
        VAR12 += VAR5->VAR56->VAR30.VAR54[1];
        VAR13 += VAR5->VAR56->VAR30.VAR54[2];
    }
    if (VAR5->VAR57 & VAR58)
    {
        VAR12 = VAR5->VAR59 + 18 * VAR5->VAR54;
        VAR13 = VAR5->VAR59 + 18 * VAR5->VAR54;
    }
    if (VAR2->VAR60 || (VAR2->VAR61 == VAR62) || VAR5->VAR63 < 22 || VAR25 < 22 || (unsigned)(VAR19 - VAR5->VAR64) > VAR5->VAR63 - (VAR15 & 3) - 16 - VAR5->VAR64 * 3 || (unsigned)(VAR20 - 1) > VAR25 - (VAR16 & 3) - 16 - 3)
    {
        VAR10 *VAR65 = VAR5->VAR59 + 19 * VAR5->VAR54;
        VAR11 -= VAR5->VAR64 * (1 + VAR5->VAR54);
        VAR5->VAR66.FUN3(VAR5->VAR59, VAR11, VAR5->VAR54, 17 + VAR5->VAR64 * 2, 17 + VAR5->VAR64 * 2, VAR19 - VAR5->VAR64, VAR20 - VAR5->VAR64, VAR5->VAR63, VAR25);
        VAR11 = VAR5->VAR59;
        VAR5->VAR66.FUN3(VAR65, VAR12, VAR5->VAR55, 8 + 1, 8 + 1, VAR21, VAR22, VAR5->VAR63 >> 1, VAR25 >> 1);
        VAR5->VAR66.FUN3(VAR65 + 16, VAR13, VAR5->VAR55, 8 + 1, 8 + 1, VAR21, VAR22, VAR5->VAR63 >> 1, VAR25 >> 1);
        VAR12 = VAR65;
        VAR13 = VAR65 + 16;
        if (VAR2->VAR60)
        {
            int VAR67, VAR68;
            VAR10 *VAR69, *VAR70;
            VAR69 = VAR11;
            for (VAR68 = 0; VAR68 < 17 + VAR5->VAR64 * 2; VAR68++)
            {
                for (VAR67 = 0; VAR67 < 17 + VAR5->VAR64 * 2; VAR67++)
                    VAR69[VAR67] = ((VAR69[VAR67] - 128) >> 1) + 128;
                VAR69 += VAR5->VAR54;
            }
            VAR69 = VAR12;
            VAR70 = VAR13;
            for (VAR68 = 0; VAR68 < 9; VAR68++)
            {
                for (VAR67 = 0; VAR67 < 9; VAR67++)
                {
                    VAR69[VAR67] = ((VAR69[VAR67] - 128) >> 1) + 128;
                    VAR70[VAR67] = ((VAR70[VAR67] - 128) >> 1) + 128;
                }
                VAR69 += VAR5->VAR55;
                VAR70 += VAR5->VAR55;
            }
        }
        if (VAR2->VAR61 == VAR62)
        {
            int VAR67, VAR68;
            VAR10 *VAR69, *VAR70;
            VAR69 = VAR11;
            for (VAR68 = 0; VAR68 < 17 + VAR5->VAR64 * 2; VAR68++)
            {
                for (VAR67 = 0; VAR67 < 17 + VAR5->VAR64 * 2; VAR67++)
                    VAR69[VAR67] = VAR2->VAR71[VAR69[VAR67]];
                VAR69 += VAR5->VAR54;
            }
            VAR69 = VAR12;
            VAR70 = VAR13;
            for (VAR68 = 0; VAR68 < 9; VAR68++)
            {
                for (VAR67 = 0; VAR67 < 9; VAR67++)
                {
                    VAR69[VAR67] = VAR2->VAR72[VAR69[VAR67]];
                    VAR70[VAR67] = VAR2->VAR72[VAR70[VAR67]];
                }
                VAR69 += VAR5->VAR55;
                VAR70 += VAR5->VAR55;
            }
        }
        VAR11 += VAR5->VAR64 * (1 + VAR5->VAR54);
    }
    VAR23 = 0;
    VAR24 = 0;
    if (VAR5->VAR64)
    {
        VAR14 = ((VAR16 & 3) << 2) | (VAR15 & 3);
        VAR2->VAR73.VAR74[VAR14](VAR5->VAR75[0] + VAR23, VAR11, VAR5->VAR54, VAR2->VAR76);
        VAR2->VAR73.VAR74[VAR14](VAR5->VAR75[0] + VAR23 + 8, VAR11 + 8, VAR5->VAR54, VAR2->VAR76);
        VAR11 += VAR5->VAR54 * 8;
        VAR2->VAR73.VAR74[VAR14](VAR5->VAR75[0] + VAR23 + 8 * VAR5->VAR54, VAR11, VAR5->VAR54, VAR2->VAR76);
        VAR2->VAR73.VAR74[VAR14](VAR5->VAR75[0] + VAR23 + 8 * VAR5->VAR54 + 8, VAR11 + 8, VAR5->VAR54, VAR2->VAR76);
    }
    else
    {
        VAR14 = (VAR16 & 2) | ((VAR15 & 2) >> 1);
        if (!VAR2->VAR76)
            VAR7->VAR77[0][VAR14](VAR5->VAR75[0] + VAR23, VAR11, VAR5->VAR54, 16);
        else
            VAR7->VAR78[0][VAR14](VAR5->VAR75[0] + VAR23, VAR11, VAR5->VAR54, 16);
    }
    if (VAR5->VAR57 & VAR58)
        return;
    VAR17 = (VAR17 & 3) << 1;
    VAR18 = (VAR18 & 3) << 1;
    if (!VAR2->VAR76)
    {
        VAR9->VAR79[0](VAR5->VAR75[1] + VAR24, VAR12, VAR5->VAR55, 8, VAR17, VAR18);
        VAR9->VAR79[0](VAR5->VAR75[2] + VAR24, VAR13, VAR5->VAR55, 8, VAR17, VAR18);
    }
    else
    {
        VAR2->VAR73.VAR80[0](VAR5->VAR75[1] + VAR24, VAR12, VAR5->VAR55, 8, VAR17, VAR18);
        VAR2->VAR73.VAR80[0](VAR5->VAR75[2] + VAR24, VAR13, VAR5->VAR55, 8, VAR17, VAR18);
    }
}