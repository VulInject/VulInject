static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = (VAR14 *)VAR3;
    int VAR16, VAR17, VAR18;
    const VAR7 *VAR19;
    const float *VAR20[VAR21];
    if (VAR12->VAR22)
    {
        memcpy(VAR12->VAR22, VAR8, FUN2(VAR9, VAR23));
        FUN3(&VAR12->VAR24, VAR12->VAR22, VAR9 * 8);
    }
    else
    {
        FUN3(&VAR12->VAR24, VAR8, VAR9 * 8);
    }
    *VAR4 = 0;
    VAR18 = FUN4(VAR12);
    if (VAR18)
    {
        switch (VAR18)
        {
        case VAR25:
            FUN5(VAR2, VAR26, "");
            return -1;
        case VAR27:
            FUN5(VAR2, VAR26, "");
            break;
        case VAR28:
            FUN5(VAR2, VAR26, "");
            break;
        case VAR29:
            FUN5(VAR2, VAR26, "");
            break;
        case VAR30:
            if (VAR12->VAR31 == VAR32 || VAR12->VAR33)
            {
                FUN5(VAR2, VAR26, "");
                return VAR12->VAR34;
            }
            else
            {
                FUN5(VAR2, VAR26, "");
            }
            break;
        default:
            FUN5(VAR2, VAR26, "");
            break;
        }
    }
    else
    {
        if (VAR12->VAR34 > VAR9)
        {
            FUN5(VAR2, VAR26, "");
            VAR18 = VAR29;
        }
        else if (VAR2->VAR35 >= VAR36)
        {
            if (FUN6(FUN7(VAR37), 0, &VAR8[2], VAR12->VAR34 - 2))
            {
                FUN5(VAR2, VAR26, "");
                VAR18 = VAR38;
            }
        }
    }
    if (!VAR18)
    {
        VAR2->VAR39 = VAR12->VAR39;
        VAR2->VAR40 = VAR12->VAR40;
        VAR12->VAR41 = VAR12->VAR42;
        VAR12->VAR43 = VAR12->VAR44;
        if (VAR12->VAR45)
            VAR12->VAR43 |= VAR46;
        if (VAR2->VAR47 > 0 && VAR2->VAR47 <= 2 && VAR2->VAR47 < VAR12->VAR42)
        {
            VAR12->VAR41 = VAR2->VAR47;
            VAR12->VAR43 = VAR2->VAR47 == 1 ? VAR48 : VAR49;
            VAR12->VAR50 = VAR51[VAR12->VAR43];
        }
        VAR2->VAR42 = VAR12->VAR41;
        VAR2->VAR50 = VAR12->VAR50;
        if (VAR12->VAR42 != VAR12->VAR41 && !((VAR12->VAR43 & VAR46) && VAR12->VAR52 == VAR12->VAR41))
        {
            FUN8(VAR12);
        }
    }
    else if (!VAR12->VAR41)
    {
        VAR12->VAR41 = VAR2->VAR42;
        if (VAR12->VAR41 < VAR12->VAR42)
            VAR12->VAR43 = VAR12->VAR41 == 1 ? VAR48 : VAR49;
    }
    VAR19 = VAR53[VAR12->VAR43 & ~VAR46][VAR12->VAR45];
    for (VAR17 = 0; VAR17 < VAR12->VAR41; VAR17++)
        VAR20[VAR17] = VAR12->VAR20[VAR19[VAR17]];
    for (VAR16 = 0; VAR16 < VAR12->VAR54; VAR16++)
    {
        if (!VAR18 && FUN9(VAR12, VAR16))
        {
            FUN5(VAR2, VAR26, "");
            VAR18 = 1;
        }
        VAR12->VAR55.FUN10(VAR15, VAR20, 256, VAR12->VAR41);
        VAR15 += 256 * VAR12->VAR41;
    }
    *VAR4 = VAR12->VAR54 * 256 * VAR2->VAR42 * sizeof(VAR14);
    return FUN2(VAR9, VAR12->VAR34);
}