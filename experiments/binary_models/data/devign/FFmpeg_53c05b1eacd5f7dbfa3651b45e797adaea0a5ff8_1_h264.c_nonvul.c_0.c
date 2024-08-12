static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    const int VAR6 = VAR5->VAR7 + VAR5->VAR8 * VAR5->VAR9;
    int VAR10, VAR11, VAR12, VAR13[2];
    int VAR14, VAR15, VAR16, VAR17[2];
    int VAR18[4];
    int VAR19;
    if (VAR2->VAR20.VAR21)
    {
        VAR10 = 0;
        VAR11 = 0;
        VAR12 = 0;
    }
    else
    {
        VAR10 = VAR6 - 1 - VAR5->VAR9;
        VAR11 = VAR6 - VAR5->VAR9;
        VAR12 = VAR6 + 1 - VAR5->VAR9;
        VAR13[0] = VAR6 - 1;
        VAR13[1] = VAR6 - 1;
        VAR18[0] = 0;
        VAR18[1] = 1;
        VAR18[2] = 2;
        VAR18[3] = 3;
    }
    VAR14 = VAR2->VAR22[VAR10] == VAR2->VAR23 ? VAR5->VAR24.VAR3[VAR10] : 0;
    VAR15 = VAR2->VAR22[VAR11] == VAR2->VAR23 ? VAR5->VAR24.VAR3[VAR11] : 0;
    VAR16 = VAR2->VAR22[VAR12] == VAR2->VAR23 ? VAR5->VAR24.VAR3[VAR12] : 0;
    VAR17[0] = VAR2->VAR22[VAR13[0]] == VAR2->VAR23 ? VAR5->VAR24.VAR3[VAR13[0]] : 0;
    VAR17[1] = VAR2->VAR22[VAR13[1]] == VAR2->VAR23 ? VAR5->VAR24.VAR3[VAR13[1]] : 0;
    if (FUN2(VAR3))
    {
        VAR2->VAR25 = VAR2->VAR26 = VAR2->VAR27 = 0xFFFF;
        VAR2->VAR28 = 0xEEEA;
        if (!FUN2(VAR15) && (VAR15 == 0 || VAR2->VAR29.VAR30))
        {
            VAR2->VAR25 = 0xB3FF;
            VAR2->VAR26 = 0x33FF;
            VAR2->VAR28 = 0x26EA;
        }
        for (VAR19 = 0; VAR19 < 2; VAR19++)
        {
            if (!FUN2(VAR17[VAR19]) && (VAR17[VAR19] == 0 || VAR2->VAR29.VAR30))
            {
                VAR2->VAR25 &= 0xDF5F;
                VAR2->VAR27 &= 0x5F5F;
            }
        }
        if (!FUN2(VAR14) && (VAR14 == 0 || VAR2->VAR29.VAR30))
            VAR2->VAR25 &= 0x7FFF;
        if (!FUN2(VAR16) && (VAR16 == 0 || VAR2->VAR29.VAR30))
            VAR2->VAR28 &= 0xFBFF;
        if (FUN3(VAR3))
        {
            if (FUN3(VAR15))
            {
                VAR2->VAR31[4 + 8 * 0] = VAR2->VAR32[VAR11][4];
                VAR2->VAR31[5 + 8 * 0] = VAR2->VAR32[VAR11][5];
                VAR2->VAR31[6 + 8 * 0] = VAR2->VAR32[VAR11][6];
                VAR2->VAR31[7 + 8 * 0] = VAR2->VAR32[VAR11][3];
            }
            else
            {
                int VAR33;
                if (FUN4(VAR15) || (FUN5(VAR15) && !VAR2->VAR29.VAR30))
                    VAR33 = 2;
                else
                {
                    VAR33 = -1;
                }
                VAR2->VAR31[4 + 8 * 0] = VAR2->VAR31[5 + 8 * 0] = VAR2->VAR31[6 + 8 * 0] = VAR2->VAR31[7 + 8 * 0] = VAR33;
            }
            for (VAR19 = 0; VAR19 < 2; VAR19++)
            {
                if (FUN3(VAR17[VAR19]))
                {
                    VAR2->VAR31[3 + 8 * 1 + 2 * 8 * VAR19] = VAR2->VAR32[VAR13[VAR19]][VAR18[0 + 2 * VAR19]];
                    VAR2->VAR31[3 + 8 * 2 + 2 * 8 * VAR19] = VAR2->VAR32[VAR13[VAR19]][VAR18[1 + 2 * VAR19]];
                }
                else
                {
                    int VAR33;
                    if (FUN4(VAR17[VAR19]) || (FUN5(VAR17[VAR19]) && !VAR2->VAR29.VAR30))
                        VAR33 = 2;
                    else
                    {
                        VAR33 = -1;
                    }
                    VAR2->VAR31[3 + 8 * 1 + 2 * 8 * VAR19] = VAR2->VAR31[3 + 8 * 2 + 2 * 8 * VAR19] = VAR33;
                }
            }
        }
    }
    if (VAR15)
    {
        VAR2->VAR34[4 + 8 * 0] = VAR2->VAR35[VAR11][0];
        VAR2->VAR34[5 + 8 * 0] = VAR2->VAR35[VAR11][1];
        VAR2->VAR34[6 + 8 * 0] = VAR2->VAR35[VAR11][2];
        VAR2->VAR34[7 + 8 * 0] = VAR2->VAR35[VAR11][3];
        VAR2->VAR34[1 + 8 * 0] = VAR2->VAR35[VAR11][7];
        VAR2->VAR34[2 + 8 * 0] = VAR2->VAR35[VAR11][8];
        VAR2->VAR34[1 + 8 * 3] = VAR2->VAR35[VAR11][10];
        VAR2->VAR34[2 + 8 * 3] = VAR2->VAR35[VAR11][11];
    }
    else
    {
        VAR2->VAR34[4 + 8 * 0] = VAR2->VAR34[5 + 8 * 0] = VAR2->VAR34[6 + 8 * 0] = VAR2->VAR34[7 + 8 * 0] = VAR2->VAR34[1 + 8 * 0] = VAR2->VAR34[2 + 8 * 0] = VAR2->VAR34[1 + 8 * 3] = VAR2->VAR34[2 + 8 * 3] = 64;
    }
    if (VAR17[0])
    {
        VAR2->VAR34[3 + 8 * 1] = VAR2->VAR35[VAR13[0]][6];
        VAR2->VAR34[3 + 8 * 2] = VAR2->VAR35[VAR13[0]][5];
        VAR2->VAR34[0 + 8 * 1] = VAR2->VAR35[VAR13[0]][9];
        VAR2->VAR34[0 + 8 * 4] = VAR2->VAR35[VAR13[0]][12];
    }
    else
    {
        VAR2->VAR34[3 + 8 * 1] = VAR2->VAR34[3 + 8 * 2] = VAR2->VAR34[0 + 8 * 1] = VAR2->VAR34[0 + 8 * 4] = 64;
    }
    if (VAR17[1])
    {
        VAR2->VAR34[3 + 8 * 3] = VAR2->VAR35[VAR13[1]][4];
        VAR2->VAR34[3 + 8 * 4] = VAR2->VAR35[VAR13[1]][3];
        VAR2->VAR34[0 + 8 * 2] = VAR2->VAR35[VAR13[1]][8];
        VAR2->VAR34[0 + 8 * 5] = VAR2->VAR35[VAR13[1]][11];
    }
    else
    {
        VAR2->VAR34[3 + 8 * 3] = VAR2->VAR34[3 + 8 * 4] = VAR2->VAR34[0 + 8 * 2] = VAR2->VAR34[0 + 8 * 5] = 64;
    }
    if (FUN5(VAR3))
    {
        int VAR36;
        for (VAR36 = 0; VAR36 < 2; VAR36++)
        {
            if ((!FUN6(VAR3)) && !FUN7(VAR3, VAR36))
            {
                continue;
            }
            VAR2->VAR37[VAR36] = 0;
            if (FUN5(VAR14))
            {
                const int VAR38 = VAR2->VAR39[VAR10] + 3 + 3 * VAR2->VAR40;
                const int VAR41 = VAR2->VAR42[VAR10] + 1 + VAR2->VAR43;
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38];
                VAR2->VAR48[VAR36][VAR46[0] - 1 - 1 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41];
            }
            else
            {
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 - 1 * 8] = 0;
                VAR2->VAR48[VAR36][VAR46[0] - 1 - 1 * 8] = VAR14 ? VAR50 : VAR51;
            }
            if (FUN5(VAR15))
            {
                const int VAR38 = VAR2->VAR39[VAR11] + 3 * VAR2->VAR40;
                const int VAR41 = VAR2->VAR42[VAR11] + VAR2->VAR43;
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 0 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + 0];
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 1 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + 1];
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 2 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + 2];
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 3 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + 3];
                VAR2->VAR48[VAR36][VAR46[0] + 0 - 1 * 8] = VAR2->VAR48[VAR36][VAR46[0] + 1 - 1 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41 + 0];
                VAR2->VAR48[VAR36][VAR46[0] + 2 - 1 * 8] = VAR2->VAR48[VAR36][VAR46[0] + 3 - 1 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41 + 1];
            }
            else
            {
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 0 - 1 * 8] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 1 - 1 * 8] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 2 - 1 * 8] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 3 - 1 * 8] = 0;
                *(VAR44 *)&VAR2->VAR48[VAR36][VAR46[0] + 0 - 1 * 8] = ((VAR15 ? VAR50 : VAR51) & 0xFF) * 0x01010101;
            }
            if (FUN5(VAR16))
            {
                const int VAR38 = VAR2->VAR39[VAR12] + 3 * VAR2->VAR40;
                const int VAR41 = VAR2->VAR42[VAR12] + VAR2->VAR43;
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 4 - 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38];
                VAR2->VAR48[VAR36][VAR46[0] + 4 - 1 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41];
            }
            else
            {
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] + 4 - 1 * 8] = 0;
                VAR2->VAR48[VAR36][VAR46[0] + 4 - 1 * 8] = VAR16 ? VAR50 : VAR51;
            }
            if (FUN5(VAR17[0]))
            {
                const int VAR38 = VAR2->VAR39[VAR13[0]] + 3;
                const int VAR41 = VAR2->VAR42[VAR13[0]] + 1;
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 0 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + VAR2->VAR40 * VAR18[0]];
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 1 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + VAR2->VAR40 * VAR18[1]];
                VAR2->VAR48[VAR36][VAR46[0] - 1 + 0 * 8] = VAR2->VAR48[VAR36][VAR46[0] - 1 + 1 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41 + VAR2->VAR43 * (VAR18[0] >> 1)];
            }
            else
            {
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 0 * 8] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 1 * 8] = 0;
                VAR2->VAR48[VAR36][VAR46[0] - 1 + 0 * 8] = VAR2->VAR48[VAR36][VAR46[0] - 1 + 1 * 8] = VAR17[0] ? VAR50 : VAR51;
            }
            if (FUN5(VAR17[1]))
            {
                const int VAR38 = VAR2->VAR39[VAR13[1]] + 3;
                const int VAR41 = VAR2->VAR42[VAR13[1]] + 1;
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 2 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + VAR2->VAR40 * VAR18[2]];
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 3 * 8] = *(VAR44 *)VAR5->VAR24.VAR47[VAR36][VAR38 + VAR2->VAR40 * VAR18[3]];
                VAR2->VAR48[VAR36][VAR46[0] - 1 + 2 * 8] = VAR2->VAR48[VAR36][VAR46[0] - 1 + 3 * 8] = VAR5->VAR24.VAR49[VAR36][VAR41 + VAR2->VAR43 * (VAR18[2] >> 1)];
            }
            else
            {
                *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 2 * 8] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[0] - 1 + 3 * 8] = 0;
                VAR2->VAR48[VAR36][VAR46[0] - 1 + 2 * 8] = VAR2->VAR48[VAR36][VAR46[0] - 1 + 3 * 8] = VAR17[0] ? VAR50 : VAR51;
            }
            VAR2->VAR48[VAR36][VAR46[5] + 1] = VAR2->VAR48[VAR36][VAR46[7] + 1] = VAR2->VAR48[VAR36][VAR46[13] + 1] = VAR2->VAR48[VAR36][VAR46[4]] = VAR2->VAR48[VAR36][VAR46[12]] = VAR51;
            *(VAR44 *)VAR2->VAR45[VAR36][VAR46[5] + 1] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[7] + 1] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[13] + 1] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[4]] = *(VAR44 *)VAR2->VAR45[VAR36][VAR46[12]] = 0;
        }
    }
}