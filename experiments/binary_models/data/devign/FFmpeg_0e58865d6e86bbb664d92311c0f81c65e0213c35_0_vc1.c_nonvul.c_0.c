static int FUN1(VAR1 *VAR2, DCTELEM VAR3[64], int VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14)
{
    VAR15 *VAR16 = &VAR2->VAR16;
    VAR17 *VAR18 = &VAR16->VAR18;
    int VAR19, VAR20;
    int VAR21 = 0;
    int VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    int VAR28 = VAR6 & 7;
    int VAR29 = 0;
    if (VAR6 == -1)
    {
        VAR28 = VAR30[VAR2->VAR31][FUN2(VAR18, VAR32[VAR2->VAR31].VAR33, VAR34, 1)];
    }
    if (VAR28 == VAR35)
    {
        VAR21 = ~(FUN2(VAR18, VAR36[VAR2->VAR31].VAR33, VAR37, 1) + 1);
    }
    if ((VAR28 != VAR38 && VAR28 != VAR35) && (VAR2->VAR39 || (VAR6 != -1 && (VAR6 & 8) && !VAR7)))
    {
        VAR21 = FUN3(VAR18);
        if (VAR21)
            VAR21 ^= 3;
        if (VAR28 == VAR40 || VAR28 == VAR41)
            VAR28 = VAR42;
        if (VAR28 == VAR43 || VAR28 == VAR44)
            VAR28 = VAR45;
    }
    VAR22 = 2 * VAR5 + ((VAR2->VAR46 == VAR5) ? VAR2->VAR47 : 0);
    if (VAR28 == VAR40 || VAR28 == VAR41)
    {
        VAR21 = 2 - (VAR28 == VAR40);
        VAR28 = VAR42;
    }
    if (VAR28 == VAR43 || VAR28 == VAR44)
    {
        VAR21 = 2 - (VAR28 == VAR44);
        VAR28 = VAR45;
    }
    switch (VAR28)
    {
    case VAR38:
        VAR29 = 0xF;
        VAR19 = 0;
        VAR25 = 0;
        while (!VAR25)
        {
            FUN4(VAR2, &VAR25, &VAR26, &VAR27, VAR2->VAR48);
            VAR19 += VAR26;
            if (VAR19 > 63)
                break;
            VAR24 = VAR49[0][VAR19++];
            VAR3[VAR24] = VAR27 * VAR22;
            if (!VAR2->VAR50)
                VAR3[VAR24] += (VAR3[VAR24] < 0) ? -VAR5 : VAR5;
        }
        if (!VAR11)
        {
            VAR16->VAR51.FUN5(VAR3);
            VAR16->VAR51.FUN6(VAR3, VAR9, VAR10);
            if (VAR12 && VAR13 & 0xC)
                VAR16->VAR51.FUN7(VAR9, 1, VAR10, 8, VAR5);
            if (VAR12 && VAR14 & 0xA)
                VAR16->VAR51.FUN7(VAR9, VAR10, 1, 8, VAR5);
        }
        break;
    case VAR35:
        VAR29 = ~VAR21 & 0xF;
        for (VAR20 = 0; VAR20 < 4; VAR20++)
        {
            VAR25 = VAR21 & (1 << (3 - VAR20));
            VAR19 = 0;
            VAR23 = (VAR20 & 1) * 4 + (VAR20 & 2) * 16;
            while (!VAR25)
            {
                FUN4(VAR2, &VAR25, &VAR26, &VAR27, VAR2->VAR48);
                VAR19 += VAR26;
                if (VAR19 > 15)
                    break;
                VAR24 = VAR52[VAR19++];
                VAR3[VAR24 + VAR23] = VAR27 * VAR22;
                if (!VAR2->VAR50)
                    VAR3[VAR24 + VAR23] += (VAR3[VAR24 + VAR23] < 0) ? -VAR5 : VAR5;
            }
            if (!(VAR21 & (1 << (3 - VAR20))) && !VAR11)
            {
                VAR16->VAR51.FUN8(VAR9 + (VAR20 & 1) * 4 + (VAR20 & 2) * 2 * VAR10, VAR10, VAR3 + VAR23);
                if (VAR12 && (VAR20 & 2 ? VAR29 & (1 << (VAR20 - 2)) : (VAR13 & (1 << (VAR20 + 2)))))
                    VAR16->VAR51.FUN7(VAR9 + (VAR20 & 1) * 4 + (VAR20 & 2) * 2 * VAR10, 1, VAR10, 4, VAR5);
                if (VAR12 && (VAR20 & 1 ? VAR29 & (1 << (VAR20 - 1)) : (VAR14 & (1 << (VAR20 + 1)))))
                    VAR16->VAR51.FUN7(VAR9 + (VAR20 & 1) * 4 + (VAR20 & 2) * 2 * VAR10, VAR10, 1, 4, VAR5);
            }
        }
        break;
    case VAR42:
        VAR29 = ~((VAR21 & 2) * 6 + (VAR21 & 1) * 3) & 0xF;
        for (VAR20 = 0; VAR20 < 2; VAR20++)
        {
            VAR25 = VAR21 & (1 << (1 - VAR20));
            VAR19 = 0;
            VAR23 = VAR20 * 32;
            while (!VAR25)
            {
                FUN4(VAR2, &VAR25, &VAR26, &VAR27, VAR2->VAR48);
                VAR19 += VAR26;
                if (VAR19 > 31)
                    break;
                VAR24 = VAR2->VAR53[VAR19++] + VAR23;
                VAR3[VAR24] = VAR27 * VAR22;
                if (!VAR2->VAR50)
                    VAR3[VAR24] += (VAR3[VAR24] < 0) ? -VAR5 : VAR5;
            }
            if (!(VAR21 & (1 << (1 - VAR20))) && !VAR11)
            {
                VAR16->VAR51.FUN9(VAR9 + VAR20 * 4 * VAR10, VAR10, VAR3 + VAR23);
                if (VAR12 && VAR20 ? VAR29 & 0x3 : (VAR13 & 0xC))
                    VAR16->VAR51.FUN7(VAR9 + VAR20 * 4 * VAR10, 1, VAR10, 8, VAR5);
                if (VAR12 && VAR14 & (2 << VAR20))
                    VAR16->VAR51.FUN7(VAR9 + VAR20 * 4 * VAR10, VAR10, 1, 4, VAR5);
            }
        }
        break;
    case VAR45:
        VAR29 = ~(VAR21 * 5) & 0xF;
        for (VAR20 = 0; VAR20 < 2; VAR20++)
        {
            VAR25 = VAR21 & (1 << (1 - VAR20));
            VAR19 = 0;
            VAR23 = VAR20 * 4;
            while (!VAR25)
            {
                FUN4(VAR2, &VAR25, &VAR26, &VAR27, VAR2->VAR48);
                VAR19 += VAR26;
                if (VAR19 > 31)
                    break;
                VAR24 = VAR2->VAR54[VAR19++] + VAR23;
                VAR3[VAR24] = VAR27 * VAR22;
                if (!VAR2->VAR50)
                    VAR3[VAR24] += (VAR3[VAR24] < 0) ? -VAR5 : VAR5;
            }
            if (!(VAR21 & (1 << (1 - VAR20))) && !VAR11)
            {
                VAR16->VAR51.FUN10(VAR9 + VAR20 * 4, VAR10, VAR3 + VAR23);
                if (VAR12 && VAR13 & (2 << VAR20))
                    VAR16->VAR51.FUN7(VAR9 + VAR20 * 4, 1, VAR10, 4, VAR5);
                if (VAR12 && VAR20 ? VAR29 & 0x5 : (VAR14 & 0xA))
                    VAR16->VAR51.FUN7(VAR9 + VAR20 * 4, VAR10, 1, 8, VAR5);
            }
        }
        break;
    }
    return VAR29;
}