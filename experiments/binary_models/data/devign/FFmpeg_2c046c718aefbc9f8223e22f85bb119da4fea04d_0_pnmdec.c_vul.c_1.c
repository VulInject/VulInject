static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = VAR3;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21 = 0, VAR22 = 0;
    unsigned char *VAR23;
    int VAR24, VAR25, VAR26;
    unsigned int VAR27 = 0;
    VAR12->VAR28 = VAR12->VAR29 = (VAR7 *)VAR8;
    VAR12->VAR30 = (VAR7 *)VAR8 + VAR9;
    if ((VAR26 = FUN2(VAR2, VAR12)) < 0)
        return VAR26;
    if ((VAR26 = FUN3(VAR2, VAR15, 0)) < 0)
        return VAR26;
    VAR15->VAR31 = VAR32;
    VAR15->VAR33 = 1;
    switch (VAR2->VAR34)
    {
    default:
        return FUN4(VAR35);
    case VAR36:
        VAR18 = VAR2->VAR37 * 8;
        VAR24 = 4;
        VAR25 = 16;
        goto VAR38;
    case VAR39:
        VAR18 = VAR2->VAR37 * 6;
        VAR24 = 3;
        VAR25 = 16;
        goto VAR38;
    case VAR40:
        VAR18 = VAR2->VAR37 * 4;
        VAR24 = 4;
        VAR25 = 8;
        goto VAR38;
    case VAR41:
        VAR18 = VAR2->VAR37 * 3;
        VAR24 = 3;
        VAR25 = 8;
        goto VAR38;
    case VAR42:
        VAR18 = VAR2->VAR37;
        VAR24 = 1;
        VAR25 = 8;
        if (VAR12->VAR43 < 255)
        {
            VAR21 = 1;
            VAR27 = (2 << FUN5(VAR12->VAR43)) - 1;
        }
        goto VAR38;
    case VAR44:
        VAR18 = VAR2->VAR37 * 2;
        VAR24 = 2;
        VAR25 = 8;
        goto VAR38;
    case VAR45:
    case VAR46:
        VAR18 = VAR2->VAR37 * 2;
        VAR24 = 1;
        VAR25 = 16;
        if (VAR12->VAR43 < 65535)
        {
            VAR21 = 2;
            VAR27 = (2 << FUN5(VAR12->VAR43)) - 1;
        }
        goto VAR38;
    case VAR47:
    case VAR48:
        VAR18 = (VAR2->VAR37 + 7) >> 3;
        VAR24 = 1;
        VAR25 = 1;
        VAR22 = 1;
    VAR38:
        VAR23 = VAR15->VAR3[0];
        VAR19 = VAR15->VAR19[0];
        if (VAR12->VAR29 + VAR18 * VAR2->VAR49 > VAR12->VAR30)
            return VAR50;
        if (VAR12->VAR51 < 4 || (VAR22 && VAR12->VAR51 == 7))
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR49; VAR16++)
            {
                PutBitContext VAR52;
                FUN6(&VAR52, VAR23, VAR19);
                for (VAR17 = 0; VAR17 < VAR2->VAR37 * VAR24; VAR17++)
                {
                    unsigned int VAR53 = 0;
                    int VAR54 = 0;
                    if (VAR12->VAR51 < 4)
                        while (VAR12->VAR29 < VAR12->VAR30 && (*VAR12->VAR29 < '' || *VAR12->VAR29 > ''))
                            VAR12->VAR29++;
                    if (VAR12->VAR29 >= VAR12->VAR30)
                        return VAR50;
                    if (VAR22)
                    {
                        VAR54 = (*VAR12->VAR29++) & 1;
                    }
                    else
                    {
                        do
                        {
                            VAR54 = 10 * VAR54 + VAR53;
                            VAR53 = (*VAR12->VAR29++) - '';
                        } while (VAR53 <= 9);
                    }
                    FUN7(&VAR52, VAR25, (((1 << VAR25) - 1) * VAR54 + (VAR12->VAR43 >> 1)) / VAR12->VAR43);
                }
                FUN8(&VAR52);
                VAR23 += VAR19;
            }
        }
        else
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR49; VAR16++)
            {
                if (!VAR21)
                    memcpy(VAR23, VAR12->VAR29, VAR18);
                else if (VAR21 == 1)
                {
                    unsigned int VAR17, VAR55 = (255 * 128 + VAR12->VAR43 / 2) / VAR12->VAR43;
                    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                        VAR23[VAR17] = ((VAR12->VAR29[VAR17] & VAR27) * VAR55 + 64) >> 7;
                }
                else if (VAR21 == 2)
                {
                    unsigned int VAR17, VAR54, VAR55 = (65535 * 32768 + VAR12->VAR43 / 2) / VAR12->VAR43;
                    for (VAR17 = 0; VAR17 < VAR18 / 2; VAR17++)
                    {
                        VAR54 = FUN9(((VAR56 *)VAR12->VAR29)[VAR17]) & VAR27;
                        ((VAR56 *)VAR23)[VAR17] = (VAR54 * VAR55 + 16384) >> 15;
                    }
                }
                VAR12->VAR29 += VAR18;
                VAR23 += VAR19;
            }
        }
        break;
    case VAR57:
    case VAR58:
    case VAR59:
    {
        unsigned char *VAR60, *VAR61;
        VAR18 = VAR2->VAR37;
        VAR23 = VAR15->VAR3[0];
        VAR19 = VAR15->VAR19[0];
        if (VAR12->VAR43 >= 256)
            VAR18 *= 2;
        if (VAR12->VAR29 + VAR18 * VAR2->VAR49 * 3 / 2 > VAR12->VAR30)
            return VAR50;
        for (VAR16 = 0; VAR16 < VAR2->VAR49; VAR16++)
        {
            memcpy(VAR23, VAR12->VAR29, VAR18);
            VAR12->VAR29 += VAR18;
            VAR23 += VAR19;
        }
        VAR60 = VAR15->VAR3[1];
        VAR61 = VAR15->VAR3[2];
        VAR18 >>= 1;
        VAR20 = VAR2->VAR49 >> 1;
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
        {
            memcpy(VAR60, VAR12->VAR29, VAR18);
            VAR12->VAR29 += VAR18;
            memcpy(VAR61, VAR12->VAR29, VAR18);
            VAR12->VAR29 += VAR18;
            VAR60 += VAR15->VAR19[1];
            VAR61 += VAR15->VAR19[2];
        }
    }
    break;
    case VAR62:
    {
        VAR56 *VAR60, *VAR61;
        const int VAR55 = (65535 * 32768 + VAR12->VAR43 / 2) / VAR12->VAR43;
        unsigned int VAR17, VAR54;
        VAR18 = VAR2->VAR37 * 2;
        VAR23 = VAR15->VAR3[0];
        VAR19 = VAR15->VAR19[0];
        if (VAR12->VAR29 + VAR18 * VAR2->VAR49 * 3 / 2 > VAR12->VAR30)
            return VAR50;
        for (VAR16 = 0; VAR16 < VAR2->VAR49; VAR16++)
        {
            for (VAR17 = 0; VAR17 < VAR18 / 2; VAR17++)
            {
                VAR54 = FUN9(((VAR56 *)VAR12->VAR29)[VAR17]);
                ((VAR56 *)VAR23)[VAR17] = (VAR54 * VAR55 + 16384) >> 15;
            }
            VAR12->VAR29 += VAR18;
            VAR23 += VAR19;
        }
        VAR60 = (VAR56 *)VAR15->VAR3[1];
        VAR61 = (VAR56 *)VAR15->VAR3[2];
        VAR18 >>= 1;
        VAR20 = VAR2->VAR49 >> 1;
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
        {
            for (VAR17 = 0; VAR17 < VAR18 / 2; VAR17++)
            {
                VAR54 = FUN9(((VAR56 *)VAR12->VAR29)[VAR17]);
                VAR60[VAR17] = (VAR54 * VAR55 + 16384) >> 15;
            }
            VAR12->VAR29 += VAR18;
            for (VAR17 = 0; VAR17 < VAR18 / 2; VAR17++)
            {
                VAR54 = FUN9(((VAR56 *)VAR12->VAR29)[VAR17]);
                VAR61[VAR17] = (VAR54 * VAR55 + 16384) >> 15;
            }
            VAR12->VAR29 += VAR18;
            VAR60 += VAR15->VAR19[1] / 2;
            VAR61 += VAR15->VAR19[2] / 2;
        }
    }
    break;
    }
    *VAR4 = 1;
    return VAR12->VAR29 - VAR12->VAR28;
}