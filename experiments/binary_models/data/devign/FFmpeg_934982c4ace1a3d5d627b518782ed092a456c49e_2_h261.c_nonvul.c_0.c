static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    int VAR13;
    VAR14 *VAR15 = VAR3;
    FUN2("", VAR2->VAR16, VAR7);
    FUN2("", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
    VAR12->VAR17 = VAR2->VAR17;
    VAR12->VAR18 = VAR2->VAR18;
    VAR9->VAR19 = 0;
VAR20:
    FUN3(&VAR12->VAR21, VAR6, VAR7 * 8);
    if (!VAR12->VAR22)
    {
        if (FUN4(VAR12) < 0)
            return -1;
    }
    if (VAR12->VAR23 == NULL || VAR12->VAR23->VAR3[0])
    {
        int VAR24 = FUN5(VAR12, 0);
        VAR12->VAR23 = &VAR12->VAR25[VAR24];
    }
    VAR13 = FUN6(VAR9);
    if (VAR13 < 0)
    {
        FUN7(VAR12->VAR2, VAR26, "");
        return -1;
    }
    if (VAR12->VAR27 != VAR2->VAR28 || VAR12->VAR29 != VAR2->VAR30)
    {
        ParseContext VAR31 = VAR12->VAR32;
        VAR12->VAR32.VAR33 = 0;
        FUN8(VAR12);
        VAR12->VAR32 = VAR31;
    }
    if (!VAR12->VAR22)
    {
        FUN9(VAR2, VAR12->VAR27, VAR12->VAR29);
        goto VAR20;
    }
    VAR12->VAR34.VAR35 = VAR12->VAR35;
    VAR12->VAR34.VAR36 = VAR12->VAR35 == VAR37;
    if (VAR2->VAR38 >= 5)
        return FUN10(VAR12, VAR7);
    if (FUN11(VAR12, VAR2) < 0)
        return -1;
    FUN12(VAR12);
    VAR12->VAR39 = 0;
    VAR12->VAR40 = 0;
    while (VAR9->VAR41 < (VAR12->VAR42 == 18 ? 12 : 5))
    {
        if (FUN13(VAR9) < 0)
            break;
        FUN14(VAR9);
    }
    FUN15(VAR12);
    assert(VAR12->VAR34.VAR35 == VAR12->VAR23->VAR35);
    assert(VAR12->VAR34.VAR35 == VAR12->VAR35);
    *VAR15 = *(VAR14 *)VAR12->VAR23;
    FUN16(VAR12, VAR15);
    VAR2->VAR16 = VAR12->VAR43 - 1;
    *VAR4 = sizeof(VAR14);
    return FUN10(VAR12, VAR7);
}