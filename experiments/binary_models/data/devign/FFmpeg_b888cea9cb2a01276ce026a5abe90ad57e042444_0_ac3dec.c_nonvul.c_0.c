static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    const VAR7 *VAR18;
    const float *VAR19[VAR20];
    if (VAR9 >= 2 && FUN2(VAR8) == 0x770B)
    {
        int VAR21 = FUN3(VAR9, VAR22) >> 1;
        VAR12->VAR23.FUN4((VAR24 *)VAR12->VAR25, (const VAR24 *)VAR8, VAR21);
    }
    else
        memcpy(VAR12->VAR25, VAR8, FUN3(VAR9, VAR22));
    VAR8 = VAR12->VAR25;
    FUN5(&VAR12->VAR26, VAR8, VAR9 * 8);
    VAR16 = FUN6(VAR12);
    if (VAR16)
    {
        switch (VAR16)
        {
        case VAR27:
            FUN7(VAR2, VAR28, "");
            return -1;
        case VAR29:
            FUN7(VAR2, VAR28, "");
            break;
        case VAR30:
            FUN7(VAR2, VAR28, "");
            break;
        case VAR31:
            FUN7(VAR2, VAR28, "");
            break;
        case VAR32:
            if (VAR12->VAR33 == VAR34 || VAR12->VAR35)
            {
                FUN7(VAR2, VAR28, ""
                                            "");
                *VAR4 = 0;
                return VAR12->VAR36;
            }
            else
            {
                FUN7(VAR2, VAR28, "");
            }
            break;
        default:
            FUN7(VAR2, VAR28, "");
            break;
        }
    }
    else
    {
        if (VAR12->VAR36 > VAR9)
        {
            FUN7(VAR2, VAR28, "");
            VAR16 = VAR31;
        }
        else if (VAR2->VAR37 & (VAR38 | VAR39))
        {
            if (FUN8(FUN9(VAR40), 0, &VAR8[2], VAR12->VAR36 - 2))
            {
                FUN7(VAR2, VAR28, "");
                VAR16 = VAR41;
            }
        }
    }
    if (!VAR16)
    {
        VAR2->VAR42 = VAR12->VAR42;
        VAR2->VAR43 = VAR12->VAR43;
        VAR12->VAR44 = VAR12->VAR45;
        VAR12->VAR46 = VAR12->VAR47;
        if (VAR12->VAR48)
            VAR12->VAR46 |= VAR49;
        if (VAR2->VAR50 > 0 && VAR2->VAR50 <= 2 && VAR2->VAR50 < VAR12->VAR45)
        {
            VAR12->VAR44 = VAR2->VAR50;
            VAR12->VAR46 = VAR2->VAR50 == 1 ? VAR51 : VAR52;
            VAR12->VAR53 = VAR54[VAR12->VAR46];
        }
        VAR2->VAR45 = VAR12->VAR44;
        VAR2->VAR53 = VAR12->VAR53;
        VAR12->VAR55 = VAR56[VAR12->VAR57];
        VAR12->VAR58 = VAR56[VAR12->VAR59];
        VAR12->VAR60 = VAR61;
        VAR12->VAR62 = VAR61;
        if (VAR12->VAR45 != VAR12->VAR44 && !((VAR12->VAR46 & VAR49) && VAR12->VAR63 == VAR12->VAR44))
        {
            FUN10(VAR12);
        }
    }
    else if (!VAR12->VAR44)
    {
        VAR12->VAR44 = VAR2->VAR45;
        if (VAR12->VAR44 < VAR12->VAR45)
            VAR12->VAR46 = VAR12->VAR44 == 1 ? VAR51 : VAR52;
    }
    if (VAR2->VAR45 != VAR12->VAR44)
    {
        FUN7(VAR2, VAR28, "");
        return VAR64;
    }
    VAR2->VAR65 = VAR12->VAR66;
    if (VAR12->VAR66 == 0x7 && VAR12->VAR45 > 1)
        VAR2->VAR65 = VAR67;
    VAR2->VAR45 = VAR12->VAR44;
    VAR12->VAR68.VAR69 = VAR12->VAR70 * 256;
    if ((VAR17 = FUN11(VAR2, &VAR12->VAR68)) < 0)
    {
        FUN7(VAR2, VAR28, "");
        return VAR17;
    }
    VAR18 = VAR71[VAR12->VAR46 & ~VAR49][VAR12->VAR48];
    for (VAR15 = 0; VAR15 < VAR20; VAR15++)
    {
        VAR19[VAR15] = VAR12->VAR19[VAR15];
        VAR12->VAR72[VAR15] = VAR12->VAR19[VAR15];
    }
    for (VAR15 = 0; VAR15 < VAR12->VAR45; VAR15++)
    {
        if (VAR15 < VAR12->VAR44)
            VAR12->VAR72[VAR18[VAR15]] = (float *)VAR12->VAR68.VAR3[VAR15];
    }
    for (VAR14 = 0; VAR14 < VAR12->VAR70; VAR14++)
    {
        if (!VAR16 && FUN12(VAR12, VAR14))
        {
            FUN7(VAR2, VAR28, "");
            VAR16 = 1;
        }
        if (VAR16)
            for (VAR15 = 0; VAR15 < VAR12->VAR44; VAR15++)
                memcpy(((float *)VAR12->VAR68.VAR3[VAR15]) + VAR73 * VAR14, VAR19[VAR15], 1024);
        for (VAR15 = 0; VAR15 < VAR12->VAR44; VAR15++)
            VAR19[VAR15] = VAR12->VAR72[VAR18[VAR15]];
        for (VAR15 = 0; VAR15 < VAR12->VAR44; VAR15++)
        {
            if (!VAR15 || VAR18[VAR15])
                VAR12->VAR72[VAR18[VAR15]] += VAR73;
        }
    }
    VAR12->VAR68.VAR74 = VAR16 ? VAR75 : 0;
    for (VAR15 = 0; VAR15 < VAR12->VAR44; VAR15++)
        memcpy(VAR12->VAR19[VAR15], VAR19[VAR15], 1024);
    *VAR4 = 1;
    *(VAR76 *)VAR3 = VAR12->VAR68;
    return FUN3(VAR9, VAR12->VAR36);
}