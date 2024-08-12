static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = &VAR12->VAR15;
    VAR7 *VAR17[VAR18];
    unsigned int VAR19;
    int VAR20, VAR21;
    int VAR22, VAR23, VAR24, VAR25;
    int VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR32;
    unsigned int VAR33 = 0;
    int VAR34 = 0;
    if (VAR6->VAR10 <= 1634)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR20 = FUN3(VAR8);
    VAR8 += 4;
    if (VAR20 == FUN4(""))
    {
        VAR21 = 0;
    }
    else if (VAR20 == FUN3(""))
    {
        VAR21 = 1;
    }
    else
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR19 = FUN5(&VAR8, VAR21);
    if (VAR6->VAR10 <= VAR19)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    VAR8 = VAR6->VAR3 + 0x304;
    VAR26 = FUN5(&VAR8, VAR21);
    VAR27 = FUN5(&VAR8, VAR21);
    if ((VAR25 = FUN6(VAR26, VAR27, 0, VAR2)) < 0)
        return VAR25;
    if (VAR26 != VAR2->VAR37 || VAR27 != VAR2->VAR38)
        FUN7(VAR2, VAR26, VAR27);
    VAR8 += 20;
    VAR29 = VAR8[0];
    VAR8 += 3;
    VAR2->VAR39 = VAR28 = VAR8[0];
    VAR8++;
    VAR31 = *((VAR40 *)VAR8);
    VAR8 += 824;
    VAR2->VAR41.VAR42 = FUN5(&VAR8, VAR21);
    VAR2->VAR41.VAR43 = FUN5(&VAR8, VAR21);
    if (VAR2->VAR41.VAR42 > 0 && VAR2->VAR41.VAR43 > 0)
        FUN8(&VAR2->VAR41.VAR42, &VAR2->VAR41.VAR43, VAR2->VAR41.VAR42, VAR2->VAR41.VAR43, 0x10000);
    else
        VAR2->VAR41 = (VAR44){0, 1};
    switch (VAR29)
    {
    case 51:
        VAR30 = 4;
        break;
    case 50:
        VAR30 = 3;
        break;
    default:
        FUN2(VAR2, VAR35, "", VAR29);
        return VAR36;
    }
    switch (VAR28)
    {
    case 8:
        if (VAR30 == 4)
        {
            VAR2->VAR45 = VAR46;
        }
        else
        {
            VAR2->VAR45 = VAR47;
        }
        VAR32 = VAR2->VAR37 * VAR2->VAR38 * VAR30;
        break;
    case 10:
        if (!VAR31)
        {
            FUN2(VAR2, VAR35, "");
            return -1;
        }
        VAR2->VAR45 = VAR48;
        VAR32 = (VAR2->VAR37 * VAR2->VAR38 * VAR30 + 2) / 3 * 4;
        break;
    case 12:
        if (!VAR31)
        {
            FUN2(VAR2, VAR35, "");
            return -1;
        }
        if (VAR21)
        {
            VAR2->VAR45 = VAR49;
        }
        else
        {
            VAR2->VAR45 = VAR50;
        }
        VAR32 = 2 * VAR2->VAR37 * VAR2->VAR38 * VAR30;
        break;
    case 16:
        if (VAR21)
        {
            VAR2->VAR45 = VAR30 == 4 ? VAR51 : VAR52;
        }
        else
        {
            VAR2->VAR45 = VAR30 == 4 ? VAR53 : VAR54;
        }
        VAR32 = 2 * VAR2->VAR37 * VAR2->VAR38 * VAR30;
        break;
    default:
        FUN2(VAR2, VAR35, "", VAR28);
        return VAR36;
    }
    if (VAR12->VAR15.VAR3[0])
        VAR2->FUN9(VAR2, &VAR12->VAR15);
    if ((VAR25 = FUN10(VAR2, VAR16)) < 0)
    {
        FUN2(VAR2, VAR35, "");
        return VAR25;
    }
    VAR8 = VAR6->VAR3 + VAR19;
    for (VAR24 = 0; VAR24 < VAR18; VAR24++)
        VAR17[VAR24] = VAR16->VAR3[VAR24];
    if (VAR32 + (VAR55)VAR19 > VAR6->VAR10)
    {
        FUN2(VAR2, VAR35, "");
        return VAR36;
    }
    switch (VAR28)
    {
    case 10:
        for (VAR22 = 0; VAR22 < VAR2->VAR38; VAR22++)
        {
            VAR40 *VAR56[3] = {(VAR40 *)VAR17[0], (VAR40 *)VAR17[1], (VAR40 *)VAR17[2]};
            for (VAR23 = 0; VAR23 < VAR2->VAR37; VAR23++)
            {
                *VAR56[2]++ = FUN11(&VAR8, &VAR33, &VAR34, VAR21);
                *VAR56[0]++ = FUN11(&VAR8, &VAR33, &VAR34, VAR21);
                *VAR56[1]++ = FUN11(&VAR8, &VAR33, &VAR34, VAR21);
                if (VAR30 == 4)
                    FUN11(&VAR8, &VAR33, &VAR34, VAR21);
            }
            for (VAR24 = 0; VAR24 < 3; VAR24++)
                VAR17[VAR24] += VAR16->VAR57[VAR24];
        }
        break;
    case 12:
        for (VAR22 = 0; VAR22 < VAR2->VAR38; VAR22++)
        {
            VAR40 *VAR56[3] = {(VAR40 *)VAR17[0], (VAR40 *)VAR17[1], (VAR40 *)VAR17[2]};
            for (VAR23 = 0; VAR23 < VAR2->VAR37; VAR23++)
            {
                *VAR56[2] = *((VAR40 *)VAR8);
                *VAR56[2] = (*VAR56[2] >> 4) | (*VAR56[2] << 12);
                VAR56[2]++;
                VAR8 += 2;
                *VAR56[0] = *((VAR40 *)VAR8);
                *VAR56[0] = (*VAR56[0] >> 4) | (*VAR56[0] << 12);
                VAR56[0]++;
                VAR8 += 2;
                *VAR56[1] = *((VAR40 *)VAR8);
                *VAR56[1] = (*VAR56[1] >> 4) | (*VAR56[1] << 12);
                VAR56[1]++;
                VAR8 += 2;
                if (VAR30 == 4)
                    VAR8 += 2;
            }
            for (VAR24 = 0; VAR24 < 3; VAR24++)
                VAR17[VAR24] += VAR16->VAR57[VAR24];
        }
        break;
    case 16:
        VAR30 *= 2;
    case 8:
        for (VAR22 = 0; VAR22 < VAR2->VAR38; VAR22++)
        {
            memcpy(VAR17[0], VAR8, VAR30 * VAR2->VAR37);
            VAR17[0] += VAR16->VAR57[0];
            VAR8 += VAR30 * VAR2->VAR37;
        }
        break;
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = 1;
    return VAR9;
}