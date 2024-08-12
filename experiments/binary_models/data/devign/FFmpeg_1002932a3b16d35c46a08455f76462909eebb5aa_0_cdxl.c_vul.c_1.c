static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *const VAR11 = VAR3;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17 = VAR6->VAR18;
    const VAR19 *VAR20 = VAR6->VAR3;
    if (VAR17 < 32)
        return VAR21;
    VAR15 = VAR20[1] & 7;
    VAR8->VAR22 = VAR20[1] & 0xE0;
    VAR13 = FUN2(&VAR20[14]);
    VAR14 = FUN2(&VAR20[16]);
    VAR8->VAR23 = VAR20[19];
    VAR8->VAR24 = FUN2(&VAR20[20]);
    VAR8->VAR25 = VAR20 + 32;
    VAR8->VAR26 = VAR8->VAR25 + VAR8->VAR24;
    VAR8->VAR27 = VAR17 - VAR8->VAR24 - 32;
    if (VAR8->VAR24 > 512)
        return VAR21;
    if (VAR17 < VAR8->VAR24 + 32)
        return VAR21;
    if (VAR8->VAR23 < 1)
        return VAR21;
    if (VAR8->VAR22 != VAR28 && VAR8->VAR22 != VAR29 && VAR8->VAR22 != VAR30)
    {
        FUN3(VAR2, "", VAR8->VAR22);
        return VAR31;
    }
    if ((VAR12 = FUN4(VAR2, VAR13, VAR14)) < 0)
        return VAR12;
    if (VAR8->VAR22 == VAR30)
        VAR16 = VAR2->VAR32;
    else
        VAR16 = FUN5(VAR8->VAR2->VAR32, 16);
    VAR8->VAR33 = VAR16 - VAR8->VAR2->VAR32;
    if (VAR8->VAR27 < VAR16 * VAR2->VAR34 * VAR8->VAR23 / 8)
        return VAR21;
    if (!VAR15 && VAR8->VAR24 && VAR8->VAR23 <= 8)
    {
        VAR2->VAR35 = VAR36;
    }
    else if (VAR15 == 1 && (VAR8->VAR23 == 6 || VAR8->VAR23 == 8))
    {
        if (VAR8->VAR24 != (1 << (VAR8->VAR23 - 1)))
            return VAR21;
        VAR2->VAR35 = VAR37;
    }
    else if (!VAR15 && VAR8->VAR23 == 24 && VAR8->VAR22 == VAR30 && !VAR8->VAR24)
    {
        VAR2->VAR35 = VAR38;
    }
    else
    {
        FUN3(VAR2, "", VAR15, VAR8->VAR23, VAR8->VAR22);
        return VAR31;
    }
    if ((VAR12 = FUN6(VAR2, VAR11, 0)) < 0)
        return VAR12;
    VAR11->VAR39 = VAR40;
    if (VAR15)
    {
        FUN7(&VAR8->VAR41, &VAR8->VAR42, VAR14 * VAR13 + VAR43);
        if (!VAR8->VAR41)
            return FUN8(VAR44);
        if (VAR8->VAR23 == 8)
            FUN9(VAR8, VAR11);
        else
            FUN10(VAR8, VAR11);
    }
    else if (VAR2->VAR35 == VAR36)
    {
        FUN11(VAR8, VAR11);
    }
    else
    {
        FUN12(VAR8, VAR11);
    }
    *VAR4 = 1;
    return VAR17;
}