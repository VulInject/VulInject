static int FUN1(VAR1 *VAR2, DCTELEM VAR3[64], int VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10.VAR9;
    VAR11 *VAR10 = &VAR2->VAR10;
    int VAR12 = 0;
    int VAR13, VAR14;
    VAR15 *VAR16;
    VAR15 *VAR17, *VAR18;
    int VAR19;
    int VAR20 = VAR10->VAR21 + VAR10->VAR22 * VAR10->VAR23;
    int VAR24 = VAR2->VAR24, VAR25 = VAR2->VAR25;
    int VAR26 = VAR10->VAR27;
    int VAR28;
    int VAR29, VAR30 = 0;
    VAR6 = (VAR6 < 1) ? 0 : ((VAR6 > 31) ? 31 : VAR6);
    VAR10->VAR31 = VAR10->VAR32[VAR6];
    VAR10->VAR33 = VAR10->VAR34[VAR6];
    if (VAR4 < 4)
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR35[VAR10->VAR36].VAR37, VAR38, 3);
    }
    else
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR39[VAR10->VAR36].VAR37, VAR38, 3);
    }
    if (VAR19 < 0)
    {
        FUN3(VAR10->VAR40, VAR41, "");
        return -1;
    }
    if (VAR19)
    {
        if (VAR19 == 119)
        {
            if (VAR6 == 1)
                VAR19 = FUN4(VAR9, 10);
            else if (VAR6 == 2)
                VAR19 = FUN4(VAR9, 9);
            else
                VAR19 = FUN4(VAR9, 8);
        }
        else
        {
            if (VAR6 == 1)
                VAR19 = (VAR19 << 2) + FUN4(VAR9, 2) - 3;
            else if (VAR6 == 2)
                VAR19 = (VAR19 << 1) + FUN4(VAR9, 1) - 1;
        }
        if (FUN4(VAR9, 1))
            VAR19 = -VAR19;
    }
    VAR19 += FUN5(&VAR2->VAR10, VAR2->VAR42, VAR6, VAR4, VAR24, VAR25, &VAR16, &VAR12);
    *VAR16 = VAR19;
    if (VAR4 < 4)
    {
        VAR3[0] = VAR19 * VAR10->VAR31;
    }
    else
    {
        VAR3[0] = VAR19 * VAR10->VAR33;
    }
    VAR13 = 0;
    VAR14 = 0;
    VAR14 = 1;
    if (!VAR24)
        VAR12 = 1;
    if (!VAR25)
        VAR12 = 0;
    if (!VAR24 && !VAR25)
        VAR26 = 0;
    VAR17 = VAR10->VAR17[0][0] + VAR10->VAR43[VAR4] * 16;
    VAR18 = VAR17;
    VAR28 = VAR6 * 2 + VAR2->VAR44;
    if (VAR12)
        VAR17 -= 16;
    else
        VAR17 -= 16 * VAR10->VAR45[VAR4];
    VAR29 = VAR10->VAR46.VAR47[VAR20];
    if (VAR12 && VAR25)
        VAR30 = VAR10->VAR46.VAR47[VAR20 - 1];
    if (!VAR12 && VAR24)
        VAR30 = VAR10->VAR46.VAR47[VAR20 - VAR10->VAR23];
    if (VAR4 && VAR4 < 4)
        VAR30 = VAR29;
    if (VAR5)
    {
        int VAR48 = 0, VAR49, VAR50;
        const VAR51 *VAR52;
        int VAR53;
        VAR52 = VAR54;
        while (!VAR48)
        {
            FUN6(VAR2, &VAR48, &VAR49, &VAR50, VAR7);
            VAR14 += VAR49;
            if (VAR14 > 63)
                break;
            VAR3[VAR52[VAR14++]] = VAR50;
        }
        if (VAR26)
        {
            if (VAR30 && VAR29 != VAR30)
            {
                VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                VAR30 = VAR30 * 2 + ((VAR30 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                if (VAR12)
                {
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR3[VAR53 << 3] += (VAR17[VAR53] * VAR30 * VAR56[VAR29 - 1] + 0x20000) >> 18;
                }
                else
                {
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR3[VAR53] += (VAR17[VAR53 + 8] * VAR30 * VAR56[VAR29 - 1] + 0x20000) >> 18;
                }
            }
            else
            {
                if (VAR12)
                {
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR3[VAR53 << 3] += VAR17[VAR53];
                }
                else
                {
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR3[VAR53] += VAR17[VAR53 + 8];
                }
            }
        }
        for (VAR53 = 1; VAR53 < 8; VAR53++)
        {
            VAR18[VAR53] = VAR3[VAR53 << 3];
            VAR18[VAR53 + 8] = VAR3[VAR53];
        }
        for (VAR53 = 1; VAR53 < 64; VAR53++)
            if (VAR3[VAR53])
            {
                VAR3[VAR53] *= VAR28;
                if (!VAR2->VAR57)
                    VAR3[VAR53] += (VAR3[VAR53] < 0) ? -VAR6 : VAR6;
            }
        if (VAR26)
            VAR14 = 63;
    }
    else
    {
        int VAR53;
        memset(VAR18, 0, 16 * 2);
        if (VAR12)
        {
            if (VAR26)
            {
                memcpy(VAR18, VAR17, 8 * 2);
                if (VAR30 && VAR29 != VAR30)
                {
                    VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                    VAR30 = VAR30 * 2 + ((VAR30 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR18[VAR53] = (VAR18[VAR53] * VAR30 * VAR56[VAR29 - 1] + 0x20000) >> 18;
                }
            }
        }
        else
        {
            if (VAR26)
            {
                memcpy(VAR18 + 8, VAR17 + 8, 8 * 2);
                if (VAR30 && VAR29 != VAR30)
                {
                    VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                    VAR30 = VAR30 * 2 + ((VAR30 == VAR2->VAR55) ? VAR2->VAR44 : 0) - 1;
                    for (VAR53 = 1; VAR53 < 8; VAR53++)
                        VAR18[VAR53 + 8] = (VAR18[VAR53 + 8] * VAR30 * VAR56[VAR29 - 1] + 0x20000) >> 18;
                }
            }
        }
        if (VAR26)
        {
            if (VAR12)
            {
                for (VAR53 = 1; VAR53 < 8; VAR53++)
                {
                    VAR3[VAR53 << 3] = VAR18[VAR53] * VAR28;
                    if (!VAR2->VAR57 && VAR3[VAR53 << 3])
                        VAR3[VAR53 << 3] += (VAR3[VAR53 << 3] < 0) ? -VAR6 : VAR6;
                }
            }
            else
            {
                for (VAR53 = 1; VAR53 < 8; VAR53++)
                {
                    VAR3[VAR53] = VAR18[VAR53 + 8] * VAR28;
                    if (!VAR2->VAR57 && VAR3[VAR53])
                        VAR3[VAR53] += (VAR3[VAR53] < 0) ? -VAR6 : VAR6;
                }
            }
            VAR14 = 63;
        }
    }
    VAR10->VAR58[VAR4] = VAR14;
    return 0;
}