static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14, *VAR15;
    VAR16 *VAR17 = VAR3;
    GetBitContext VAR18;
    uint32_t VAR19, VAR20, VAR21, VAR22, VAR23;
    uint32_t VAR24, VAR25;
    VAR15 = VAR8;
    VAR14 = VAR8 + VAR9;
VAR26:
    VAR12->VAR27 = 0;
    VAR12->VAR28 = 0;
    VAR12->VAR29 = 0;
    if (VAR14 - VAR15 >= 1 << 28)
        return VAR30;
    FUN2(&VAR18, VAR15, (VAR14 - VAR15) * 8);
    FUN3(&VAR18, 32);
    if (FUN4(&VAR18, 32) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR31, "");
        return VAR30;
    }
    VAR24 = FUN4(&VAR18, 32);
    FUN6(VAR2, VAR32, "", VAR24);
    FUN3(&VAR18, 32);
    VAR23 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR23);
    VAR19 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR19);
    if (VAR19)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR19, (VAR14 - (VAR15 + VAR19)) * 8);
        VAR12->VAR34 = VAR35;
        if (FUN8(VAR12) < 0 && (VAR2->VAR36 & VAR37))
            return VAR30;
    }
    VAR20 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR20);
    if (VAR20)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR20, (VAR14 - (VAR15 + VAR20)) * 8);
        VAR12->VAR34 = VAR38;
        FUN9(VAR12);
    }
    VAR21 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR21);
    if (VAR21)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR21, (VAR14 - (VAR15 + VAR21)) * 8);
        VAR12->VAR34 = VAR39;
        if (FUN10(VAR12) < 0)
            return -1;
    }
    VAR22 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR22);
    VAR25 = FUN7(VAR2, &VAR18, VAR14 - VAR15, "");
    FUN6(VAR2, VAR32, "", VAR25);
    if (VAR22)
    {
        FUN2(&VAR12->VAR33, VAR15 + VAR22, 8 * FUN11(VAR24, VAR14 - VAR15 - VAR22));
        VAR12->VAR29 = (VAR25 - VAR22 - FUN12(&VAR12->VAR33, 16));
        VAR12->VAR34 = VAR40;
        if (FUN13(VAR12, NULL, NULL) < 0 && (VAR2->VAR36 & VAR37))
            return VAR30;
    }
    if (VAR12->VAR41)
    {
        VAR12->VAR42 ^= 1;
        if (VAR12->VAR42 != VAR12->VAR43 && VAR23)
        {
            VAR15 = VAR8 + VAR23;
            goto VAR26;
        }
    }
    *VAR17 = *VAR12->VAR44;
    *VAR4 = sizeof(VAR16);
    if (!VAR12->VAR45)
    {
        VAR17->VAR46 = FUN14(VAR12->VAR47[0], VAR12->VAR47[1], VAR12->VAR47[2]);
        VAR17->VAR48 = 0;
        VAR17->VAR49 = VAR12->VAR49;
        memset(VAR17->VAR49, VAR17->VAR46, (VAR12->VAR50 + 15) / 16);
        if (VAR2->VAR51 & VAR52)
            FUN6(VAR2, VAR32, "", VAR17->VAR46);
        VAR17->VAR46 *= VAR53;
    }
    return VAR9;