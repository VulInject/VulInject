static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    GetByteContext VAR15;
    VAR7 *VAR16[3];
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    int VAR27;
    if (VAR9 < VAR28)
    {
        FUN2(VAR2, VAR29, "", VAR28, VAR9);
        return VAR30;
    }
    FUN3(&VAR15, VAR8, VAR9);
    VAR17 = FUN4(&VAR15);
    VAR18 = FUN4(&VAR15);
    FUN5(&VAR15, 2);
    VAR19 = FUN6(&VAR15);
    VAR20 = FUN6(&VAR15);
    if (VAR17 > VAR2->VAR17 || VAR18 != VAR2->VAR18)
    {
        FUN2(VAR2, VAR29, "", VAR17, VAR18);
        return VAR30;
    }
    if (VAR19 < 1 || VAR19 > 100)
    {
        FUN2(VAR2, VAR29, "", VAR19);
        return VAR30;
    }
    if ((VAR20 & ~3) || VAR20 == 3)
    {
        FUN2(VAR2, VAR29, "", VAR20);
        return VAR30;
    }
    if (VAR20 != VAR31 && !FUN7(&VAR15))
    {
        FUN2(VAR2, VAR29, "");
        return VAR30;
    }
    if ((VAR27 = FUN8(VAR2, VAR12->VAR32)) < 0)
        return VAR27;
    VAR12->VAR32->VAR33 = (VAR20 == VAR34);
    VAR12->VAR32->VAR35 = (VAR20 == VAR34) ? VAR36 : VAR37;
    if (VAR20 == VAR31)
    {
        *VAR4 = 1;
        if ((VAR27 = FUN9(VAR3, VAR12->VAR32)) < 0)
            return VAR27;
        return VAR9;
    }
    if (VAR12->VAR19 != VAR19)
    {
        VAR12->VAR19 = VAR19;
        for (VAR23 = 0; VAR23 < 2; VAR23++)
            FUN10(VAR12->VAR38[VAR23], VAR19, !VAR23);
    }
    if ((VAR27 = FUN11(&VAR14, VAR8 + VAR28, VAR9 - VAR28)) < 0)
        return VAR27;
    VAR24 = FUN12(VAR17, 16) >> 4;
    VAR25 = FUN12(VAR18, 16) >> 4;
    VAR16[0] = VAR12->VAR32->VAR3[0];
    VAR16[1] = VAR12->VAR32->VAR3[1];
    VAR16[2] = VAR12->VAR32->VAR3[2];
    memset(VAR12->VAR39, 0, sizeof(VAR12->VAR39));
    for (VAR22 = 0; VAR22 < VAR25; VAR22++)
    {
        memset(VAR12->VAR40, 0, sizeof(VAR12->VAR40));
        for (VAR21 = 0; VAR21 < VAR24; VAR21++)
        {
            VAR26 = FUN13(&VAR14);
            switch (VAR26)
            {
            case VAR41:
                if (FUN14(VAR12, &VAR14, VAR16, VAR21, VAR22) < 0)
                {
                    FUN2(VAR2, VAR29, "", VAR21, VAR22);
                    return VAR30;
                }
                break;
            case VAR42:
                if (FUN15(VAR12, &VAR14, VAR16, VAR21, VAR22) < 0)
                {
                    FUN2(VAR2, VAR29, "", VAR21, VAR22);
                    return VAR30;
                }
                break;
            case VAR43:
                if (VAR20 == VAR34)
                {
                    FUN2(VAR2, VAR29, "");
                    return VAR30;
                }
                break;
            }
            if (VAR26 != VAR41)
                FUN16(VAR12, VAR21);
        }
        VAR16[0] += VAR12->VAR32->VAR44[0] * 16;
        VAR16[1] += VAR12->VAR32->VAR44[1] * 16;
        VAR16[2] += VAR12->VAR32->VAR44[2] * 16;
    }
    if ((VAR27 = FUN9(VAR3, VAR12->VAR32)) < 0)
        return VAR27;
    *VAR4 = 1;
    return VAR9;
}