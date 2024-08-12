static int FUN1(VAR1 *VAR2, int16_t VAR3[64], int VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10.VAR9;
    VAR11 *VAR10 = &VAR2->VAR10;
    int VAR12 = 0;
    int VAR13;
    VAR14 *VAR15;
    VAR14 *VAR16, *VAR17;
    int VAR18;
    int VAR19 = VAR10->VAR20 + VAR10->VAR21 * VAR10->VAR22;
    int VAR23 = VAR2->VAR23, VAR24 = VAR2->VAR24;
    int VAR25 = VAR10->VAR26;
    int VAR27;
    int VAR28, VAR29 = 0;
    VAR10->VAR30.FUN2(VAR3);
    VAR6 = (VAR6 < 1) ? 0 : ((VAR6 > 31) ? 31 : VAR6);
    VAR10->VAR31 = VAR10->VAR32[VAR6];
    VAR10->VAR33 = VAR10->VAR34[VAR6];
    if (VAR4 < 4)
    {
        VAR18 = FUN3(&VAR10->VAR9, VAR35[VAR10->VAR36].VAR37, VAR38, 3);
    }
    else
    {
        VAR18 = FUN3(&VAR10->VAR9, VAR39[VAR10->VAR36].VAR37, VAR38, 3);
    }
    if (VAR18 < 0)
    {
        FUN4(VAR10->VAR40, VAR41, "");
        return -1;
    }
    if (VAR18)
    {
        if (VAR18 == 119)
        {
            if (VAR6 == 1)
                VAR18 = FUN5(VAR9, 10);
            else if (VAR6 == 2)
                VAR18 = FUN5(VAR9, 9);
            else
                VAR18 = FUN5(VAR9, 8);
        }
        else
        {
            if (VAR6 == 1)
                VAR18 = (VAR18 << 2) + FUN5(VAR9, 2) - 3;
            else if (VAR6 == 2)
                VAR18 = (VAR18 << 1) + FUN6(VAR9) - 1;
        }
        if (FUN6(VAR9))
            VAR18 = -VAR18;
    }
    VAR18 += FUN7(&VAR2->VAR10, VAR2->VAR42, VAR6, VAR4, VAR23, VAR24, &VAR15, &VAR12);
    *VAR15 = VAR18;
    if (VAR4 < 4)
    {
        VAR3[0] = VAR18 * VAR10->VAR31;
    }
    else
    {
        VAR3[0] = VAR18 * VAR10->VAR33;
    }
    VAR13 = 1;
    if (!VAR23)
        VAR12 = 1;
    if (!VAR24)
        VAR12 = 0;
    if (!VAR23 && !VAR24)
        VAR25 = 0;
    VAR16 = VAR10->VAR16[0][0] + VAR10->VAR43[VAR4] * 16;
    VAR17 = VAR16;
    VAR27 = VAR6 * 2 + VAR2->VAR44;
    if (VAR12)
        VAR16 -= 16;
    else
        VAR16 -= 16 * VAR10->VAR45[VAR4];
    VAR28 = VAR10->VAR46.VAR47.VAR48[VAR19];
    if (VAR12 && VAR24 && VAR19)
        VAR29 = VAR10->VAR46.VAR47.VAR48[VAR19 - 1];
    if (!VAR12 && VAR23 && VAR19 >= VAR10->VAR22)
        VAR29 = VAR10->VAR46.VAR47.VAR48[VAR19 - VAR10->VAR22];
    if (VAR12 && VAR4 == 1)
        VAR29 = VAR28;
    if (!VAR12 && VAR4 == 2)
        VAR29 = VAR28;
    if (VAR4 == 3)
        VAR29 = VAR28;
    if (VAR5)
    {
        int VAR49 = 0, VAR50, VAR51;
        int VAR52;
        while (!VAR49)
        {
            FUN8(VAR2, &VAR49, &VAR50, &VAR51, VAR7);
            VAR13 += VAR50;
            if (VAR13 > 63)
                break;
            if (VAR2->VAR53 == VAR54)
                VAR3[VAR2->VAR55[0][VAR13++]] = VAR51;
            else
            {
                if (VAR25 && (VAR2->VAR53 == VAR56))
                {
                    if (!VAR12)
                        VAR3[VAR2->VAR55[2][VAR13++]] = VAR51;
                    else
                        VAR3[VAR2->VAR55[3][VAR13++]] = VAR51;
                }
                else
                {
                    VAR3[VAR2->VAR57[VAR13++]] = VAR51;
                }
            }
        }
        if (VAR25)
        {
            if (VAR29 && VAR28 != VAR29)
            {
                VAR28 = VAR28 * 2 + ((VAR28 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                if (VAR28 < 1)
                    return VAR59;
                if (VAR12)
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR60] += (VAR16[VAR52] * VAR29 * VAR61[VAR28 - 1] + 0x20000) >> 18;
                }
                else
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR62] += (VAR16[VAR52 + 8] * VAR29 * VAR61[VAR28 - 1] + 0x20000) >> 18;
                }
            }
            else
            {
                if (VAR12)
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR60] += VAR16[VAR52];
                }
                else
                {
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR3[VAR52 << VAR2->VAR62] += VAR16[VAR52 + 8];
                }
            }
        }
        for (VAR52 = 1; VAR52 < 8; VAR52++)
        {
            VAR17[VAR52] = VAR3[VAR52 << VAR2->VAR60];
            VAR17[VAR52 + 8] = VAR3[VAR52 << VAR2->VAR62];
        }
        for (VAR52 = 1; VAR52 < 64; VAR52++)
            if (VAR3[VAR52])
            {
                VAR3[VAR52] *= VAR27;
                if (!VAR2->VAR63)
                    VAR3[VAR52] += (VAR3[VAR52] < 0) ? -VAR6 : VAR6;
            }
        if (VAR25)
            VAR13 = 63;
    }
    else
    {
        int VAR52;
        memset(VAR17, 0, 16 * 2);
        if (VAR12)
        {
            if (VAR25)
            {
                memcpy(VAR17, VAR16, 8 * 2);
                if (VAR29 && VAR28 != VAR29)
                {
                    VAR28 = VAR28 * 2 + ((VAR28 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                    VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                    if (VAR28 < 1)
                        return VAR59;
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR17[VAR52] = (VAR17[VAR52] * VAR29 * VAR61[VAR28 - 1] + 0x20000) >> 18;
                }
            }
        }
        else
        {
            if (VAR25)
            {
                memcpy(VAR17 + 8, VAR16 + 8, 8 * 2);
                if (VAR29 && VAR28 != VAR29)
                {
                    VAR28 = VAR28 * 2 + ((VAR28 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                    VAR29 = VAR29 * 2 + ((VAR29 == VAR2->VAR58) ? VAR2->VAR44 : 0) - 1;
                    if (VAR28 < 1)
                        return VAR59;
                    for (VAR52 = 1; VAR52 < 8; VAR52++)
                        VAR17[VAR52 + 8] = (VAR17[VAR52 + 8] * VAR29 * VAR61[VAR28 - 1] + 0x20000) >> 18;
                }
            }
        }
        if (VAR25)
        {
            if (VAR12)
            {
                for (VAR52 = 1; VAR52 < 8; VAR52++)
                {
                    VAR3[VAR52 << VAR2->VAR60] = VAR17[VAR52] * VAR27;
                    if (!VAR2->VAR63 && VAR3[VAR52 << VAR2->VAR60])
                        VAR3[VAR52 << VAR2->VAR60] += (VAR3[VAR52 << VAR2->VAR60] < 0) ? -VAR6 : VAR6;
                }
            }
            else
            {
                for (VAR52 = 1; VAR52 < 8; VAR52++)
                {
                    VAR3[VAR52 << VAR2->VAR62] = VAR17[VAR52 + 8] * VAR27;
                    if (!VAR2->VAR63 && VAR3[VAR52 << VAR2->VAR62])
                        VAR3[VAR52 << VAR2->VAR62] += (VAR3[VAR52 << VAR2->VAR62] < 0) ? -VAR6 : VAR6;
                }
            }
            VAR13 = 63;
        }
    }
    VAR10->VAR64[VAR4] = VAR13;
    return 0;
}