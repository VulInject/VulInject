int FUN1(VAR1 *VAR2, uint64_t VAR3, unsigned int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned int VAR10;
    uint64_t VAR11, VAR12, *VAR13;
    int VAR14, VAR15;
    unsigned int VAR16;
    uint64_t VAR17, VAR18, VAR19;
    int VAR20;
    VAR16 = FUN2(VAR8, VAR3);
    VAR18 = (VAR5)*VAR4 + VAR16;
    VAR14 = VAR8->VAR21 + VAR8->VAR22;
    VAR17 = (1ULL << VAR14) - (VAR3 & ((1ULL << VAR14) - 1)) + VAR16;
    if (VAR18 > VAR17)
    {
        VAR18 = VAR17;
    }
    *VAR6 = 0;
    VAR11 = VAR3 >> VAR14;
    if (VAR11 >= VAR8->VAR23)
    {
        VAR20 = VAR24;
        goto VAR25;
    }
    VAR12 = VAR8->VAR26[VAR11] & VAR27;
    if (!VAR12)
    {
        VAR20 = VAR24;
        goto VAR25;
    }
    if (FUN2(VAR8, VAR12))
    {
        FUN3(VAR2, true, -1, -1, "" VAR28 "" VAR28 "", VAR12, VAR11);
        return -VAR29;
    }
    VAR20 = FUN4(VAR2, VAR12, &VAR13);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    VAR10 = (VAR3 >> VAR8->VAR22) & (VAR8->VAR30 - 1);
    *VAR6 = FUN5(VAR13[VAR10]);
    VAR19 = FUN6(VAR8, VAR18);
    assert(VAR19 <= VAR31);
    VAR20 = FUN7(*VAR6);
    switch (VAR20)
    {
    case VAR32:
        VAR15 = 1;
        *VAR6 &= VAR33;
        break;
    case VAR34:
        if (VAR8->VAR35 < 3)
        {
            FUN3(VAR2, true, -1, -1, ""
                                                      "" VAR28 "",
                                    VAR12, VAR10);
            VAR20 = -VAR29;
            goto VAR36;
        }
        if (*VAR6 & VAR37)
        {
            VAR15 = FUN8(VAR19, VAR8->VAR38, &VAR13[VAR10], VAR39);
            *VAR6 &= VAR37;
            if (FUN2(VAR8, *VAR6))
            {
                FUN3(VAR2, true, -1, -1, "" VAR28 "" VAR28 "", *VAR6, VAR12, VAR10);
                VAR20 = -VAR29;
                goto VAR36;
            }
        }
        else
        {
            VAR15 = FUN9(VAR19, &VAR13[VAR10], VAR34);
            *VAR6 = 0;
        }
        break;
    case VAR24:
        VAR15 = FUN9(VAR19, &VAR13[VAR10], VAR24);
        *VAR6 = 0;
        break;
    case VAR40:
        VAR15 = FUN8(VAR19, VAR8->VAR38, &VAR13[VAR10], VAR39);
        *VAR6 &= VAR37;
        if (FUN2(VAR8, *VAR6))
        {
            FUN3(VAR2, true, -1, -1, "" VAR28 "" VAR28 "", *VAR6, VAR12, VAR10);
            VAR20 = -VAR29;
            goto VAR36;
        }
        break;
    default:
        FUN10();
    }
    FUN11(VAR2, VAR8->VAR41, (void **)&VAR13);
    VAR17 = (VAR42)VAR15 * VAR8->VAR38;
VAR25:
    if (VAR17 > VAR18)
    {
        VAR17 = VAR18;
    }
    assert(VAR17 - VAR16 <= VAR43);
    *VAR4 = VAR17 - VAR16;
    return VAR20;
VAR36:
    FUN11(VAR2, VAR8->VAR41, (void **)&VAR13);
    return VAR20;
}