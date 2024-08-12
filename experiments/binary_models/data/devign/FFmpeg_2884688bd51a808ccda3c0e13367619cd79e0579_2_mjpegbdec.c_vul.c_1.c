static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14, *VAR15;
    GetBitContext VAR16;
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22, VAR23;
    int VAR24;
    VAR15 = VAR8;
    VAR14 = VAR8 + VAR9;
    VAR12->VAR25 = 0;
VAR26:
    VAR12->VAR27 = 0;
    VAR12->VAR28 = 0;
    VAR12->VAR29 = 0;
    if (VAR14 - VAR15 >= 1 << 28)
        return VAR30;
    FUN2(&VAR16, VAR15, (VAR14 - VAR15) * 8);
    FUN3(&VAR16, 32);
    if (FUN4(&VAR16, 32) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR31, "");
        return VAR30;
    }
    VAR22 = FUN4(&VAR16, 32);
    FUN6(VAR2, VAR32, "", VAR22);
    FUN3(&VAR16, 32);
    VAR21 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR21);
    VAR17 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR17);
    if (VAR17)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR17, (VAR14 - (VAR15 + VAR17)) * 8);
        VAR12->VAR34 = VAR35;
        if (FUN8(VAR12) < 0 && (VAR2->VAR36 & VAR37))
            return VAR30;
    }
    VAR18 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR18);
    if (VAR18)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR18, (VAR14 - (VAR15 + VAR18)) * 8);
        VAR12->VAR34 = VAR38;
        FUN9(VAR12);
    }
    VAR19 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR19);
    if (VAR19)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR19, (VAR14 - (VAR15 + VAR19)) * 8);
        VAR12->VAR34 = VAR39;
        if (FUN10(VAR12) < 0)
            return -1;
    }
    VAR20 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR20);
    VAR23 = FUN7(VAR2, &VAR16, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR23);
    if (VAR20)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR20, 8 * FUN11(VAR22, VAR14 - VAR15 - VAR20));
        VAR12->VAR29 = (VAR23 - VAR20 - FUN12(&VAR12->VAR33, 16));
        VAR12->VAR34 = VAR40;
        if (FUN13(VAR12, NULL, NULL) < 0 && (VAR2->VAR36 & VAR37))
            return VAR30;
    }
    if (VAR12->VAR41)
    {
        VAR12->VAR42 ^= 1;
        if (VAR12->VAR42 != VAR12->VAR43 && VAR21)
        {
            VAR15 = VAR8 + VAR21;
            goto VAR26;
        }
    }
    if (!VAR12->VAR25)
    {
        FUN6(VAR2, VAR31, "");
        return VAR9;
    }
    if ((VAR24 = FUN14(VAR3, VAR12->VAR44)) < 0)
        return VAR24;
    *VAR4 = 1;
    if (!VAR12->VAR45 && VAR2->VAR46 & VAR47)
    {
        FUN6(VAR2, VAR32, "", FUN15(VAR12->VAR48[0], VAR12->VAR48[1], VAR12->VAR48[2]));
    }
    return VAR9;
}