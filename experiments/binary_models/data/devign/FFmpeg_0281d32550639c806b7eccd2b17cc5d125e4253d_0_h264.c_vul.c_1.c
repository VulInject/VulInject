static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    const int VAR7 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11[2];
    int VAR12, VAR13, VAR14, VAR15[2];
    int *VAR16;
    int VAR17 = -1;
    int VAR18;
    VAR9 = VAR7 - (VAR6->VAR19 << VAR20);
    if (VAR4 && (VAR2->VAR21 == 1 || VAR2->VAR22[VAR7] == VAR2->VAR22[VAR9]) && !VAR23)
        return;
    VAR8 = VAR9 - 1;
    VAR10 = VAR9 + 1;
    VAR11[1] = VAR11[0] = VAR7 - 1;
    VAR16 = VAR24[0];
    if (VAR23)
    {
        const int VAR25 = VAR6->VAR26 + (VAR6->VAR27 & ~1) * VAR6->VAR19;
        const int VAR28 = VAR25 - VAR6->VAR19;
        const int VAR29 = VAR28 - 1;
        const int VAR30 = VAR28 + 1;
        const int VAR31 = !FUN2(VAR6->VAR32.VAR3[VAR29]);
        const int VAR33 = !FUN2(VAR6->VAR32.VAR3[VAR28]);
        const int VAR34 = !FUN2(VAR6->VAR32.VAR3[VAR30]);
        const int VAR35 = !FUN2(VAR6->VAR32.VAR3[VAR25 - 1]);
        const int VAR36 = !FUN2(VAR3);
        const int VAR37 = (VAR6->VAR27 & 1);
        FUN3(VAR6->VAR38, "", VAR36, VAR35, VAR31, VAR33, VAR34);
        if (VAR37 ? !VAR36 : (!VAR36 && !VAR33))
        {
            VAR9 -= VAR6->VAR19;
        }
        if (VAR37 ? !VAR36 : (!VAR36 && !VAR31))
        {
            VAR8 -= VAR6->VAR19;
        }
        else if (VAR37 && VAR36 && !VAR35)
        {
            VAR8 += VAR6->VAR19;
            VAR17 = 0;
        }
        if (VAR37 ? !VAR36 : (!VAR36 && !VAR34))
        {
            VAR10 -= VAR6->VAR19;
        }
        if (VAR35 != VAR36)
        {
            VAR11[1] = VAR11[0] = VAR25 - 1;
            if (VAR36)
            {
                if (VAR37)
                {
                    VAR16 = VAR24[1];
                }
                else
                {
                    VAR16 = VAR24[2];
                }
            }
            else
            {
                VAR11[1] += VAR6->VAR19;
                VAR16 = VAR24[3];
            }
        }
    }
    VAR2->VAR39 = VAR9;
    VAR2->VAR40[0] = VAR11[0];
    VAR2->VAR40[1] = VAR11[1];
    if (VAR4)
    {
        VAR12 = 0;
        VAR14 = 0;
        VAR13 = VAR2->VAR22[VAR9] < 255 ? VAR6->VAR32.VAR3[VAR9] : 0;
        VAR15[0] = VAR2->VAR22[VAR11[0]] < 255 ? VAR6->VAR32.VAR3[VAR11[0]] : 0;
        VAR15[1] = VAR2->VAR22[VAR11[1]] < 255 ? VAR6->VAR32.VAR3[VAR11[1]] : 0;
        if (VAR23 && !FUN4(VAR3))
        {
            int VAR41;
            for (VAR41 = 0; VAR41 < VAR2->VAR42; VAR41++)
            {
                if (FUN5(VAR3, VAR41))
                {
                    VAR43 *VAR44 = &VAR6->VAR32.VAR45[VAR41][VAR2->VAR46[VAR7]];
                    *(VAR47 *)&VAR2->VAR48[VAR41][VAR49[0]] = *(VAR47 *)&VAR2->VAR48[VAR41][VAR49[2]] = FUN6(VAR44[0], VAR44[1]) * 0x0101;
                    VAR44 += VAR2->VAR50;
                    *(VAR47 *)&VAR2->VAR48[VAR41][VAR49[8]] = *(VAR47 *)&VAR2->VAR48[VAR41][VAR49[10]] = FUN6(VAR44[0], VAR44[1]) * 0x0101;
                }
                else
                {
                    FUN7(&VAR2->VAR51[VAR41][VAR49[0]], 4, 4, 8, 0, 4);
                    FUN7(&VAR2->VAR48[VAR41][VAR49[0]], 4, 4, 8, (VAR52)VAR53, 1);
                }
            }
        }
    }
    else
    {
        VAR12 = VAR2->VAR22[VAR8] == VAR2->VAR21 ? VAR6->VAR32.VAR3[VAR8] : 0;
        VAR13 = VAR2->VAR22[VAR9] == VAR2->VAR21 ? VAR6->VAR32.VAR3[VAR9] : 0;
        VAR14 = VAR2->VAR22[VAR10] == VAR2->VAR21 ? VAR6->VAR32.VAR3[VAR10] : 0;
        VAR15[0] = VAR2->VAR22[VAR11[0]] == VAR2->VAR21 ? VAR6->VAR32.VAR3[VAR11[0]] : 0;
        VAR15[1] = VAR2->VAR22[VAR11[1]] == VAR2->VAR21 ? VAR6->VAR32.VAR3[VAR11[1]] : 0;
    }
    if (FUN4(VAR3))
    {
        VAR2->VAR54 = VAR2->VAR55 = VAR2->VAR56 = 0xFFFF;
        VAR2->VAR57 = 0xEEEA;
        if (!FUN4(VAR13) && (VAR13 == 0 || VAR2->VAR58.VAR59))
        {
            VAR2->VAR54 = 0xB3FF;
            VAR2->VAR55 = 0x33FF;
            VAR2->VAR57 = 0x26EA;
        }
        for (VAR18 = 0; VAR18 < 2; VAR18++)
        {
            if (!FUN4(VAR15[VAR18]) && (VAR15[VAR18] == 0 || VAR2->VAR58.VAR59))
            {
                VAR2->VAR54 &= 0xDF5F;
                VAR2->VAR56 &= 0x5F5F;
            }
        }
        if (!FUN4(VAR12) && (VAR12 == 0 || VAR2->VAR58.VAR59))
            VAR2->VAR54 &= 0x7FFF;
        if (!FUN4(VAR14) && (VAR14 == 0 || VAR2->VAR58.VAR59))
            VAR2->VAR57 &= 0xFBFF;
        if (FUN8(VAR3))
        {
            if (FUN8(VAR13))
            {
                VAR2->VAR60[4 + 8 * 0] = VAR2->VAR61[VAR9][4];
                VAR2->VAR60[5 + 8 * 0] = VAR2->VAR61[VAR9][5];
                VAR2->VAR60[6 + 8 * 0] = VAR2->VAR61[VAR9][6];
                VAR2->VAR60[7 + 8 * 0] = VAR2->VAR61[VAR9][3];
            }
            else
            {
                int VAR62;
                if (!VAR13 || (FUN9(VAR13) && VAR2->VAR58.VAR59))
                    VAR62 = -1;
                else
                {
                    VAR62 = 2;
                }
                VAR2->VAR60[4 + 8 * 0] = VAR2->VAR60[5 + 8 * 0] = VAR2->VAR60[6 + 8 * 0] = VAR2->VAR60[7 + 8 * 0] = VAR62;
            }
            for (VAR18 = 0; VAR18 < 2; VAR18++)
            {
                if (FUN8(VAR15[VAR18]))
                {
                    VAR2->VAR60[3 + 8 * 1 + 2 * 8 * VAR18] = VAR2->VAR61[VAR11[VAR18]][VAR16[0 + 2 * VAR18]];
                    VAR2->VAR60[3 + 8 * 2 + 2 * 8 * VAR18] = VAR2->VAR61[VAR11[VAR18]][VAR16[1 + 2 * VAR18]];
                }
                else
                {
                    int VAR62;
                    if (!VAR15[VAR18] || (FUN9(VAR15[VAR18]) && VAR2->VAR58.VAR59))
                        VAR62 = -1;
                    else
                    {
                        VAR62 = 2;
                    }
                    VAR2->VAR60[3 + 8 * 1 + 2 * 8 * VAR18] = VAR2->VAR60[3 + 8 * 2 + 2 * 8 * VAR18] = VAR62;
                }
            }
        }
    }
    if (VAR13)
    {
        VAR2->VAR63[4 + 8 * 0] = VAR2->VAR64[VAR9][4];
        VAR2->VAR63[5 + 8 * 0] = VAR2->VAR64[VAR9][5];
        VAR2->VAR63[6 + 8 * 0] = VAR2->VAR64[VAR9][6];
        VAR2->VAR63[7 + 8 * 0] = VAR2->VAR64[VAR9][3];
        VAR2->VAR63[1 + 8 * 0] = VAR2->VAR64[VAR9][9];
        VAR2->VAR63[2 + 8 * 0] = VAR2->VAR64[VAR9][8];
        VAR2->VAR63[1 + 8 * 3] = VAR2->VAR64[VAR9][12];
        VAR2->VAR63[2 + 8 * 3] = VAR2->VAR64[VAR9][11];
    }
    else
    {
        VAR2->VAR63[4 + 8 * 0] = VAR2->VAR63[5 + 8 * 0] = VAR2->VAR63[6 + 8 * 0] = VAR2->VAR63[7 + 8 * 0] = VAR2->VAR63[1 + 8 * 0] = VAR2->VAR63[2 + 8 * 0] = VAR2->VAR63[1 + 8 * 3] = VAR2->VAR63[2 + 8 * 3] = VAR2->VAR58.VAR65 && !FUN4(VAR3) ? 0 : 64;
    }
    for (VAR18 = 0; VAR18 < 2; VAR18++)
    {
        if (VAR15[VAR18])
        {
            VAR2->VAR63[3 + 8 * 1 + 2 * 8 * VAR18] = VAR2->VAR64[VAR11[VAR18]][VAR16[0 + 2 * VAR18]];
            VAR2->VAR63[3 + 8 * 2 + 2 * 8 * VAR18] = VAR2->VAR64[VAR11[VAR18]][VAR16[1 + 2 * VAR18]];
            VAR2->VAR63[0 + 8 * 1 + 8 * VAR18] = VAR2->VAR64[VAR11[VAR18]][VAR16[4 + 2 * VAR18]];
            VAR2->VAR63[0 + 8 * 4 + 8 * VAR18] = VAR2->VAR64[VAR11[VAR18]][VAR16[5 + 2 * VAR18]];
        }
        else
        {
            VAR2->VAR63[3 + 8 * 1 + 2 * 8 * VAR18] = VAR2->VAR63[3 + 8 * 2 + 2 * 8 * VAR18] = VAR2->VAR63[0 + 8 * 1 + 8 * VAR18] = VAR2->VAR63[0 + 8 * 4 + 8 * VAR18] = VAR2->VAR58.VAR65 && !FUN4(VAR3) ? 0 : 64;
        }
    }
    if (VAR2->VAR58.VAR65)
    {
        if (VAR13)
        {
            VAR2->VAR66 = VAR2->VAR67[VAR9];
        }
        else if (FUN4(VAR3))
        {
            VAR2->VAR66 = 0x1C0;
        }
        else
        {
            VAR2->VAR66 = 0;
        }
        if (VAR15[0])
        {
            VAR2->VAR68 = VAR2->VAR67[VAR11[0]] & 0x1f0;
        }
        else if (FUN4(VAR3))
        {
            VAR2->VAR68 = 0x1C0;
        }
        else
        {
            VAR2->VAR68 = 0;
        }
        if (VAR15[0])
        {
            VAR2->VAR68 |= ((VAR2->VAR67[VAR11[0]] >> ((VAR16[0] & (~1)) + 1)) & 0x1) << 1;
        }
        if (VAR15[1])
        {
            VAR2->VAR68 |= ((VAR2->VAR67[VAR11[1]] >> ((VAR16[2] & (~1)) + 1)) & 0x1) << 3;
        }
    }
    if (FUN9(VAR3) || FUN10(VAR3))
    {
        int VAR41;
        for (VAR41 = 0; VAR41 < VAR2->VAR42; VAR41++)
        {
            if (!FUN5(VAR3, VAR41) && !FUN10(VAR3) && !VAR2->VAR69)
            {
                continue;
            }
            VAR2->VAR70[VAR41] = 0;
            if (FUN5(VAR13, VAR41))
            {
                const int VAR71 = VAR2->VAR72[VAR9] + 3 * VAR2->VAR73;
                const int VAR74 = VAR2->VAR46[VAR9] + VAR2->VAR50;
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 0 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + 0];
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 1 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + 1];
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 2 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + 2];
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 3 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + 3];
                VAR2->VAR48[VAR41][VAR49[0] + 0 - 1 * 8] = VAR2->VAR48[VAR41][VAR49[0] + 1 - 1 * 8] = VAR6->VAR32.VAR45[VAR41][VAR74 + 0];
                VAR2->VAR48[VAR41][VAR49[0] + 2 - 1 * 8] = VAR2->VAR48[VAR41][VAR49[0] + 3 - 1 * 8] = VAR6->VAR32.VAR45[VAR41][VAR74 + 1];
            }
            else
            {
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 0 - 1 * 8] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 1 - 1 * 8] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 2 - 1 * 8] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 3 - 1 * 8] = 0;
                *(VAR47 *)&VAR2->VAR48[VAR41][VAR49[0] + 0 - 1 * 8] = ((VAR13 ? VAR53 : VAR76) & 0xFF) * 0x01010101;
            }
            for (VAR18 = 0; VAR18 < 2; VAR18++)
            {
                int VAR77 = VAR49[0] - 1 + VAR18 * 2 * 8;
                if (FUN5(VAR15[VAR18], VAR41))
                {
                    const int VAR71 = VAR2->VAR72[VAR11[VAR18]] + 3;
                    const int VAR74 = VAR2->VAR46[VAR11[VAR18]] + 1;
                    *(VAR47 *)VAR2->VAR51[VAR41][VAR77] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + VAR2->VAR73 * VAR16[0 + VAR18 * 2]];
                    *(VAR47 *)VAR2->VAR51[VAR41][VAR77 + 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71 + VAR2->VAR73 * VAR16[1 + VAR18 * 2]];
                    VAR2->VAR48[VAR41][VAR77] = VAR6->VAR32.VAR45[VAR41][VAR74 + VAR2->VAR50 * (VAR16[0 + VAR18 * 2] >> 1)];
                    VAR2->VAR48[VAR41][VAR77 + 8] = VAR6->VAR32.VAR45[VAR41][VAR74 + VAR2->VAR50 * (VAR16[1 + VAR18 * 2] >> 1)];
                }
                else
                {
                    *(VAR47 *)VAR2->VAR51[VAR41][VAR77] = *(VAR47 *)VAR2->VAR51[VAR41][VAR77 + 8] = 0;
                    VAR2->VAR48[VAR41][VAR77] = VAR2->VAR48[VAR41][VAR77 + 8] = VAR15[VAR18] ? VAR53 : VAR76;
                }
            }
            if ((VAR4 || (FUN10(VAR3) && !VAR2->VAR78)) && !VAR23)
                continue;
            if (FUN5(VAR12, VAR41))
            {
                const int VAR71 = VAR2->VAR72[VAR8] + 3 + VAR2->VAR73 + (VAR17 & 2 * VAR2->VAR73);
                const int VAR74 = VAR2->VAR46[VAR8] + 1 + (VAR17 & VAR2->VAR50);
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] - 1 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71];
                VAR2->VAR48[VAR41][VAR49[0] - 1 - 1 * 8] = VAR6->VAR32.VAR45[VAR41][VAR74];
            }
            else
            {
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] - 1 - 1 * 8] = 0;
                VAR2->VAR48[VAR41][VAR49[0] - 1 - 1 * 8] = VAR12 ? VAR53 : VAR76;
            }
            if (FUN5(VAR14, VAR41))
            {
                const int VAR71 = VAR2->VAR72[VAR10] + 3 * VAR2->VAR73;
                const int VAR74 = VAR2->VAR46[VAR10] + VAR2->VAR50;
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 4 - 1 * 8] = *(VAR47 *)VAR6->VAR32.VAR75[VAR41][VAR71];
                VAR2->VAR48[VAR41][VAR49[0] + 4 - 1 * 8] = VAR6->VAR32.VAR45[VAR41][VAR74];
            }
            else
            {
                *(VAR47 *)VAR2->VAR51[VAR41][VAR49[0] + 4 - 1 * 8] = 0;
                VAR2->VAR48[VAR41][VAR49[0] + 4 - 1 * 8] = VAR14 ? VAR53 : VAR76;
            }
            if ((FUN11(VAR3) || FUN10(VAR3)) && !VAR23)
                continue;
            VAR2->VAR48[VAR41][VAR49[5] + 1] = VAR2->VAR48[VAR41][VAR49[7] + 1] = VAR2->VAR48[VAR41][VAR49[13] + 1] = VAR2->VAR48[VAR41][VAR49[4]] = VAR2->VAR48[VAR41][VAR49[12]] = VAR76;
            *(VAR47 *)VAR2->VAR51[VAR41][VAR49[5] + 1] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[7] + 1] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[13] + 1] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[4]] = *(VAR47 *)VAR2->VAR51[VAR41][VAR49[12]] = 0;
            if (VAR2->VAR58.VAR65)
            {
                if (FUN5(VAR13, VAR41))
                {
                    const int VAR71 = VAR2->VAR72[VAR9] + 3 * VAR2->VAR73;
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 0 - 1 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + 0];
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 1 - 1 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + 1];
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 2 - 1 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + 2];
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 3 - 1 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + 3];
                }
                else
                {
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 0 - 1 * 8] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 1 - 1 * 8] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 2 - 1 * 8] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] + 3 - 1 * 8] = 0;
                }
                if (FUN5(VAR15[0], VAR41))
                {
                    const int VAR71 = VAR2->VAR72[VAR11[0]] + 3;
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 0 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + VAR2->VAR73 * VAR16[0]];
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 1 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + VAR2->VAR73 * VAR16[1]];
                }
                else
                {
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 0 * 8] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 1 * 8] = 0;
                }
                if (FUN5(VAR15[1], VAR41))
                {
                    const int VAR71 = VAR2->VAR72[VAR11[1]] + 3;
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 2 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + VAR2->VAR73 * VAR16[2]];
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 3 * 8] = *(VAR47 *)VAR2->VAR80[VAR41][VAR71 + VAR2->VAR73 * VAR16[3]];
                }
                else
                {
                    *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 2 * 8] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[0] - 1 + 3 * 8] = 0;
                }
                *(VAR47 *)VAR2->VAR79[VAR41][VAR49[5] + 1] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[7] + 1] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[13] + 1] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[4]] = *(VAR47 *)VAR2->VAR79[VAR41][VAR49[12]] = 0;
                if (VAR2->VAR81 == VAR82)
                {
                    FUN7(&VAR2->VAR83[VAR49[0]], 4, 4, 8, 0, 1);
                    if (FUN10(VAR13))
                    {
                        *(VAR47 *)&VAR2->VAR83[VAR49[0] - 1 * 8] = 0x01010101;
                    }
                    else if (FUN12(VAR13))
                    {
                        int VAR74 = VAR2->VAR46[VAR9] + VAR2->VAR50;
                        VAR2->VAR83[VAR49[0] + 0 - 1 * 8] = VAR2->VAR84[VAR74];
                        VAR2->VAR83[VAR49[0] + 2 - 1 * 8] = VAR2->VAR84[VAR74 + 1];
                    }
                    else
                    {
                        *(VAR47 *)&VAR2->VAR83[VAR49[0] - 1 * 8] = 0;
                    }
                    if (FUN10(VAR15[0]))
                        VAR2->VAR83[VAR49[0] - 1 + 0 * 8] = 1;
                    else if (FUN12(VAR15[0]))
                        VAR2->VAR83[VAR49[0] - 1 + 0 * 8] = VAR2->VAR84[VAR2->VAR46[VAR11[0]] + 1 + VAR2->VAR50 * (VAR16[0] >> 1)];
                    else
                        VAR2->VAR83[VAR49[0] - 1 + 0 * 8] = 0;
                    if (FUN10(VAR15[1]))
                        VAR2->VAR83[VAR49[0] - 1 + 2 * 8] = 1;
                    else if (FUN12(VAR15[1]))
                        VAR2->VAR83[VAR49[0] - 1 + 2 * 8] = VAR2->VAR84[VAR2->VAR46[VAR11[1]] + 1 + VAR2->VAR50 * (VAR16[2] >> 1)];
                    else
                        VAR2->VAR83[VAR49[0] - 1 + 2 * 8] = 0;
                }
            }
            if (VAR23)
            {
                FUN13(VAR49[0] - 1 - 1 * 8, VAR12)
                FUN13(VAR49[0] + 0 - 1 * 8, VAR13) FUN13(VAR49[0] + 1 - 1 * 8, VAR13) FUN13(VAR49[0] + 2 - 1 * 8, VAR13) FUN13(VAR49[0] + 3 - 1 * 8, VAR13) FUN13(VAR49[0] + 4 - 1 * 8, VAR14) FUN13(VAR49[0] - 1 + 0 * 8, VAR15[0]) FUN13(VAR49[0] - 1 + 1 * 8, VAR15[0]) FUN13(VAR49[0] - 1 + 2 * 8, VAR15[1]) FUN13(VAR49[0] - 1 + 3 * 8, VAR15[1]) if (VAR85)
                {
                    if (!FUN2(VAR3) && VAR2->VAR48[VAR41][VAR86] >= 0)
                    {
                        VAR2->VAR48[VAR41][VAR86] <<= 1;
                        VAR2->VAR51[VAR41][VAR86][1] /= 2;
                        VAR2->VAR79[VAR41][VAR86][1] /= 2;
                    }
                    VAR87
                }
                else
                {
                    if (FUN2(VAR3) && VAR2->VAR48[VAR41][VAR86] >= 0)
                    {
                        VAR2->VAR48[VAR41][VAR86] >>= 1;
                        VAR2->VAR51[VAR41][VAR86][1] <<= 1;
                        VAR2->VAR79[VAR41][VAR86][1] <<= 1;
                    }
                    VAR87
                }
            }
        }
    }
    VAR2->VAR88 = !!FUN14(VAR13) + !!FUN14(VAR15[0]);
}