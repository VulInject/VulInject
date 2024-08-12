static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const int VAR5 = VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    int VAR7;
    int VAR8[6];
    if (VAR2->VAR9)
    {
        VAR10 = VAR2->VAR11 * 2;
        VAR12 = VAR2->VAR11;
    }
    else
    {
        VAR10 = VAR2->VAR11;
        VAR12 = VAR2->VAR11 * 8;
    }
    for (VAR7 = 0; VAR7 < 6; VAR7++)
        VAR8[VAR7] = 0;
    if (VAR2->VAR13)
    {
        VAR14 *VAR15;
        int VAR16;
        VAR16 = VAR2->VAR11;
        VAR15 = VAR2->VAR17[0] + (VAR6 * 16 * VAR16) + VAR5 * 16;
        FUN2(VAR2->VAR18[0], VAR15, VAR16);
        FUN2(VAR2->VAR18[1], VAR15 + 8, VAR16);
        FUN2(VAR2->VAR18[2], VAR15 + 8 * VAR16, VAR16);
        FUN2(VAR2->VAR18[3], VAR15 + 8 * VAR16 + 8, VAR16);
        VAR16 >>= 1;
        VAR15 = VAR2->VAR17[1] + (VAR6 * 8 * VAR16) + VAR5 * 8;
        FUN2(VAR2->VAR18[4], VAR15, VAR16);
        VAR15 = VAR2->VAR17[2] + (VAR6 * 8 * VAR16) + VAR5 * 8;
        FUN2(VAR2->VAR18[5], VAR15, VAR16);
    }
    else
    {
        VAR19 *VAR20;
        VAR21 *VAR22;
        VAR14 *VAR23, *VAR24, *VAR25;
        VAR14 *VAR26, *VAR27, *VAR28;
        int VAR29, VAR30;
        VAR23 = VAR2->VAR31[0] + (VAR6 * 16 * VAR2->VAR11) + VAR5 * 16;
        VAR24 = VAR2->VAR31[1] + (VAR6 * 8 * (VAR2->VAR11 >> 1)) + VAR5 * 8;
        VAR25 = VAR2->VAR31[2] + (VAR6 * 8 * (VAR2->VAR11 >> 1)) + VAR5 * 8;
        VAR29 = VAR2->VAR11;
        VAR30 = VAR29 >> 1;
        VAR26 = VAR2->VAR17[0] + (VAR6 * 16 * VAR29) + VAR5 * 16;
        VAR27 = VAR2->VAR17[1] + (VAR6 * 8 * VAR30) + VAR5 * 8;
        VAR28 = VAR2->VAR17[2] + (VAR6 * 8 * VAR30) + VAR5 * 8;
        if ((!VAR2->VAR32) || VAR2->VAR33 == VAR34)
        {
            VAR20 = VAR35;
            VAR22 = VAR36;
        }
        else
        {
            VAR20 = VAR37;
            VAR22 = VAR38;
        }
        if (VAR2->VAR39 & VAR40)
        {
            FUN3(VAR2, VAR23, VAR24, VAR25, 0, VAR2->VAR41, VAR20, VAR22);
            if ((!VAR2->VAR32) || VAR2->VAR33 == VAR34)
                VAR20 = VAR42;
            else
                VAR20 = VAR43;
        }
        if (VAR2->VAR39 & VAR44)
        {
            FUN3(VAR2, VAR23, VAR24, VAR25, 1, VAR2->VAR45, VAR20, VAR22);
        }
        FUN4(VAR2->VAR18[0], VAR26, VAR23, VAR29);
        FUN4(VAR2->VAR18[1], VAR26 + 8, VAR23 + 8, VAR29);
        FUN4(VAR2->VAR18[2], VAR26 + 8 * VAR29, VAR23 + 8 * VAR29, VAR29);
        FUN4(VAR2->VAR18[3], VAR26 + 8 * VAR29 + 8, VAR23 + 8 * VAR29 + 8, VAR29);
        FUN4(VAR2->VAR18[4], VAR27, VAR24, VAR30);
        FUN4(VAR2->VAR18[5], VAR28, VAR25, VAR30);
        if (VAR2->VAR46[VAR2->VAR47 * VAR6 + VAR5] < 2 * VAR2->VAR48 * VAR2->VAR48)
        {
            if (FUN5(VAR26, VAR23, VAR29) < 20 * VAR2->VAR48)
                VAR8[0] = 1;
            if (FUN5(VAR26 + 8, VAR23 + 8, VAR29) < 20 * VAR2->VAR48)
                VAR8[1] = 1;
            if (FUN5(VAR26 + 8 * VAR29, VAR23 + 8 * VAR29, VAR29) < 20 * VAR2->VAR48)
                VAR8[2] = 1;
            if (FUN5(VAR26 + 8 * VAR29 + 8, VAR23 + 8 * VAR29 + 8, VAR29) < 20 * VAR2->VAR48)
                VAR8[3] = 1;
            if (FUN5(VAR27, VAR24, VAR29) < 20 * VAR2->VAR48)
                VAR8[4] = 1;
            if (FUN5(VAR28, VAR25, VAR29) < 20 * VAR2->VAR48)
                VAR8[5] = 1;
            {
                static int VAR49[7];
                int VAR50 = 0;
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                    if (VAR8[VAR7])
                        VAR50++;
                VAR49[VAR50]++;
                if (VAR2->VAR5 == 0 && VAR2->VAR6 == 0)
                {
                    for (VAR7 = 0; VAR7 < 7; VAR7++)
                    {
                        FUN6("", VAR49[VAR7], VAR7);
                    }
                }
            }
        }
    }
    {
        float VAR51;
        VAR51 = ((VAR2->VAR52 << 1) + VAR2->VAR53[VAR2->VAR47 * VAR6 + VAR5] + 1.0) / ((VAR2->VAR53[VAR2->VAR47 * VAR6 + VAR5] << 1) + VAR2->VAR52 + 1.0);
        FUN6("", (VAR2->VAR54[VAR2->VAR47 * VAR6 + VAR5] > 0) ? '' : '', VAR2->VAR48, VAR51, VAR2->VAR48 * VAR51, VAR2->VAR53[VAR2->VAR47 * VAR6 + VAR5], VAR2->VAR52);
    }
    if (VAR2->VAR55 && !(VAR2->VAR56 == 1 || VAR2->VAR56 == 2))
    {
        FUN7(VAR2);
    }
    else if (VAR2->VAR57)
    {
        VAR2->VAR58 = 2 * VAR2->VAR48;
        VAR2->VAR59 = 2 * VAR2->VAR48;
    }
    else
    {
        VAR2->VAR58 = 8;
        VAR2->VAR59 = 8;
    }
    if (VAR2->VAR60 == VAR61)
    {
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            int VAR62;
            VAR2->VAR63[VAR7] = FUN8(VAR2, VAR2->VAR18[VAR7], VAR7, 8, &VAR62);
            if (VAR62)
                FUN9(VAR2, VAR2->VAR18[VAR7], VAR2->VAR63[VAR7]);
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            if (!VAR8[VAR7])
            {
                int VAR62;
                VAR2->VAR63[VAR7] = FUN8(VAR2, VAR2->VAR18[VAR7], VAR7, VAR2->VAR48, &VAR62);
                if (VAR62)
                    FUN9(VAR2, VAR2->VAR18[VAR7], VAR2->VAR63[VAR7]);
            }
            else
                VAR2->VAR63[VAR7] = -1;
        }
        if (VAR2->VAR64 && !VAR2->VAR13)
            for (VAR7 = 0; VAR7 < 4; VAR7++)
                FUN10(VAR2, VAR7, VAR2->VAR64, 0);
        if (VAR2->VAR65 && !VAR2->VAR13)
            for (VAR7 = 4; VAR7 < 6; VAR7++)
                FUN10(VAR2, VAR7, VAR2->VAR65, 1);
    }
    switch (VAR2->VAR60)
    {
    case VAR66:
        FUN11(VAR2, VAR2->VAR18, VAR3, VAR4);
        break;
    case VAR67:
        if (VAR2->VAR68)
            FUN12(VAR2, VAR2->VAR18, VAR3, VAR4);
        else if (VAR2->VAR55)
            FUN13(VAR2, VAR2->VAR18, VAR3, VAR4);
        else
            FUN14(VAR2, VAR2->VAR18, VAR3, VAR4);
        break;
    case VAR61:
        FUN15(VAR2, VAR2->VAR18);
        break;
    }
}