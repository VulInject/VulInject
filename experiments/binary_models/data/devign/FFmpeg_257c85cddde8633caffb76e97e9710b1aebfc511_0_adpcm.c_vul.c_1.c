static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10 = 0;
    int VAR11 = VAR2->VAR12;
    int VAR13 = 0;
    int VAR14;
    *VAR6 = 0;
    switch (VAR2->VAR15->VAR16)
    {
    case VAR17:
        if (VAR5 < 76 * VAR11)
            VAR10 = 128;
        break;
    case VAR18:
        if (VAR5 < 34 * VAR11)
            VAR10 = 64;
        break;
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        VAR10 = VAR5 * 2 / VAR11;
        break;
    }
    if (VAR10)
        return VAR10;
    VAR14 = 0;
    switch (VAR2->VAR15->VAR16)
    {
    case VAR23:
    case VAR24:
        VAR14 = 4 * VAR11;
        break;
    case VAR25:
        VAR14 = 8;
        break;
    case VAR26:
        VAR14 = 4;
        break;
    }
    if (VAR14 > 0)
        return (VAR5 - VAR14) * 2 / VAR11;
    switch (VAR2->VAR15->VAR16)
    {
    case VAR27:
        VAR13 = 1;
        if (VAR5 < 4)
            *VAR6 = FUN2(VAR4);
        *VAR6 -= *VAR6 % 28;
        VAR10 = (VAR5 - 12) / 30 * 28;
        break;
    case VAR28:
        VAR13 = 1;
        if (VAR5 < 4)
            *VAR6 = FUN2(VAR4);
        VAR10 = (VAR5 - (4 + 8 * VAR11)) * 2 / VAR11;
        break;
    case VAR29:
        VAR10 = ((VAR5 - VAR11) / (2 * VAR11)) * 2 * VAR11;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
        VAR13 = 1;
        if (VAR5 < 4)
            switch (VAR2->VAR15->VAR16)
            {
            case VAR30:
                VAR14 = 4 + 9 * VAR11;
                *VAR6 = FUN2(VAR4);
                break;
            case VAR31:
                VAR14 = 4 + 5 * VAR11;
                *VAR6 = FUN2(VAR4);
                break;
            case VAR32:
                VAR14 = 4 + 5 * VAR11;
                *VAR6 = FUN3(VAR4);
                break;
            }
        *VAR6 -= *VAR6 % 28;
        VAR10 = (VAR5 - VAR14) * 2 / VAR11;
        VAR10 -= VAR10 % 28;
        break;
    case VAR33:
        if (VAR2->VAR34 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR34);
        VAR10 = ((VAR5 - 16) * 8 / 3) / VAR11;
        break;
    case VAR35:
        VAR10 = 1 + (VAR5 - 4 * VAR11) * 2 / VAR11;
        break;
    case VAR36:
        if (VAR2->VAR34 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR34);
        VAR10 = 1 + (VAR5 - 4 * VAR11) / (4 * VAR11) * 8;
        break;
    case VAR37:
        if (VAR2->VAR34 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR34);
        VAR10 = 2 + (VAR5 - 7 * VAR11) * 2 / VAR11;
        break;
    case VAR38:
    case VAR39:
    case VAR40:
    {
        int VAR41;
        switch (VAR2->VAR15->VAR16)
        {
        case VAR38:
            VAR41 = 4;
            break;
        case VAR39:
            VAR41 = 3;
            break;
        case VAR40:
            VAR41 = 2;
            break;
        }
        if (!VAR8->VAR42[0].VAR43)
        {
            VAR10++;
            VAR5 -= VAR11;
        }
        VAR10 += VAR5 * VAR41 / VAR11;
        break;
    }
    case VAR44:
    {
        int VAR45 = VAR5 * 8 - 2;
        int VAR46 = (VAR4[0] >> 6) + 2;
        int VAR47 = 22 * VAR11;
        int VAR48 = VAR47 + VAR46 * VAR11 * 4095;
        int VAR49 = VAR45 / VAR48;
        int VAR50 = VAR45 - VAR49 * VAR48;
        VAR10 = VAR49 * 4096;
        if (VAR50 >= VAR47)
            VAR10 += 1 + (VAR50 - VAR47) / (VAR46 * VAR11);
        break;
    }
    case VAR51:
        VAR13 = 1;
        if (VAR5 < 8)
            *VAR6 = FUN3(&VAR4[4]);
        *VAR6 -= *VAR6 % 14;
        VAR10 = (VAR5 - 80) / (8 * VAR11) * 14;
        break;
    case VAR52:
        VAR10 = (VAR5 / 128) * 224 / VAR11;
        break;
    }
    if (VAR13 && (*VAR6 <= 0 || *VAR6 > VAR10))
        return VAR53;
    return VAR10;