static int FUN1(VAR1 *VAR2, DCTELEM VAR3[64], int VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10.VAR9;
    VAR11 *VAR10 = &VAR2->VAR10;
    int VAR12 = 0;
    int VAR13, VAR14;
    VAR15 *VAR16;
    VAR15 *VAR17, *VAR18;
    int VAR19;
    int VAR20 = VAR2->VAR20, VAR21 = VAR2->VAR21;
    int VAR22 = VAR10->VAR23;
    int VAR24;
    int VAR25, VAR26 = 0;
    int VAR27 = VAR10->VAR28 + VAR10->VAR29 * VAR10->VAR30;
    if (VAR4 < 4)
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR31[VAR10->VAR32].VAR33, VAR34, 3);
    }
    else
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR35[VAR10->VAR32].VAR33, VAR34, 3);
    }
    if (VAR19 < 0)
    {
        FUN3(VAR10->VAR36, VAR37, "");
        return -1;
    }
    if (VAR19)
    {
        if (VAR19 == 119)
        {
            if (VAR7 == 1)
                VAR19 = FUN4(VAR9, 10);
            else if (VAR7 == 2)
                VAR19 = FUN4(VAR9, 9);
            else
                VAR19 = FUN4(VAR9, 8);
        }
        else
        {
            if (VAR7 == 1)
                VAR19 = (VAR19 << 2) + FUN4(VAR9, 2) - 3;
            else if (VAR7 == 2)
                VAR19 = (VAR19 << 1) + FUN4(VAR9, 1) - 1;
        }
        if (FUN4(VAR9, 1))
            VAR19 = -VAR19;
    }
    VAR19 += FUN5(&VAR2->VAR10, VAR2->VAR38, VAR7, VAR4, VAR2->VAR20, VAR2->VAR21, &VAR16, &VAR12);
    *VAR16 = VAR19;
    if (VAR4 < 4)
    {
        VAR3[0] = VAR19 * VAR10->VAR39;
    }
    else
    {
        VAR3[0] = VAR19 * VAR10->VAR40;
    }
    VAR13 = 0;
    VAR14 = 0;
    VAR14 = 1;
    if (!VAR20)
        VAR12 = 1;
    if (!VAR21)
        VAR12 = 0;
    if (!VAR20 && !VAR21)
        VAR22 = 0;
    VAR17 = VAR10->VAR17[0][0] + VAR10->VAR41[VAR4] * 16;
    VAR18 = VAR17;
    VAR24 = VAR7 * 2 + VAR2->VAR42;
    if (VAR12)
        VAR17 -= 16;
    else
        VAR17 -= 16 * VAR10->VAR43[VAR4];
    VAR25 = VAR10->VAR44.VAR45[VAR27];
    if (VAR12 && VAR21)
        VAR26 = VAR10->VAR44.VAR45[VAR27 - 1];
    if (!VAR12 && VAR20)
        VAR26 = VAR10->VAR44.VAR45[VAR27 - VAR10->VAR30];
    if (VAR4 && VAR4 < 4)
        VAR26 = VAR25;
    if (VAR5)
    {
        int VAR46 = 0, VAR47, VAR48;
        const VAR49 *VAR50;
        int VAR51;
        if (VAR2->VAR10.VAR23)
        {
            if (!VAR12)
                VAR50 = VAR52;
            else
                VAR50 = VAR53;
        }
        else
            VAR50 = VAR54;
        while (!VAR46)
        {
            FUN6(VAR2, &VAR46, &VAR47, &VAR48, VAR6);
            VAR14 += VAR47;
            if (VAR14 > 63)
                break;
            VAR3[VAR50[VAR14++]] = VAR48;
        }
        if (VAR22)
        {
            if (VAR26 && VAR25 != VAR26)
            {
                VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                VAR26 = VAR26 * 2 + ((VAR26 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                if (VAR12)
                {
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR3[VAR51 << 3] += (VAR17[VAR51] * VAR26 * VAR56[VAR25 - 1] + 0x20000) >> 18;
                }
                else
                {
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR3[VAR51] += (VAR17[VAR51 + 8] * VAR26 * VAR56[VAR25 - 1] + 0x20000) >> 18;
                }
            }
            else
            {
                if (VAR12)
                {
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR3[VAR51 << 3] += VAR17[VAR51];
                }
                else
                {
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR3[VAR51] += VAR17[VAR51 + 8];
                }
            }
        }
        for (VAR51 = 1; VAR51 < 8; VAR51++)
        {
            VAR18[VAR51] = VAR3[VAR51 << 3];
            VAR18[VAR51 + 8] = VAR3[VAR51];
        }
        for (VAR51 = 1; VAR51 < 64; VAR51++)
            if (VAR3[VAR51])
            {
                VAR3[VAR51] *= VAR24;
                if (!VAR2->VAR57)
                    VAR3[VAR51] += (VAR3[VAR51] < 0) ? -VAR7 : VAR7;
            }
        if (VAR22)
            VAR14 = 63;
    }
    else
    {
        int VAR51;
        memset(VAR18, 0, 16 * 2);
        if (VAR12)
        {
            if (VAR22)
            {
                memcpy(VAR18, VAR17, 8 * 2);
                if (VAR26 && VAR25 != VAR26)
                {
                    VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                    VAR26 = VAR26 * 2 + ((VAR26 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR18[VAR51] = (VAR18[VAR51] * VAR26 * VAR56[VAR25 - 1] + 0x20000) >> 18;
                }
            }
        }
        else
        {
            if (VAR22)
            {
                memcpy(VAR18 + 8, VAR17 + 8, 8 * 2);
                if (VAR26 && VAR25 != VAR26)
                {
                    VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                    VAR26 = VAR26 * 2 + ((VAR26 == VAR2->VAR55) ? VAR2->VAR42 : 0) - 1;
                    for (VAR51 = 1; VAR51 < 8; VAR51++)
                        VAR18[VAR51 + 8] = (VAR18[VAR51 + 8] * VAR26 * VAR56[VAR25 - 1] + 0x20000) >> 18;
                }
            }
        }
        if (VAR22)
        {
            if (VAR12)
            {
                for (VAR51 = 1; VAR51 < 8; VAR51++)
                {
                    VAR3[VAR51 << 3] = VAR18[VAR51] * VAR24;
                    if (!VAR2->VAR57 && VAR3[VAR51 << 3])
                        VAR3[VAR51 << 3] += (VAR3[VAR51 << 3] < 0) ? -VAR7 : VAR7;
                }
            }
            else
            {
                for (VAR51 = 1; VAR51 < 8; VAR51++)
                {
                    VAR3[VAR51] = VAR18[VAR51 + 8] * VAR24;
                    if (!VAR2->VAR57 && VAR3[VAR51])
                        VAR3[VAR51] += (VAR3[VAR51] < 0) ? -VAR7 : VAR7;
                }
            }
            VAR14 = 63;
        }
    }
    VAR10->VAR58[VAR4] = VAR14;
    return 0;
}