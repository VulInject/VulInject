static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = (VAR14 *)&VAR12->VAR15;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22 = 0;
    unsigned char *VAR23;
    int VAR24, VAR25;
    VAR12->VAR26 = VAR12->VAR27 = VAR8;
    VAR12->VAR28 = VAR8 + VAR9;
    if (FUN2(VAR2, VAR12) < 0)
        return -1;
    if (VAR16->VAR3[0])
        VAR2->FUN3(VAR2, VAR16);
    VAR16->VAR29 = 0;
    if (VAR2->FUN4(VAR2, VAR16) < 0)
    {
        FUN5(VAR2, VAR30, "");
        return -1;
    }
    VAR16->VAR31 = VAR32;
    VAR16->VAR33 = 1;
    switch (VAR2->VAR34)
    {
    default:
        return -1;
    case VAR35:
        VAR19 = VAR2->VAR36 * 6;
        VAR24 = 3;
        VAR25 = 16;
        goto VAR37;
    case VAR38:
        VAR19 = VAR2->VAR36 * 3;
        VAR24 = 3;
        VAR25 = 8;
        goto VAR37;
    case VAR39:
        VAR19 = VAR2->VAR36;
        VAR24 = 1;
        VAR25 = 8;
        if (VAR12->VAR40 < 255)
            VAR22 = 1;
        goto VAR37;
    case VAR41:
    case VAR42:
        VAR19 = VAR2->VAR36 * 2;
        VAR24 = 1;
        VAR25 = 16;
        if (VAR12->VAR40 < 65535)
            VAR22 = 2;
        goto VAR37;
    case VAR43:
    case VAR44:
        VAR19 = (VAR2->VAR36 + 7) >> 3;
        VAR24 = 1;
        VAR25 = 1;
    VAR37:
        VAR23 = VAR16->VAR3[0];
        VAR20 = VAR16->VAR20[0];
        if (VAR12->VAR27 + VAR19 * VAR2->VAR45 > VAR12->VAR28)
            return -1;
        if (VAR12->VAR46 < 4)
        {
            for (VAR17 = 0; VAR17 < VAR2->VAR45; VAR17++)
            {
                PutBitContext VAR47;
                FUN6(&VAR47, VAR23, VAR20);
                for (VAR18 = 0; VAR18 < VAR2->VAR36 * VAR24; VAR18++)
                {
                    unsigned int VAR48 = 0;
                    int VAR49 = 0;
                    while (VAR12->VAR27 < VAR12->VAR28 && (*VAR12->VAR27 < '' || *VAR12->VAR27 > ''))
                        VAR12->VAR27++;
                    if (VAR12->VAR27 >= VAR12->VAR28)
                        return -1;
                    do
                    {
                        VAR49 = 10 * VAR49 + VAR48;
                        VAR48 = (*VAR12->VAR27++) - '';
                    } while (VAR48 <= 9);
                    FUN7(&VAR47, VAR25, (((1 << VAR25) - 1) * VAR49 + (VAR12->VAR40 >> 1)) / VAR12->VAR40);
                }
                FUN8(&VAR47);
                VAR23 += VAR20;
            }
        }
        else
        {
            for (VAR17 = 0; VAR17 < VAR2->VAR45; VAR17++)
            {
                if (!VAR22)
                    memcpy(VAR23, VAR12->VAR27, VAR19);
                else if (VAR22 == 1)
                {
                    unsigned int VAR18, VAR50 = (255 * 128 + VAR12->VAR40 / 2) / VAR12->VAR40;
                    for (VAR18 = 0; VAR18 < VAR19; VAR18++)
                        VAR23[VAR18] = (VAR12->VAR27[VAR18] * VAR50 + 64) >> 7;
                }
                else if (VAR22 == 2)
                {
                    unsigned int VAR18, VAR49, VAR50 = (65535 * 32768 + VAR12->VAR40 / 2) / VAR12->VAR40;
                    for (VAR18 = 0; VAR18 < VAR19 / 2; VAR18++)
                    {
                        VAR49 = FUN9(((VAR51 *)VAR12->VAR27)[VAR18]);
                        ((VAR51 *)VAR23)[VAR18] = (VAR49 * VAR50 + 16384) >> 15;
                    }
                }
                VAR12->VAR27 += VAR19;
                VAR23 += VAR20;
            }
        }
        break;
    case VAR52:
    {
        unsigned char *VAR53, *VAR54;
        VAR19 = VAR2->VAR36;
        VAR23 = VAR16->VAR3[0];
        VAR20 = VAR16->VAR20[0];
        if (VAR12->VAR27 + VAR19 * VAR2->VAR45 * 3 / 2 > VAR12->VAR28)
            return -1;
        for (VAR17 = 0; VAR17 < VAR2->VAR45; VAR17++)
        {
            memcpy(VAR23, VAR12->VAR27, VAR19);
            VAR12->VAR27 += VAR19;
            VAR23 += VAR20;
        }
        VAR53 = VAR16->VAR3[1];
        VAR54 = VAR16->VAR3[2];
        VAR19 >>= 1;
        VAR21 = VAR2->VAR45 >> 1;
        for (VAR17 = 0; VAR17 < VAR21; VAR17++)
        {
            memcpy(VAR53, VAR12->VAR27, VAR19);
            VAR12->VAR27 += VAR19;
            memcpy(VAR54, VAR12->VAR27, VAR19);
            VAR12->VAR27 += VAR19;
            VAR53 += VAR16->VAR20[1];
            VAR54 += VAR16->VAR20[2];
        }
    }
    break;
    case VAR55:
        VAR23 = VAR16->VAR3[0];
        VAR20 = VAR16->VAR20[0];
        if (VAR12->VAR27 + VAR2->VAR36 * VAR2->VAR45 * 4 > VAR12->VAR28)
            return -1;
        for (VAR17 = 0; VAR17 < VAR2->VAR45; VAR17++)
        {
            int VAR18, VAR56, VAR57, VAR58, VAR59;
            for (VAR18 = 0; VAR18 < VAR2->VAR36; VAR18++)
            {
                VAR56 = *VAR12->VAR27++;
                VAR57 = *VAR12->VAR27++;
                VAR58 = *VAR12->VAR27++;
                VAR59 = *VAR12->VAR27++;
                ((VAR60 *)VAR23)[VAR18] = (VAR59 << 24) | (VAR56 << 16) | (VAR57 << 8) | VAR58;
            }
            VAR23 += VAR20;
        }
        break;
    }
    *VAR15 = *(VAR14 *)&VAR12->VAR15;
    *VAR4 = sizeof(VAR61);
    return VAR12->VAR27 - VAR12->VAR26;
}