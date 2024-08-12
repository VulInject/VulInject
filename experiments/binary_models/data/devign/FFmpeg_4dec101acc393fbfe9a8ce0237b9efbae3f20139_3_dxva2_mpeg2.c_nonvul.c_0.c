static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    const struct VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    struct VAR11 *VAR12 = VAR7->VAR13->VAR14;
    const int VAR15 = VAR7->VAR16 != VAR17;
    const unsigned VAR18 = VAR7->VAR19 * (VAR7->VAR20 >> VAR15);
    void *VAR21;
    VAR22 *VAR23, *VAR24, *VAR25;
    unsigned VAR26;
    unsigned VAR27;
    unsigned VAR28;
    if (FUN3(VAR2))
    {
        VAR28 = VAR29;
        if (FUN4(FUN5(FUN6(VAR10)->VAR30, FUN6(VAR10)->VAR31, VAR28, &VAR26, &VAR21)))
            return -1;
    }
    if (VAR2->VAR32 == VAR33)
    {
        VAR28 = VAR34;
        if (FUN4(FUN7(FUN8(VAR10)->VAR31, VAR28, &VAR21, &VAR26)))
            return -1;
    }
    VAR23 = VAR21;
    VAR24 = VAR23;
    VAR25 = VAR23 + VAR26;
    for (VAR27 = 0; VAR27 < VAR12->VAR35; VAR27++)
    {
        VAR36 *VAR37 = &VAR12->VAR37[VAR27];
        unsigned VAR38 = VAR37->VAR39;
        unsigned VAR40 = VAR37->VAR41 / 8;
        if (VAR40 > VAR25 - VAR24)
        {
            FUN9(VAR2, VAR42, "");
            break;
        }
        VAR37->VAR39 = VAR24 - VAR23;
        if (VAR27 < VAR12->VAR35 - 1)
            VAR37->VAR43 = VAR37[1].VAR43 - VAR37[0].VAR43;
        else
            VAR37->VAR43 = VAR18 - VAR37[0].VAR43;
        memcpy(VAR24, &VAR12->VAR44[VAR38], VAR40);
        VAR24 += VAR40;
    }
    if (FUN3(VAR2))
        if (FUN4(FUN10(FUN6(VAR10)->VAR30, FUN6(VAR10)->VAR31, VAR28)))
            return -1;
    if (VAR2->VAR32 == VAR33)
        if (FUN4(FUN11(FUN8(VAR10)->VAR31, VAR28)))
            return -1;
    if (VAR27 < VAR12->VAR35)
        return -1;
    if (FUN3(VAR2))
    {
        VAR45 *VAR46 = VAR4;
        memset(VAR46, 0, sizeof(*VAR46));
        VAR46->VAR47 = VAR28;
        VAR46->VAR48 = VAR24 - VAR23;
        VAR46->VAR49 = VAR18;
        VAR28 = VAR50;
    }
    if (VAR2->VAR32 == VAR33)
    {
        VAR51 *VAR52 = VAR4;
        memset(VAR52, 0, sizeof(*VAR52));
        VAR52->VAR53 = VAR28;
        VAR52->VAR48 = VAR24 - VAR23;
        VAR52->VAR49 = VAR18;
        VAR28 = VAR54;
    }
    return FUN12(VAR2, VAR10, VAR5, VAR28, VAR12->VAR37, VAR12->VAR35 * sizeof(*VAR12->VAR37), VAR18);
}