static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    int VAR16;
    VAR17 *VAR18 = VAR3;
    FUN2(VAR2, "", VAR2->VAR19, VAR9);
    FUN2(VAR2, "", VAR8[0], VAR8[1], VAR8[2], VAR8[3]);
    VAR15->VAR20 = VAR2->VAR20;
    VAR15->VAR21 = VAR2->VAR21;
    VAR12->VAR22 = 0;
VAR23:
    FUN3(&VAR15->VAR24, VAR8, VAR9 * 8);
    if (!VAR15->VAR25)
        if (FUN4(VAR15) < 0)
            return -1;
    VAR16 = FUN5(VAR12);
    if (VAR16 < 0)
    {
        FUN6(VAR15->VAR2, VAR26, "");
        return -1;
    }
    if (VAR15->VAR27 != VAR2->VAR28 || VAR15->VAR29 != VAR2->VAR30)
    {
        ParseContext VAR31 = VAR15->VAR32;
        VAR15->VAR32.VAR33 = 0;
        FUN7(VAR15);
        VAR15->VAR32 = VAR31;
    }
    if (!VAR15->VAR25)
    {
        VAR16 = FUN8(VAR2, VAR15->VAR27, VAR15->VAR29);
        if (VAR16 < 0)
            return VAR16;
        goto VAR23;
    }
    VAR15->VAR34.VAR35.VAR36 = VAR15->VAR36;
    VAR15->VAR34.VAR35.VAR37 = VAR15->VAR36 == VAR38;
    if ((VAR2->VAR39 >= VAR40 && VAR15->VAR36 == VAR41) || (VAR2->VAR39 >= VAR42 && VAR15->VAR36 != VAR38) || VAR2->VAR39 >= VAR43)
        return FUN9(VAR15, VAR9);
    if (FUN10(VAR15, VAR2) < 0)
        return -1;
    FUN11(VAR15);
    VAR15->VAR44 = 0;
    VAR15->VAR45 = 0;
    while (VAR12->VAR46 < (VAR15->VAR47 == 18 ? 12 : 5))
    {
        if (FUN12(VAR12) < 0)
            break;
        FUN13(VAR12);
    }
    FUN14(VAR15);
    assert(VAR15->VAR34.VAR35.VAR36 == VAR15->VAR48->VAR35.VAR36);
    assert(VAR15->VAR34.VAR35.VAR36 == VAR15->VAR36);
    if ((VAR16 = FUN15(VAR18, &VAR15->VAR48->VAR35)) < 0)
        return VAR16;
    FUN16(VAR15, VAR15->VAR48);
    *VAR4 = 1;
    return FUN9(VAR15, VAR9);
}