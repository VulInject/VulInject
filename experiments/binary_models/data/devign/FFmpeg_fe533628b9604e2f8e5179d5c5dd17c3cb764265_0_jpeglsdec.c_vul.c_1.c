int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7 = 0;
    VAR8 *VAR9, *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14 = 0, VAR15 = 1, VAR16, VAR17, VAR18 = 0;
    VAR9 = FUN2(VAR2->VAR19->VAR20[0]);
    if (!VAR9)
        return FUN3(VAR21);
    VAR10 = VAR9;
    VAR11 = VAR2->VAR19->VAR22[0];
    VAR13 = FUN2(sizeof(VAR12));
    if (!VAR13)
    {
        FUN4(VAR9);
        return FUN3(VAR21);
    }
    VAR13->VAR3 = VAR3;
    VAR13->VAR23 = (VAR2->VAR24 < 2) ? 2 : VAR2->VAR24;
    VAR13->VAR25 = VAR2->VAR25;
    VAR13->VAR26 = VAR2->VAR27;
    VAR13->VAR28 = VAR2->VAR29;
    VAR13->VAR30 = VAR2->VAR31;
    VAR13->VAR32 = VAR2->VAR32;
    FUN5(VAR13, 0);
    FUN6(VAR13);
    if (VAR2->VAR24 <= 8)
        VAR17 = VAR4 + (8 - VAR2->VAR24);
    else
        VAR17 = VAR4 + (16 - VAR2->VAR24);
    if (VAR17 >= 16)
    {
        VAR18 = VAR33;
    }
    if (VAR2->VAR34->VAR35 & VAR36)
    {
        FUN7(VAR2->VAR34, VAR37, ""
                                       "",
               VAR2->VAR16, VAR2->VAR38, VAR13->VAR3, VAR13->VAR25, VAR13->VAR26, VAR13->VAR28, VAR13->VAR30, VAR13->VAR32, VAR13->VAR39, VAR13->VAR40, VAR13->VAR41);
        FUN7(VAR2->VAR34, VAR37, "", VAR5, VAR4, VAR2->VAR24, VAR2->VAR42);
    }
    if (FUN8(&VAR2->VAR43) < VAR2->VAR38)
    {
        VAR18 = VAR33;
    }
    if (VAR5 == 0)
    {
        if (VAR2->VAR42 > VAR2->VAR44)
        {
            VAR18 = VAR33;
        }
        VAR15 = (VAR2->VAR44 > 1) ? 3 : 1;
        VAR14 = FUN9(VAR2->VAR42 - 1, 0, VAR15 - 1);
        VAR16 = VAR2->VAR16 * VAR15;
        VAR11 += VAR14;
        for (VAR6 = 0; VAR6 < VAR2->VAR38; VAR6++)
        {
            if (VAR2->VAR24 <= 8)
            {
                FUN10(VAR13, VAR2, VAR10, VAR11, VAR7, VAR16, VAR15, VAR14, 8);
                VAR7 = VAR10[0];
            }
            else
            {
                FUN10(VAR13, VAR2, VAR10, VAR11, VAR7, VAR16, VAR15, VAR14, 16);
                VAR7 = *((VAR45 *)VAR10);
            }
            VAR10 = VAR11;
            VAR11 += VAR2->VAR19->VAR20[0];
            if (VAR2->VAR46 && !--VAR2->VAR47)
            {
                FUN11(&VAR2->VAR43);
                FUN12(&VAR2->VAR43, 16);
            }
        }
    }
    else if (VAR5 == 1)
    {
        int VAR48;
        int VAR49[3] = {0, 0, 0};
        VAR15 = (VAR2->VAR44 > 1) ? 3 : 1;
        memset(VAR11, 0, VAR2->VAR19->VAR20[0]);
        VAR16 = VAR2->VAR16 * VAR15;
        for (VAR6 = 0; VAR6 < VAR2->VAR38; VAR6++)
        {
            for (VAR48 = 0; VAR48 < VAR15; VAR48++)
            {
                FUN10(VAR13, VAR2, VAR10 + VAR48, VAR11 + VAR48, VAR49[VAR48], VAR16, VAR15, VAR48, 8);
                VAR49[VAR48] = VAR10[VAR48];
                if (VAR2->VAR46 && !--VAR2->VAR47)
                {
                    FUN11(&VAR2->VAR43);
                    FUN12(&VAR2->VAR43, 16);
                }
            }
            VAR10 = VAR11;
            VAR11 += VAR2->VAR19->VAR20[0];
        }
    }
    else if (VAR5 == 2)
    {
        FUN13(VAR2->VAR34, "");
    }
    if (VAR2->VAR50 && VAR2->VAR44 == 3)
    {
        int VAR51, VAR52;
        VAR52 = VAR2->VAR16 * VAR2->VAR44;
        if (VAR2->VAR24 <= 8)
        {
            VAR8 *VAR53 = VAR2->VAR19->VAR22[0];
            for (VAR6 = 0; VAR6 < VAR2->VAR38; VAR6++)
            {
                switch (VAR2->VAR50)
                {
                case 1:
                    for (VAR51 = VAR14; VAR51 < VAR52; VAR51 += 3)
                    {
                        VAR53[VAR51] += VAR53[VAR51 + 1] + 128;
                        VAR53[VAR51 + 2] += VAR53[VAR51 + 1] + 128;
                    }
                    break;
                case 2:
                    for (VAR51 = VAR14; VAR51 < VAR52; VAR51 += 3)
                    {
                        VAR53[VAR51] += VAR53[VAR51 + 1] + 128;
                        VAR53[VAR51 + 2] += ((VAR53[VAR51] + VAR53[VAR51 + 1]) >> 1) + 128;
                    }
                    break;
                case 3:
                    for (VAR51 = VAR14; VAR51 < VAR52; VAR51 += 3)
                    {
                        int VAR54 = VAR53[VAR51 + 0] - ((VAR53[VAR51 + 2] + VAR53[VAR51 + 1]) >> 2) + 64;
                        VAR53[VAR51 + 0] = VAR53[VAR51 + 2] + VAR54 + 128;
                        VAR53[VAR51 + 2] = VAR53[VAR51 + 1] + VAR54 + 128;
                        VAR53[VAR51 + 1] = VAR54;
                    }
                    break;
                case 4:
                    for (VAR51 = VAR14; VAR51 < VAR52; VAR51 += 3)
                    {
                        int VAR55 = VAR53[VAR51 + 0] - ((359 * (VAR53[VAR51 + 2] - 128) + 490) >> 8);
                        int VAR54 = VAR53[VAR51 + 0] - ((88 * (VAR53[VAR51 + 1] - 128) - 183 * (VAR53[VAR51 + 2] - 128) + 30) >> 8);
                        int VAR56 = VAR53[VAR51 + 0] + ((454 * (VAR53[VAR51 + 1] - 128) + 574) >> 8);
                        VAR53[VAR51 + 0] = FUN14(VAR55);
                        VAR53[VAR51 + 1] = FUN14(VAR54);
                        VAR53[VAR51 + 2] = FUN14(VAR56);
                    }
                    break;
                }
                VAR53 += VAR2->VAR19->VAR20[0];
            }
        }
        else
            FUN13(VAR2->VAR34, "");
    }
    if (VAR17)
    {
        int VAR51, VAR52;
        VAR52 = VAR2->VAR16 * VAR2->VAR44;
        if (VAR2->VAR24 <= 8)
        {
            VAR8 *VAR53 = VAR2->VAR19->VAR22[0];
            for (VAR6 = 0; VAR6 < VAR2->VAR38; VAR6++)
            {
                for (VAR51 = VAR14; VAR51 < VAR52; VAR51 += VAR15)
                    VAR53[VAR51] <<= VAR17;
                VAR53 += VAR2->VAR19->VAR20[0];
            }
        }
        else
        {
            VAR45 *VAR53 = (VAR45 *)VAR2->VAR19->VAR22[0];
            for (VAR6 = 0; VAR6 < VAR2->VAR38; VAR6++)
            {
                for (VAR51 = 0; VAR51 < VAR52; VAR51++)
                    VAR53[VAR51] <<= VAR17;
                VAR53 += VAR2->VAR19->VAR20[0] / 2;
            }
        }
    }
VAR57:
    FUN4(VAR13);
    FUN4(VAR9);
    return VAR18;