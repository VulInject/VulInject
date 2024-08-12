static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7 = VAR2->VAR8.VAR7;
    int VAR9 = VAR2->VAR8.VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16 = &VAR2->VAR16;
    VAR17 *VAR18 = &VAR5->VAR18;
    int VAR19 = 0;
    float VAR20;
    VAR21 *VAR22;
    *VAR18 = 0;
    VAR5->VAR23 = 0;
    for (VAR10 = 0; VAR10 < 5; VAR10++)
        VAR5->VAR24[VAR10] = 1.0;
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        VAR5->VAR23 |= FUN2(VAR16) << VAR10;
    VAR5->VAR25 = 0;
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        VAR5->VAR25 |= FUN2(VAR16) << VAR10;
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR26;
        VAR5->VAR27 = FUN3(VAR16, 8);
        VAR20 = ((((VAR5->VAR27 & 0x1f) | 0x20) << 13) * VAR28[3 - (VAR5->VAR27 >> 5)]);
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
            VAR5->VAR24[VAR10] *= VAR20;
    }
    if (VAR9 == 0x00)
    {
        if (FUN2(VAR16))
        {
            *VAR18 |= VAR29;
            VAR5->VAR30 = FUN3(VAR16, 8);
            VAR20 = ((((VAR5->VAR30 & 0x1f) | 0x20) << 13) * VAR28[3 - (VAR5->VAR30 >> 5)]);
            VAR5->VAR24[1] *= VAR20;
        }
    }
    FUN4(VAR2);
    VAR5->VAR31 = 0;
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR32;
        VAR5->VAR33 = 0;
        if (FUN2(VAR16))
        {
            *VAR18 |= VAR34;
            for (VAR10 = 0; VAR10 < VAR7; VAR10++)
                VAR5->VAR31 |= FUN2(VAR16) << VAR10;
            if (VAR9 == 0x00 || VAR9 == 0x01)
                return -1;
            if (VAR9 == 0x02)
                if (FUN2(VAR16))
                    *VAR18 |= VAR35;
            VAR5->VAR36 = FUN3(VAR16, 4);
            VAR5->VAR37 = FUN3(VAR16, 4);
            if (3 + VAR5->VAR37 - VAR5->VAR36 < 0)
                return -1;
            VAR5->VAR38 = VAR5->VAR39 = 3 + VAR5->VAR37 - VAR5->VAR36;
            VAR5->VAR40 = VAR5->VAR36 * 12 + 37;
            VAR5->VAR41 = ((VAR5->VAR37 + 3) * 12) + 37;
            for (VAR10 = 0; VAR10 < VAR5->VAR39 - 1; VAR10++)
                if (FUN2(VAR16))
                {
                    VAR5->VAR33 |= 1 << VAR10;
                    VAR5->VAR38--;
                }
        }
    }
    if (*VAR18 & VAR34)
    {
        VAR5->VAR42 = 0;
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
            if (VAR5->VAR31 & (1 << VAR10))
                if (FUN2(VAR16))
                {
                    VAR5->VAR42 |= 1 << VAR10;
                    VAR5->VAR43[VAR10] = FUN3(VAR16, 2);
                    for (VAR11 = 0; VAR11 < VAR5->VAR38; VAR11++)
                    {
                        VAR5->VAR44[VAR10][VAR11] = FUN3(VAR16, 4);
                        VAR5->VAR45[VAR10][VAR11] = FUN3(VAR16, 4);
                    }
                }
        VAR5->VAR46 = 0;
        if ((VAR9 == 0x02) && (*VAR18 & VAR35) && (VAR5->VAR42 & 1 || VAR5->VAR42 & (1 << 1)))
        {
            for (VAR11 = 0; VAR11 < VAR5->VAR38; VAR11++)
                if (FUN2(VAR16))
                    VAR5->VAR46 |= 1 << VAR11;
        }
    }
    FUN5(VAR2);
    VAR5->VAR47 = 0;
    if (VAR9 == 0x02)
        if (FUN2(VAR16))
        {
            *VAR18 |= VAR48;
            if (!(*VAR18 & VAR34) || VAR5->VAR36 > 2)
                for (VAR12 = 0; VAR12 < 4; VAR12++)
                    VAR5->VAR47 |= FUN2(VAR16) << VAR12;
            if (VAR5->VAR36 > 0 && VAR5->VAR36 <= 2 && (*VAR18 & VAR34))
                for (VAR12 = 0; VAR12 < 3; VAR12++)
                    VAR5->VAR47 |= FUN2(VAR16) << VAR12;
            if (VAR5->VAR36 == 0 && (*VAR18 & VAR34))
                for (VAR12 = 0; VAR12 < 2; VAR12++)
                    VAR5->VAR47 |= FUN2(VAR16) << VAR12;
        }
    VAR5->VAR49 = VAR50;
    VAR5->VAR51 = VAR50;
    if (*VAR18 & VAR34)
        VAR5->VAR49 = FUN3(VAR16, 2);
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        VAR5->VAR52[VAR10] = FUN3(VAR16, 2);
    if (VAR2->VAR8.VAR18 & VAR53)
        VAR5->VAR51 = FUN2(VAR16);
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        if (VAR5->VAR52[VAR10] != VAR50)
        {
            if ((VAR5->VAR31 & (1 << VAR10)))
                VAR5->VAR54[VAR10] = VAR5->VAR40;
            else
            {
                VAR5->VAR55[VAR10] = FUN3(VAR16, 6);
                if (VAR5->VAR55[VAR10] > 60)
                {
                    FUN6(NULL, VAR56, "", VAR5->VAR55[VAR10]);
                    return -1;
                }
                VAR5->VAR54[VAR10] = ((VAR5->VAR55[VAR10] + 12) * 3) + 37;
            }
        }
    if (*VAR18 & VAR34)
        if (VAR5->VAR49 != VAR50)
        {
            VAR19 |= 64;
            VAR5->VAR57 = FUN3(VAR16, 4) << 1;
            VAR5->VAR58 = (VAR5->VAR41 - VAR5->VAR40) / (3 << (VAR5->VAR49 - 1));
            if (FUN7(VAR16, VAR5->VAR49, VAR5->VAR58, VAR5->VAR57, VAR5->VAR59 + VAR5->VAR40))
            {
                FUN6(NULL, VAR56, "");
                return -1;
            }
        }
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        if (VAR5->VAR52[VAR10] != VAR50)
        {
            VAR19 |= 1 << VAR10;
            VAR14 = 3 << (VAR5->VAR52[VAR10] - 1);
            VAR5->VAR60[VAR10] = (VAR5->VAR54[VAR10] + VAR14 - 4) / VAR14;
            VAR22 = VAR5->VAR22[VAR10];
            VAR22[0] = FUN3(VAR16, 4);
            if (FUN7(VAR16, VAR5->VAR52[VAR10], VAR5->VAR60[VAR10], VAR22[0], VAR22 + 1))
            {
                FUN6(NULL, VAR56, "", VAR10);
                return -1;
            }
            VAR5->VAR61[VAR10] = FUN3(VAR16, 2);
        }
    if (VAR2->VAR8.VAR18 & VAR53)
        if (VAR5->VAR51 != VAR50)
        {
            VAR19 |= 32;
            VAR5->VAR62[0] = FUN3(VAR16, 4);
            if (FUN7(VAR16, VAR5->VAR51, 2, VAR5->VAR62[0], VAR5->VAR62 + 1))
            {
                FUN6(NULL, VAR56, "");
                return -1;
            }
        }
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR63;
        VAR19 |= 127;
        VAR5->VAR64 = FUN3(VAR16, 2);
        VAR5->VAR65 = FUN3(VAR16, 2);
        VAR5->VAR66 = FUN3(VAR16, 2);
        VAR5->VAR67 = FUN3(VAR16, 2);
        VAR5->VAR68 = FUN3(VAR16, 3);
    }
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR69;
        VAR19 |= 127;
        VAR5->VAR70 = FUN3(VAR16, 6);
        if (*VAR18 & VAR34)
        {
            VAR5->VAR71 = FUN3(VAR16, 4);
            VAR5->VAR72 = FUN3(VAR16, 3);
        }
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        {
            VAR5->VAR73[VAR10] = FUN3(VAR16, 4);
            VAR5->VAR74[VAR10] = FUN3(VAR16, 3);
        }
        if (VAR2->VAR8.VAR18 & VAR53)
        {
            VAR5->VAR75 = FUN3(VAR16, 4);
            VAR5->VAR76 = FUN3(VAR16, 3);
        }
    }
    if (*VAR18 & VAR34)
        if (FUN2(VAR16))
        {
            VAR19 |= 64;
            *VAR18 |= VAR77;
            VAR5->VAR78 = FUN3(VAR16, 3);
            VAR5->VAR79 = FUN3(VAR16, 3);
        }
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR80;
        VAR19 |= 127;
        if (*VAR18 & VAR34)
        {
            VAR5->VAR81 = FUN3(VAR16, 2);
            if (VAR5->VAR81 == VAR82)
            {
                FUN6(NULL, VAR56, "");
                return -1;
            }
        }
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        {
            VAR5->VAR83[VAR10] = FUN3(VAR16, 2);
            if (VAR5->VAR83[VAR10] == VAR82)
            {
                FUN6(NULL, VAR56, "");
                return -1;
            }
        }
        if (*VAR18 & VAR34)
            if (VAR5->VAR81 == VAR84)
            {
                VAR5->VAR85 = FUN3(VAR16, 3);
                for (VAR13 = 0; VAR13 <= VAR5->VAR85; VAR13++)
                {
                    VAR5->VAR86[VAR13] = FUN3(VAR16, 5);
                    VAR5->VAR87[VAR13] = FUN3(VAR16, 4);
                    VAR5->VAR88[VAR13] = FUN3(VAR16, 3);
                }
            }
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
            if (VAR5->VAR83[VAR10] == VAR84)
            {
                VAR5->VAR89[VAR10] = FUN3(VAR16, 3);
                for (VAR13 = 0; VAR13 <= VAR5->VAR89[VAR10]; VAR13++)
                {
                    VAR5->VAR90[VAR10][VAR13] = FUN3(VAR16, 5);
                    VAR5->VAR91[VAR10][VAR13] = FUN3(VAR16, 4);
                    VAR5->VAR92[VAR10][VAR13] = FUN3(VAR16, 3);
                }
            }
    }
    FUN8(VAR2, VAR19);
    if (FUN2(VAR16))
    {
        *VAR18 |= VAR93;
        VAR5->VAR94 = FUN3(VAR16, 9);
        for (VAR10 = 0; VAR10 < VAR5->VAR94; VAR10++)
            FUN9(VAR16, 8);
    }
    if (FUN10(VAR2))
    {
        FUN6(NULL, VAR56, "");
        return -1;
    }
    if (*VAR18 & VAR48)
        FUN11(VAR2);
    return 0;
}