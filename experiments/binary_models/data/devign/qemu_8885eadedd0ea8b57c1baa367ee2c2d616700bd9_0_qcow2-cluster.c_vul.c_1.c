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
    VAR20 = FUN2(VAR2, VAR12, &VAR13);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    VAR10 = (VAR3 >> VAR8->VAR23) & (VAR8->VAR29 - 1);
    *VAR6 = FUN3(VAR13[VAR10]);
    VAR17 = FUN4(VAR8, VAR19 << 9);
    VAR20 = FUN5(*VAR6);
    switch (VAR20)
    {
    case VAR30:
        VAR15 = 1;
        *VAR6 &= VAR31;
        break;
    case VAR32:
        if (VAR8->VAR33 < 3)
        {
            return -VAR34;
        }
        VAR15 = FUN6(VAR17, VAR8->VAR35, &VAR13[VAR10], VAR36);
        *VAR6 = 0;
        break;
    case VAR25:
        VAR15 = FUN7(VAR17, &VAR13[VAR10]);
        *VAR6 = 0;
        break;
    case VAR37:
        VAR15 = FUN6(VAR17, VAR8->VAR35, &VAR13[VAR10], VAR36);
        *VAR6 &= VAR38;
        break;
    default:
        FUN8();
    }
    VAR18 = (VAR15 * VAR8->VAR21);
VAR26:
    if (VAR18 > VAR19)
        VAR18 = VAR19;
    *VAR4 = VAR18 - VAR16;
    return VAR20;