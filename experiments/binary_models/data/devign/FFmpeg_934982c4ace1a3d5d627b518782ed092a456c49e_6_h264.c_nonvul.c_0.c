static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    int VAR15;
    VAR12->VAR16 = VAR2->VAR16;
    VAR12->VAR17 = VAR2->VAR17;
    if (VAR7 == 0)
    {
        return 0;
    }
    if (VAR12->VAR16 & VAR18)
    {
        int VAR19 = FUN2(VAR9, VAR6, VAR7);
        if (FUN3(&VAR12->VAR20, VAR19, &VAR6, &VAR7) < 0)
            return VAR7;
    }
    if (VAR9->VAR21 && !VAR9->VAR22)
    {
        int VAR23, VAR24, VAR25;
        unsigned char *VAR26 = VAR2->VAR27;
        if (VAR2->VAR28 < 7)
        {
            FUN4(VAR2, VAR29, "");
            return -1;
        }
        if (*VAR26 != 1)
        {
            FUN4(VAR2, VAR29, "", *VAR26);
            return -1;
        }
        VAR9->VAR30 = 2;
        VAR24 = *(VAR26 + 5) & 0x1f;
        VAR26 += 6;
        for (VAR23 = 0; VAR23 < VAR24; VAR23++)
        {
            VAR25 = FUN5(VAR26) + 2;
            if (FUN6(VAR9, VAR26, VAR25) != VAR25)
            {
                FUN4(VAR2, VAR29, "", VAR23);
                return -1;
            }
            VAR26 += VAR25;
        }
        VAR24 = *(VAR26++);
        for (VAR23 = 0; VAR23 < VAR24; VAR23++)
        {
            VAR25 = FUN5(VAR26) + 2;
            if (FUN6(VAR9, VAR26, VAR25) != VAR25)
            {
                FUN4(VAR2, VAR29, "", VAR23);
                return -1;
            }
            VAR26 += VAR25;
        }
        VAR9->VAR30 = ((*(((char *)(VAR2->VAR27)) + 4)) & 0x03) + 1;
        VAR9->VAR22 = 1;
    }
    if (!VAR9->VAR21 && VAR12->VAR2->VAR28 && VAR12->VAR31 == 0)
    {
        if (0 < FUN6(VAR9, VAR12->VAR2->VAR27, VAR12->VAR2->VAR28))
            return -1;
    }
    VAR15 = FUN6(VAR9, VAR6, VAR7);
    if (VAR15 < 0)
        return -1;
    if (!VAR12->VAR32)
    {
        FUN4(VAR9->VAR12.VAR2, VAR33, "");
        return -1;
    }
    {
        VAR34 *VAR35 = VAR12->VAR32;
        VAR34 *VAR36 = VAR12->VAR32;
        VAR34 *VAR37 = VAR9->VAR38[0];
        if (VAR12->VAR39 && (VAR36->VAR40 == VAR41 || (!VAR9->VAR42.VAR43 && VAR37 && VAR36->VAR44 - VAR37->VAR44 > 2)))
        {
            VAR12->VAR39 = 0;
            VAR12->VAR2->VAR45 = 1;
            if (VAR37 && VAR37->VAR44 > VAR36->VAR44)
                VAR36 = VAR37;
        }
        if (VAR12->VAR39 || !VAR37 || VAR36->VAR40 == VAR41)
            VAR35 = VAR36;
        else
            VAR35 = VAR37;
        if (VAR12->VAR39 || !VAR37 || VAR35 == VAR37)
        {
            if (VAR37 && VAR37->VAR46 == 1)
                VAR37->VAR46 = 0;
            VAR9->VAR38[0] = VAR36;
        }
        *VAR14 = *(VAR13 *)VAR35;
    }
    FUN7(VAR12, VAR14);
    assert(VAR14->VAR3[0]);
    VAR2->VAR47 = VAR12->VAR31 - 1;
    if (VAR12->VAR48 || VAR12->VAR39)
        *VAR4 = sizeof(VAR13);
    return FUN8(VAR12, VAR15, VAR7);
}