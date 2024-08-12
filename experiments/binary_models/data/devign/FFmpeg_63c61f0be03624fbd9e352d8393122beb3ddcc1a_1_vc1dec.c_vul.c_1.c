static int FUN1(VAR1 *VAR2, int16_t VAR3[64], int VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10.VAR9;
    VAR11 *VAR10 = &VAR2->VAR10;
    int VAR12 = 0;
    int VAR13;
    VAR14 *VAR15;
    VAR14 *VAR16, *VAR17;
    int VAR18;
    int VAR19 = VAR2->VAR19, VAR20 = VAR2->VAR20;
    int VAR21 = VAR10->VAR22;
    int VAR23;
    int VAR24, VAR25 = 0;
    int VAR26 = VAR10->VAR27 + VAR10->VAR28 * VAR10->VAR29;
    if (VAR4 < 4)
    {
        VAR18 = FUN2(&VAR10->VAR9, VAR30[VAR10->VAR31].VAR32, VAR33, 3);
    }
    else
    {
        VAR18 = FUN2(&VAR10->VAR9, VAR34[VAR10->VAR31].VAR32, VAR33, 3);
    }
    if (VAR18 < 0)
    {
        FUN3(VAR10->VAR35, VAR36, "");
        return -1;
    }
    if (VAR18)
    {
        if (VAR18 == 119)
        {
            if (VAR7 == 1)
                VAR18 = FUN4(VAR9, 10);
            else if (VAR7 == 2)
                VAR18 = FUN4(VAR9, 9);
            else
                VAR18 = FUN4(VAR9, 8);
        }
        else
        {
            if (VAR7 == 1)
                VAR18 = (VAR18 << 2) + FUN4(VAR9, 2) - 3;
            else if (VAR7 == 2)
                VAR18 = (VAR18 << 1) + FUN5(VAR9) - 1;
        }
        if (FUN5(VAR9))
            VAR18 = -VAR18;
    }
    VAR18 += FUN6(&VAR2->VAR10, VAR2->VAR37, VAR7, VAR4, VAR2->VAR19, VAR2->VAR20, &VAR15, &VAR12);
    *VAR15 = VAR18;
    if (VAR4 < 4)
    {
        VAR3[0] = VAR18 * VAR10->VAR38;
    }
    else
    {
        VAR3[0] = VAR18 * VAR10->VAR39;
    }
    VAR13 = 1;
    if (!VAR19 && !VAR20)
        VAR21 = 0;
    VAR16 = VAR10->VAR16[0][0] + VAR10->VAR40[VAR4] * 16;
    VAR17 = VAR16;
    VAR23 = VAR7 * 2 + ((VAR7 == VAR2->VAR41) ? VAR2->VAR42 : 0);
    if (VAR12)
        VAR16 -= 16;
    else
        VAR16 -= 16 * VAR10->VAR43[VAR4];
    VAR24 = VAR10->VAR44.VAR45.VAR46[VAR26];
    if (VAR12 && VAR20 && VAR26)
        VAR25 = VAR10->VAR44.VAR45.VAR46[VAR26 - 1];
    if (!VAR12 && VAR19 && VAR26 >= VAR10->VAR29)
        VAR25 = VAR10->VAR44.VAR45.VAR46[VAR26 - VAR10->VAR29];
    if (VAR12 && VAR4 == 1)
        VAR25 = VAR24;
    if (!VAR12 && VAR4 == 2)
        VAR25 = VAR24;
    if (VAR4 == 3)
        VAR25 = VAR24;
    if (VAR5)
    {
        int VAR47 = 0, VAR48, VAR49;
        const VAR50 *VAR51;
        int VAR52;
        if (VAR2->VAR10.VAR22)
        {
            if (!VAR21 && VAR2->VAR53 == VAR54)
            {
                VAR51 = VAR2->VAR55;
            }
            else
            {
                if (!VAR12)
                    VAR51 = VAR2->VAR56[2];
                else
                    VAR51 = VAR2->VAR56[3];
            }
        }
        else
        {
            if (VAR2->VAR53 != VAR54)
                VAR51 = VAR2->VAR56[1];
            else
                VAR51 = VAR2->VAR55;
        }
        while (!VAR47)
        {
            FUN7(VAR2, &VAR47, &VAR48, &VAR49, VAR6);
            VAR13 += VAR48;
            if (VAR13 > 63)
                break;
            VAR3[VAR51[VAR13++]] = VAR49;
        }
        if (VAR21)
        {
            if (VAR25 && VAR24 != VAR25)
            {
                VAR24 = VAR24 * 2 + ((VAR24 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                if (VAR24 < 1)
                    return VAR57;
                if (VAR12)
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR58] += (VAR16[VAR52] * VAR25 * VAR59[VAR24 - 1] + 0x20000) >> 18;
                }
                else
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR60] += (VAR16[VAR52 + 8] * VAR25 * VAR59[VAR24 - 1] + 0x20000) >> 18;
                }
            }
            else
            {
                if (VAR12)
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR58] += VAR16[VAR52];
                }
                else
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR60] += VAR16[VAR52 + 8];
                }
            }
        }
        for (VAR52 = 1; VAR52 < 8; VAR52++)
        {
            VAR17[VAR52] = VAR3[VAR52 << VAR2->VAR58];
            VAR17[VAR52 + 8] = VAR3[VAR52 << VAR2->VAR60];
        }
        for (VAR52 = 1; VAR52 < 64; VAR52++)
            if (VAR3[VAR52])
            {
                VAR3[VAR52] *= VAR23;
                if (!VAR2->VAR61)
                    VAR3[VAR52] += (VAR3[VAR52] < 0) ? -VAR7 : VAR7;
            }
        if (VAR21)
            VAR13 = 63;
    }
    else
    {
        int VAR52;
        memset(VAR17, 0, 16 * 2);
        if (VAR12)
        {
            if (VAR21)
            {
                memcpy(VAR17, VAR16, 8 * 2);
                if (VAR25 && VAR24 != VAR25)
                {
                    VAR24 = VAR24 * 2 + ((VAR24 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                    VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                    if (VAR24 < 1)
                        return VAR57;
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR17[VAR52] = (VAR17[VAR52] * VAR25 * VAR59[VAR24 - 1] + 0x20000) >> 18;
                }
            }
        }
        else
        {
            if (VAR21)
            {
                memcpy(VAR17 + 8, VAR16 + 8, 8 * 2);
                if (VAR25 && VAR24 != VAR25)
                {
                    VAR24 = VAR24 * 2 + ((VAR24 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                    VAR25 = VAR25 * 2 + ((VAR25 == VAR2->VAR41) ? VAR2->VAR42 : 0) - 1;
                    if (VAR24 < 1)
                        return VAR57;
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR17[VAR52 + 8] = (VAR17[VAR52 + 8] * VAR25 * VAR59[VAR24 - 1] + 0x20000) >> 18;
                }
            }
        }
        if (VAR21)
        {
            if (VAR12)
            {
                for (VAR52 = 1; VAR52 < 8; VAR52++)
                {
                    VAR3[VAR52 << VAR2->VAR58] = VAR17[VAR52] * VAR23;
                    if (!VAR2->VAR61 && VAR3[VAR52 << VAR2->VAR58])
                        VAR3[VAR52 << VAR2->VAR58] += (VAR3[VAR52 << VAR2->VAR58] < 0) ? -VAR7 : VAR7;
                }
            }
            else
            {
                for (VAR52 = 1; VAR52 < 8; VAR52++)
                {
                    VAR3[VAR52 << VAR2->VAR60] = VAR17[VAR52 + 8] * VAR23;
                    if (!VAR2->VAR61 && VAR3[VAR52 << VAR2->VAR60])
                        VAR3[VAR52 << VAR2->VAR60] += (VAR3[VAR52 << VAR2->VAR60] < 0) ? -VAR7 : VAR7;
                }
            }
            VAR13 = 63;
        }
    }
    VAR10->VAR62[VAR4] = VAR13;
    return 0;
}