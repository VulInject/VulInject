static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    int VAR12 = VAR2->VAR13;
    int VAR14 = 0;
    int VAR15;
    *VAR6 = 0;
    *VAR7 = 0;
    if (VAR12 <= 0)
        return 0;
    switch (VAR2->VAR16->VAR17)
    {
    case VAR18:
        if (VAR5 < 76 * VAR12)
            return 0;
        VAR11 = 128;
        break;
    case VAR19:
        if (VAR5 < 34 * VAR12)
            return 0;
        VAR11 = 64;
        break;
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
        VAR11 = VAR5 * 2 / VAR12;
        break;
    }
    if (VAR11)
        return VAR11;
    VAR15 = 0;
    switch (VAR2->VAR16->VAR17)
    {
    case VAR26:
    case VAR27:
        VAR15 = 4 * VAR12;
        break;
    case VAR28:
        VAR15 = 8;
        break;
    case VAR29:
        VAR15 = 4 * VAR12;
        break;
    }
    if (VAR15 > 0)
        return (VAR5 - VAR15) * 2 / VAR12;
    switch (VAR2->VAR16->VAR17)
    {
    case VAR30:
        VAR14 = 1;
        *VAR6 = FUN2(VAR4);
        *VAR6 -= *VAR6 % 28;
        VAR11 = (VAR5 - 12) / 30 * 28;
        break;
    case VAR31:
        VAR14 = 1;
        *VAR6 = FUN2(VAR4);
        VAR11 = (VAR5 - (4 + 8 * VAR12)) * 2 / VAR12;
        break;
    case VAR32:
        VAR11 = (VAR5 - VAR12) / VAR12 * 2;
        break;
    case VAR33:
    case VAR34:
    case VAR35:
        VAR14 = 1;
        switch (VAR2->VAR16->VAR17)
        {
        case VAR33:
            VAR15 = 4 + 9 * VAR12;
            *VAR6 = FUN2(VAR4);
            break;
        case VAR34:
            VAR15 = 4 + 5 * VAR12;
            *VAR6 = FUN2(VAR4);
            break;
        case VAR35:
            VAR15 = 4 + 5 * VAR12;
            *VAR6 = FUN3(VAR4);
            break;
        }
        *VAR6 -= *VAR6 % 28;
        VAR11 = (VAR5 - VAR15) * 2 / VAR12;
        VAR11 -= VAR11 % 28;
        *VAR7 = 1;
        break;
    case VAR36:
        if (VAR2->VAR37 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR37);
        VAR11 = ((VAR5 - 16) * 2 / 3 * 4) / VAR12;
        break;
    case VAR38:
        if (VAR2->VAR37 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR37);
        VAR11 = 1 + (VAR5 - 4 * VAR12) * 2 / VAR12;
        break;
    case VAR39:
        if (VAR2->VAR37 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR37);
        VAR11 = (VAR5 - 4 * VAR12) * 2 / VAR12;
        break;
    case VAR40:
    {
        int VAR41 = VAR42[VAR2->VAR43 - 2];
        int VAR44 = VAR45[VAR2->VAR43 - 2];
        if (VAR2->VAR37 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR37);
        VAR11 = 1 + (VAR5 - 4 * VAR12) / (VAR41 * VAR12) * VAR44;
        break;
    }
    case VAR46:
        if (VAR2->VAR37 > 0)
            VAR5 = FUN4(VAR5, VAR2->VAR37);
        VAR11 = 2 + (VAR5 - 7 * VAR12) * 2 / VAR12;
        break;
    case VAR47:
    case VAR48:
    case VAR49:
    {
        int VAR50;
        switch (VAR2->VAR16->VAR17)
        {
        case VAR47:
            VAR50 = 4;
            break;
        case VAR48:
            VAR50 = 3;
            break;
        case VAR49:
            VAR50 = 2;
            break;
        }
        if (!VAR9->VAR51[0].VAR52)
        {
            VAR11++;
            VAR5 -= VAR12;
        }
        VAR11 += VAR5 * VAR50 / VAR12;
        break;
    }
    case VAR53:
    {
        int VAR54 = VAR5 * 8 - 2;
        int VAR55 = (FUN5(VAR4) >> 6) + 2;
        int VAR56 = 22 * VAR12;
        int VAR57 = VAR56 + VAR55 * VAR12 * 4095;
        int VAR58 = VAR54 / VAR57;
        int VAR59 = VAR54 - VAR58 * VAR57;
        VAR11 = VAR58 * 4096;
        if (VAR59 >= VAR56)
            VAR11 += 1 + (VAR59 - VAR56) / (VAR55 * VAR12);
        break;
    }
    case VAR60:
        if (VAR2->VAR61)
        {
            VAR11 = VAR5 / (8 * VAR12) * 14;
            break;
        }
        VAR14 = 1;
        FUN6(VAR4, 4);
        *VAR6 = FUN3(VAR4);
        *VAR6 -= *VAR6 % 14;
        VAR11 = (VAR5 - (8 + 36 * VAR12)) / (8 * VAR12) * 14;
        break;
    case VAR62:
        VAR11 = VAR5 / (9 * VAR12) * 16;
        break;
    case VAR63:
        VAR11 = (VAR5 / 128) * 224 / VAR12;
        break;
    case VAR64:
        VAR11 = VAR5 / (16 * VAR12) * 28;
        break;
    }
    if (VAR14 && (*VAR6 <= 0 || *VAR6 > VAR11))
        return VAR65;
    return VAR11;
}