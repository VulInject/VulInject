static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR11, VAR2, VAR2);
    struct VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    FUN3(VAR12->VAR18, VAR12->VAR19, VAR5, VAR6, VAR7);
    switch (VAR5)
    {
    case VAR20 | VAR21:
        return FUN4(VAR12, VAR6);
    case VAR20 | VAR22:
        return FUN5(VAR12, VAR6 & 0xff);
    case VAR23 | VAR24:
        return FUN6(VAR12, VAR7, VAR6);
    }
    if (VAR8 > sizeof(VAR2->VAR25))
    {
        fprintf(VAR26, "", VAR8, sizeof(VAR2->VAR25));
        return VAR27;
    }
    VAR16 = FUN7(VAR12);
    VAR16->VAR28 = VAR4;
    VAR14 = &VAR16->VAR14;
    VAR14->VAR29 = VAR30;
    VAR14->VAR31 = VAR4->VAR32->VAR33;
    VAR14->VAR34 = &VAR2->VAR35;
    VAR14->VAR36 = VAR8 + 8;
    VAR14->VAR37 = VAR12;
    FUN8(VAR12->VAR18, VAR12->VAR19, VAR16, VAR14->VAR36, VAR16->VAR38);
    VAR17 = FUN9(VAR12->VAR39, VAR40, VAR14);
    FUN10("", VAR14->VAR36, VAR16);
    if (VAR17 < 0)
    {
        FUN10("", VAR41);
        FUN11(VAR16);
        switch (VAR41)
        {
        case VAR42:
            return VAR43;
        case VAR44:
        default:
            return VAR27;
        }
    }
    return VAR45;
}