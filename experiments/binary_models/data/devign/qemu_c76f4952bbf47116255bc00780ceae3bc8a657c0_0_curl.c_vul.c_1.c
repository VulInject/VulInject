static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12 = VAR3->VAR10;
    VAR13 *VAR14;
    size_t VAR15 = VAR4 * VAR16;
    size_t VAR17;
    VAR18 *VAR19;
    VAR14 = FUN2(&VAR20, VAR3, VAR9, VAR10);
    if (!VAR14)
        return NULL;
    VAR14->VAR6 = VAR6;
    switch (FUN3(VAR12, VAR15, VAR7 * VAR16, VAR14))
    {
    case VAR21:
        FUN4(VAR14);
    case VAR22:
        return &VAR14->VAR23;
    default:
        break;
    }
    VAR19 = FUN5(VAR12);
    if (!VAR19)
        return NULL;
    VAR14->VAR15 = 0;
    VAR14->VAR17 = (VAR7 * VAR16);
    VAR19->VAR24 = 0;
    if (VAR19->VAR25)
        FUN6(VAR19->VAR25);
    VAR19->VAR26 = VAR15;
    VAR19->VAR27 = VAR14->VAR17 + VAR28;
    VAR17 = FUN7(VAR15 + VAR19->VAR27, VAR12->VAR29) - 1;
    VAR19->VAR25 = FUN8(VAR19->VAR27);
    VAR19->VAR14[0] = VAR14;
    snprintf(VAR19->VAR30, 127, "", (long long)VAR15, (long long)VAR17);
    FUN9("", (VAR7 * VAR16), VAR15, VAR19->VAR30);
    FUN10(VAR19->VAR31, VAR32, VAR19->VAR30);
    FUN11(VAR12->VAR33, VAR19->VAR31);
    FUN12(VAR12);
    return &VAR14->VAR23;
}