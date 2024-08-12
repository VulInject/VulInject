static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    const int VAR7 = VAR6->VAR8 + VAR6->VAR9 * VAR6->VAR10;
    int VAR11, VAR12, VAR13, VAR14[2];
    int VAR15, VAR16, VAR17, VAR18[2];
    int VAR19[4];
    int VAR20;
    if (VAR2->VAR21.VAR22)
    {
        VAR11 = 0;
        VAR12 = 0;
        VAR13 = 0;
    }
    else
    {
        VAR11 = VAR7 - 1 - VAR6->VAR10;
        VAR12 = VAR7 - VAR6->VAR10;
        VAR13 = VAR7 + 1 - VAR6->VAR10;
        VAR14[0] = VAR7 - 1;
        VAR14[1] = VAR7 - 1;
        VAR19[0] = 0;
        VAR19[1] = 1;
        VAR19[2] = 2;
        VAR19[3] = 3;
    }
    if (VAR4)
    {
        VAR15 = VAR2->VAR23[VAR11] < 255 ? VAR6->VAR24.VAR3[VAR11] : 0;
        VAR16 = VAR2->VAR23[VAR12] < 255 ? VAR6->VAR24.VAR3[VAR12] : 0;
        VAR17 = VAR2->VAR23[VAR13] < 255 ? VAR6->VAR24.VAR3[VAR13] : 0;
        VAR18[0] = VAR2->VAR23[VAR14[0]] < 255 ? VAR6->VAR24.VAR3[VAR14[0]] : 0;
        VAR18[1] = VAR2->VAR23[VAR14[1]] < 255 ? VAR6->VAR24.VAR3[VAR14[1]] : 0;
    }
    else
    {
        VAR15 = VAR2->VAR23[VAR11] == VAR2->VAR25 ? VAR6->VAR24.VAR3[VAR11] : 0;
        VAR16 = VAR2->VAR23[VAR12] == VAR2->VAR25 ? VAR6->VAR24.VAR3[VAR12] : 0;
        VAR17 = VAR2->VAR23[VAR13] == VAR2->VAR25 ? VAR6->VAR24.VAR3[VAR13] : 0;
        VAR18[0] = VAR2->VAR23[VAR14[0]] == VAR2->VAR25 ? VAR6->VAR24.VAR3[VAR14[0]] : 0;
        VAR18[1] = VAR2->VAR23[VAR14[1]] == VAR2->VAR25 ? VAR6->VAR24.VAR3[VAR14[1]] : 0;
    }
    if (FUN2(VAR3))
    {
        VAR2->VAR26 = VAR2->VAR27 = VAR2->VAR28 = 0xFFFF;
        VAR2->VAR29 = 0xEEEA;
        if (!FUN2(VAR16) && (VAR16 == 0 || VAR2->VAR30.VAR31))
        {
            VAR2->VAR26 = 0xB3FF;
            VAR2->VAR27 = 0x33FF;
            VAR2->VAR29 = 0x26EA;
        }
        for (VAR20 = 0; VAR20 < 2; VAR20++)
        {
            if (!FUN2(VAR18[VAR20]) && (VAR18[VAR20] == 0 || VAR2->VAR30.VAR31))
            {
                VAR2->VAR26 &= 0xDF5F;
                VAR2->VAR28 &= 0x5F5F;
            }
        }
        if (!FUN2(VAR15) && (VAR15 == 0 || VAR2->VAR30.VAR31))
            VAR2->VAR26 &= 0x7FFF;
        if (!FUN2(VAR17) && (VAR17 == 0 || VAR2->VAR30.VAR31))
            VAR2->VAR29 &= 0xFBFF;
        if (FUN3(VAR3))
        {
            if (FUN3(VAR16))
            {
                VAR2->VAR32[4 + 8 * 0] = VAR2->VAR33[VAR12][4];
                VAR2->VAR32[5 + 8 * 0] = VAR2->VAR33[VAR12][5];
                VAR2->VAR32[6 + 8 * 0] = VAR2->VAR33[VAR12][6];
                VAR2->VAR32[7 + 8 * 0] = VAR2->VAR33[VAR12][3];
            }
            else
            {
                int VAR34;
                if (!VAR16 || (FUN4(VAR16) && VAR2->VAR30.VAR31))
                    VAR34 = -1;
                else
                {
                    VAR34 = 2;
                }
                VAR2->VAR32[4 + 8 * 0] = VAR2->VAR32[5 + 8 * 0] = VAR2->VAR32[6 + 8 * 0] = VAR2->VAR32[7 + 8 * 0] = VAR34;
            }
            for (VAR20 = 0; VAR20 < 2; VAR20++)
            {
                if (FUN3(VAR18[VAR20]))
                {
                    VAR2->VAR32[3 + 8 * 1 + 2 * 8 * VAR20] = VAR2->VAR33[VAR14[VAR20]][VAR19[0 + 2 * VAR20]];
                    VAR2->VAR32[3 + 8 * 2 + 2 * 8 * VAR20] = VAR2->VAR33[VAR14[VAR20]][VAR19[1 + 2 * VAR20]];
                }
                else
                {
                    int VAR34;
                    if (!VAR18[VAR20] || (FUN4(VAR18[VAR20]) && VAR2->VAR30.VAR31))
                        VAR34 = -1;
                    else
                    {
                        VAR34 = 2;
                    }
                    VAR2->VAR32[3 + 8 * 1 + 2 * 8 * VAR20] = VAR2->VAR32[3 + 8 * 2 + 2 * 8 * VAR20] = VAR34;
                }
            }
        }
    }
    if (VAR16)
    {
        VAR2->VAR35[4 + 8 * 0] = VAR2->VAR36[VAR12][0];
        VAR2->VAR35[5 + 8 * 0] = VAR2->VAR36[VAR12][1];
        VAR2->VAR35[6 + 8 * 0] = VAR2->VAR36[VAR12][2];
        VAR2->VAR35[7 + 8 * 0] = VAR2->VAR36[VAR12][3];
        VAR2->VAR35[1 + 8 * 0] = VAR2->VAR36[VAR12][7];
        VAR2->VAR35[2 + 8 * 0] = VAR2->VAR36[VAR12][8];
        VAR2->VAR35[1 + 8 * 3] = VAR2->VAR36[VAR12][10];
        VAR2->VAR35[2 + 8 * 3] = VAR2->VAR36[VAR12][11];
        VAR2->VAR37 = VAR2->VAR38[VAR12];
    }
    else
    {
        VAR2->VAR35[4 + 8 * 0] = VAR2->VAR35[5 + 8 * 0] = VAR2->VAR35[6 + 8 * 0] = VAR2->VAR35[7 + 8 * 0] = VAR2->VAR35[1 + 8 * 0] = VAR2->VAR35[2 + 8 * 0] = VAR2->VAR35[1 + 8 * 3] = VAR2->VAR35[2 + 8 * 3] = VAR2->VAR30.VAR39 && !FUN2(VAR3) ? 0 : 64;
        if (FUN2(VAR3))
            VAR2->VAR37 = 0x1C0;
        else
            VAR2->VAR37 = 0;
    }
    if (VAR18[0])
    {
        VAR2->VAR35[3 + 8 * 1] = VAR2->VAR36[VAR14[0]][6];
        VAR2->VAR35[3 + 8 * 2] = VAR2->VAR36[VAR14[0]][5];
        VAR2->VAR35[0 + 8 * 1] = VAR2->VAR36[VAR14[0]][9];
        VAR2->VAR35[0 + 8 * 4] = VAR2->VAR36[VAR14[0]][12];
        VAR2->VAR40 = VAR2->VAR38[VAR14[0]];
    }
    else
    {
        VAR2->VAR35[3 + 8 * 1] = VAR2->VAR35[3 + 8 * 2] = VAR2->VAR35[0 + 8 * 1] = VAR2->VAR35[0 + 8 * 4] = VAR2->VAR30.VAR39 && !FUN2(VAR3) ? 0 : 64;
        if (FUN2(VAR3))
            VAR2->VAR40 = 0x1C0;
        else
            VAR2->VAR40 = 0;
    }
    if (VAR18[1])
    {
        VAR2->VAR35[3 + 8 * 3] = VAR2->VAR36[VAR14[1]][4];
        VAR2->VAR35[3 + 8 * 4] = VAR2->VAR36[VAR14[1]][3];
        VAR2->VAR35[0 + 8 * 2] = VAR2->VAR36[VAR14[1]][8];
        VAR2->VAR35[0 + 8 * 5] = VAR2->VAR36[VAR14[1]][11];
    }
    else
    {
        VAR2->VAR35[3 + 8 * 3] = VAR2->VAR35[3 + 8 * 4] = VAR2->VAR35[0 + 8 * 2] = VAR2->VAR35[0 + 8 * 5] = VAR2->VAR30.VAR39 && !FUN2(VAR3) ? 0 : 64;
    }
    if (FUN4(VAR3) || (FUN5(VAR3) && VAR2->VAR41))
    {
        int VAR42;
        for (VAR42 = 0; VAR42 < 2; VAR42++)
        {
            if ((!FUN6(VAR3)) && !FUN7(VAR3, VAR42) && !FUN5(VAR3) && !VAR4)
            {
                continue;
            }
            VAR2->VAR43[VAR42] = 0;
            if (FUN4(VAR15))
            {
                const int VAR44 = VAR2->VAR45[VAR11] + 3 + 3 * VAR2->VAR46;
                const int VAR47 = VAR2->VAR48[VAR11] + 1 + VAR2->VAR49;
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44];
                VAR2->VAR54[VAR42][VAR52[0] - 1 - 1 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47];
            }
            else
            {
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 - 1 * 8] = 0;
                VAR2->VAR54[VAR42][VAR52[0] - 1 - 1 * 8] = VAR15 ? VAR56 : VAR57;
            }
            if (FUN4(VAR16))
            {
                const int VAR44 = VAR2->VAR45[VAR12] + 3 * VAR2->VAR46;
                const int VAR47 = VAR2->VAR48[VAR12] + VAR2->VAR49;
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 0 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + 0];
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 1 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + 1];
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 2 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + 2];
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 3 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + 3];
                VAR2->VAR54[VAR42][VAR52[0] + 0 - 1 * 8] = VAR2->VAR54[VAR42][VAR52[0] + 1 - 1 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47 + 0];
                VAR2->VAR54[VAR42][VAR52[0] + 2 - 1 * 8] = VAR2->VAR54[VAR42][VAR52[0] + 3 - 1 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47 + 1];
            }
            else
            {
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 0 - 1 * 8] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 1 - 1 * 8] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 2 - 1 * 8] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 3 - 1 * 8] = 0;
                *(VAR50 *)&VAR2->VAR54[VAR42][VAR52[0] + 0 - 1 * 8] = ((VAR16 ? VAR56 : VAR57) & 0xFF) * 0x01010101;
            }
            if (FUN4(VAR17))
            {
                const int VAR44 = VAR2->VAR45[VAR13] + 3 * VAR2->VAR46;
                const int VAR47 = VAR2->VAR48[VAR13] + VAR2->VAR49;
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 4 - 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44];
                VAR2->VAR54[VAR42][VAR52[0] + 4 - 1 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47];
            }
            else
            {
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] + 4 - 1 * 8] = 0;
                VAR2->VAR54[VAR42][VAR52[0] + 4 - 1 * 8] = VAR17 ? VAR56 : VAR57;
            }
            if (FUN4(VAR18[0]))
            {
                const int VAR44 = VAR2->VAR45[VAR14[0]] + 3;
                const int VAR47 = VAR2->VAR48[VAR14[0]] + 1;
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 0 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + VAR2->VAR46 * VAR19[0]];
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 1 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + VAR2->VAR46 * VAR19[1]];
                VAR2->VAR54[VAR42][VAR52[0] - 1 + 0 * 8] = VAR2->VAR54[VAR42][VAR52[0] - 1 + 1 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47 + VAR2->VAR49 * (VAR19[0] >> 1)];
            }
            else
            {
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 0 * 8] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 1 * 8] = 0;
                VAR2->VAR54[VAR42][VAR52[0] - 1 + 0 * 8] = VAR2->VAR54[VAR42][VAR52[0] - 1 + 1 * 8] = VAR18[0] ? VAR56 : VAR57;
            }
            if (FUN4(VAR18[1]))
            {
                const int VAR44 = VAR2->VAR45[VAR14[1]] + 3;
                const int VAR47 = VAR2->VAR48[VAR14[1]] + 1;
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 2 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + VAR2->VAR46 * VAR19[2]];
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 3 * 8] = *(VAR50 *)VAR6->VAR24.VAR53[VAR42][VAR44 + VAR2->VAR46 * VAR19[3]];
                VAR2->VAR54[VAR42][VAR52[0] - 1 + 2 * 8] = VAR2->VAR54[VAR42][VAR52[0] - 1 + 3 * 8] = VAR6->VAR24.VAR55[VAR42][VAR47 + VAR2->VAR49 * (VAR19[2] >> 1)];
            }
            else
            {
                *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 2 * 8] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[0] - 1 + 3 * 8] = 0;
                VAR2->VAR54[VAR42][VAR52[0] - 1 + 2 * 8] = VAR2->VAR54[VAR42][VAR52[0] - 1 + 3 * 8] = VAR18[0] ? VAR56 : VAR57;
            }
            if (VAR4)
                continue;
            VAR2->VAR54[VAR42][VAR52[5] + 1] = VAR2->VAR54[VAR42][VAR52[7] + 1] = VAR2->VAR54[VAR42][VAR52[13] + 1] = VAR2->VAR54[VAR42][VAR52[4]] = VAR2->VAR54[VAR42][VAR52[12]] = VAR57;
            *(VAR50 *)VAR2->VAR51[VAR42][VAR52[5] + 1] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[7] + 1] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[13] + 1] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[4]] = *(VAR50 *)VAR2->VAR51[VAR42][VAR52[12]] = 0;
            if (VAR2->VAR30.VAR39)
            {
                if (FUN4(VAR15))
                {
                    const int VAR44 = VAR2->VAR45[VAR11] + 3 + 3 * VAR2->VAR46;
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 - 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44];
                }
                else
                {
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 - 1 * 8] = 0;
                }
                if (FUN4(VAR16))
                {
                    const int VAR44 = VAR2->VAR45[VAR12] + 3 * VAR2->VAR46;
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 0 - 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + 0];
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 1 - 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + 1];
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 2 - 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + 2];
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 3 - 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + 3];
                }
                else
                {
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 0 - 1 * 8] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 1 - 1 * 8] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 2 - 1 * 8] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] + 3 - 1 * 8] = 0;
                }
                if (FUN4(VAR18[0]))
                {
                    const int VAR44 = VAR2->VAR45[VAR14[0]] + 3;
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 0 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + VAR2->VAR46 * VAR19[0]];
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 1 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + VAR2->VAR46 * VAR19[1]];
                }
                else
                {
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 0 * 8] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 1 * 8] = 0;
                }
                if (FUN4(VAR18[1]))
                {
                    const int VAR44 = VAR2->VAR45[VAR14[1]] + 3;
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 2 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + VAR2->VAR46 * VAR19[2]];
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 3 * 8] = *(VAR50 *)VAR2->VAR59[VAR42][VAR44 + VAR2->VAR46 * VAR19[3]];
                }
                else
                {
                    *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 2 * 8] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[0] - 1 + 3 * 8] = 0;
                }
                *(VAR50 *)VAR2->VAR58[VAR42][VAR52[5] + 1] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[7] + 1] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[13] + 1] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[4]] = *(VAR50 *)VAR2->VAR58[VAR42][VAR52[12]] = 0;
                if (VAR2->VAR60 == VAR61)
                {
                    FUN8(&VAR2->VAR62[VAR52[0]], 4, 4, 8, 0, 1);
                    if (FUN5(VAR16))
                    {
                        *(VAR50 *)&VAR2->VAR62[VAR52[0] - 1 * 8] = 0x01010101;
                    }
                    else if (FUN6(VAR16))
                    {
                        int VAR47 = VAR2->VAR48[VAR12] + VAR2->VAR49;
                        VAR2->VAR62[VAR52[0] + 0 - 1 * 8] = VAR2->VAR63[VAR47];
                        VAR2->VAR62[VAR52[0] + 2 - 1 * 8] = VAR2->VAR63[VAR47 + 1];
                    }
                    else
                    {
                        *(VAR50 *)&VAR2->VAR62[VAR52[0] - 1 * 8] = 0;
                    }
                    if (FUN5(VAR18[0]))
                    {
                        VAR2->VAR62[VAR52[0] - 1 + 0 * 8] = VAR2->VAR62[VAR52[0] - 1 + 2 * 8] = 1;
                    }
                    else if (FUN6(VAR18[0]))
                    {
                        int VAR47 = VAR2->VAR48[VAR14[0]] + 1;
                        VAR2->VAR62[VAR52[0] - 1 + 0 * 8] = VAR2->VAR63[VAR47];
                        VAR2->VAR62[VAR52[0] - 1 + 2 * 8] = VAR2->VAR63[VAR47 + VAR2->VAR49];
                    }
                    else
                    {
                        VAR2->VAR62[VAR52[0] - 1 + 0 * 8] = VAR2->VAR62[VAR52[0] - 1 + 2 * 8] = 0;
                    }
                }
            }
        }
    }
}