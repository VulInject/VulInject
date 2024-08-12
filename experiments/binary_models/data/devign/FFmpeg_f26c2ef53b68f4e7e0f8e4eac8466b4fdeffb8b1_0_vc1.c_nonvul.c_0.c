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
    VAR6 = (VAR6 < 1) ? 0 : ((VAR6 > 31) ? 31 : VAR6);
    VAR10->VAR26 = VAR10->VAR27[VAR6];
    VAR10->VAR28 = VAR10->VAR29[VAR6];
    if (VAR4 < 4)
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR30[VAR10->VAR31].VAR32, VAR33, 3);
    }
    else
    {
        VAR19 = FUN2(&VAR10->VAR9, VAR34[VAR10->VAR31].VAR32, VAR33, 3);
    }
    if (VAR19 < 0)
    {
        FUN3(VAR10->VAR35, VAR36, "");
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
    VAR19 += FUN5(&VAR2->VAR10, VAR2->VAR37, VAR6, VAR4, VAR24, VAR25, &VAR16, &VAR12);
    *VAR16 = VAR19;
    if (VAR4 < 4)
    {
        VAR3[0] = VAR19 * VAR10->VAR26;
    }
    else
    {
        VAR3[0] = VAR19 * VAR10->VAR28;
    }
    VAR13 = 0;
    VAR14 = 0;
    if (!VAR5)
    {
        goto VAR38;
    }
    VAR14 = 1;
    {
        int VAR39 = 0, VAR40, VAR41;
        const VAR42 *VAR43;
        int VAR44;
        int VAR45;
        VAR44 = VAR6 * 2;
        VAR43 = VAR46;
        VAR17 = VAR10->VAR17[0][0] + VAR10->VAR47[VAR4] * 16;
        VAR18 = VAR17;
        if (VAR12)
            VAR17 -= 16;
        else
            VAR17 -= 16 * VAR10->VAR48[VAR4];
        while (!VAR39)
        {
            FUN6(VAR2, &VAR39, &VAR40, &VAR41, VAR7);
            VAR14 += VAR40;
            if (VAR14 > 63)
                break;
            VAR3[VAR43[VAR14++]] = VAR41;
        }
        if (VAR10->VAR49)
        {
            int VAR50, VAR51, VAR52;
            VAR50 = VAR20 - VAR12 - (1 - VAR12) * VAR10->VAR23;
            VAR51 = VAR10->VAR53.VAR54[VAR20];
            VAR52 = VAR10->VAR53.VAR54[VAR50];
            if (!VAR25)
            {
                memset(VAR17, 0, 8 * sizeof(VAR17[0]));
                VAR12 = 0;
            }
            if (!VAR24)
            {
                memset(VAR17 + 8, 0, 8 * sizeof(VAR17[0]));
                VAR12 = 1;
            }
            if (!VAR51 && VAR51 && VAR52 && VAR51 != VAR52)
            {
                VAR51 = VAR51 * 2 - 1;
                VAR52 = VAR52 * 2 - 1;
                if (VAR12)
                {
                    for (VAR45 = 1; VAR45 < 8; VAR45++)
                        VAR3[VAR45 << 3] += (VAR17[VAR45] * VAR52 * VAR55[VAR51 - 1] + 0x20000) >> 18;
                }
                else
                {
                    for (VAR45 = 1; VAR45 < 8; VAR45++)
                        VAR3[VAR45] += (VAR17[VAR45 + 8] * VAR52 * VAR55[VAR51 - 1] + 0x20000) >> 18;
                }
            }
            else
            {
                if (VAR12)
                {
                    for (VAR45 = 1; VAR45 < 8; VAR45++)
                        VAR3[VAR45 << 3] += VAR17[VAR45];
                }
                else
                {
                    for (VAR45 = 1; VAR45 < 8; VAR45++)
                        VAR3[VAR45] += VAR17[VAR45 + 8];
                }
            }
        }
        for (VAR45 = 1; VAR45 < 8; VAR45++)
        {
            VAR18[VAR45] = VAR3[VAR45 << 3];
            VAR18[VAR45 + 8] = VAR3[VAR45];
        }
        for (VAR45 = 1; VAR45 < 64; VAR45++)
            if (VAR3[VAR45])
            {
                VAR3[VAR45] *= VAR44;
                if (!VAR2->VAR56)
                    VAR3[VAR45] += (VAR3[VAR45] < 0) ? -VAR6 : VAR6;
            }
        if (VAR10->VAR49)
            VAR14 = 63;
    }
VAR38:
    if (!VAR5)
    {
        int VAR45, VAR44;
        VAR17 = VAR10->VAR17[0][0] + VAR10->VAR47[VAR4] * 16;
        VAR18 = VAR17;
        if (!VAR25)
        {
            memset(VAR17, 0, 8 * sizeof(VAR17[0]));
            VAR12 = 0;
        }
        if (!VAR24)
        {
            memset(VAR17 + 8, 0, 8 * sizeof(VAR17[0]));
            VAR12 = 1;
        }
        VAR44 = VAR6 * 2;
        memset(VAR18, 0, 16 * 2);
        if (VAR12)
        {
            VAR17 -= 16;
            if (VAR10->VAR49)
                memcpy(VAR18, VAR17, 8 * 2);
        }
        else
        {
            VAR17 -= 16 * VAR10->VAR48[VAR4];
            if (VAR10->VAR49)
                memcpy(VAR18 + 8, VAR17 + 8, 8 * 2);
        }
        if (VAR10->VAR49)
        {
            if (VAR12)
            {
                for (VAR45 = 1; VAR45 < 8; VAR45++)
                {
                    VAR3[VAR45 << 3] = VAR17[VAR45] * VAR44;
                    if (!VAR2->VAR56)
                        VAR3[VAR45 << 3] += (VAR3[VAR45 << 3] < 0) ? -VAR6 : VAR6;
                }
            }
            else
            {
                for (VAR45 = 1; VAR45 < 8; VAR45++)
                {
                    VAR3[VAR45] = VAR17[VAR45 + 8] * VAR44;
                    if (!VAR2->VAR56)
                        VAR3[VAR45] += (VAR3[VAR45] < 0) ? -VAR6 : VAR6;
                }
            }
            VAR14 = 63;
        }
    }
    VAR10->VAR57[VAR4] = VAR14;
    return 0;
}