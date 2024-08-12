int FUN1(VAR1 *VAR2, uint64_t VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned int VAR10;
    uint64_t VAR11, VAR12, *VAR13;
    int VAR14, VAR15;
    unsigned int VAR16, VAR17;
    uint64_t VAR18, VAR19;
    int VAR20;
    VAR16 = (VAR3 >> 9) & (VAR8->VAR21 - 1);
    VAR19 = *VAR4 + VAR16;
    VAR14 = VAR8->VAR22 + VAR8->VAR23;
    VAR18 = (1ULL << VAR14) - (VAR3 & ((1ULL << VAR14) - 1));
    VAR18 = (VAR18 >> 9) + VAR16;
    if (VAR19 > VAR18)
    {
        VAR19 = VAR18;
    }
    *VAR6 = 0;
    VAR11 = VAR3 >> VAR14;
    if (VAR11 >= VAR8->VAR24)
    {
        VAR20 = VAR25;
        goto VAR26;
    }
    VAR12 = VAR8->VAR27[VAR11] & VAR28;
    if (!VAR12)
    {
        VAR20 = VAR25;
        goto VAR26;
    }
    if (FUN2(VAR8, VAR12))
    {
        FUN3(VAR2, true, -1, -1, "" VAR29 "" VAR29 "", VAR12, VAR11);
        return -VAR30;
    }
    VAR20 = FUN4(VAR2, VAR12, &VAR13);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    VAR10 = (VAR3 >> VAR8->VAR23) & (VAR8->VAR31 - 1);
    *VAR6 = FUN5(VAR13[VAR10]);
    VAR17 = FUN6(VAR8, VAR19 << 9);
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
                                                      "" VAR29 "",
                                    VAR12, VAR10);
            VAR20 = -VAR30;
            goto VAR36;
        }
        VAR15 = FUN8(VAR17, VAR8->VAR37, &VAR13[VAR10], VAR38);
        *VAR6 = 0;
        break;
    case VAR25:
        VAR15 = FUN9(VAR17, &VAR13[VAR10]);
        *VAR6 = 0;
        break;
    case VAR39:
        VAR15 = FUN8(VAR17, VAR8->VAR37, &VAR13[VAR10], VAR38);
        *VAR6 &= VAR40;
        if (FUN2(VAR8, *VAR6))
        {
            FUN3(VAR2, true, -1, -1, "" VAR29 "" VAR29 "", *VAR6, VAR12, VAR10);
            VAR20 = -VAR30;
            goto VAR36;
        }
        break;
    default:
        FUN10();
    }
    FUN11(VAR2, VAR8->VAR41, (void **)&VAR13);
    VAR18 = (VAR15 * VAR8->VAR21);
VAR26:
    if (VAR18 > VAR19)
        VAR18 = VAR19;
    *VAR4 = VAR18 - VAR16;
    return VAR20;
VAR36:
    FUN11(VAR2, VAR8->VAR41, (void **)&VAR13);
    return VAR20;
}