static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    VAR12->VAR19.VAR20 = 1;
    VAR12->VAR19.VAR21 = VAR22 | VAR23 | VAR24;
    if (VAR2->FUN2(VAR2, &VAR12->VAR19))
    {
        FUN3(VAR2, VAR25, "");
        return -1;
    }
    FUN4(&VAR12->VAR26, &VAR12->VAR27, VAR9 + VAR28);
    if (!VAR12->VAR26)
        return FUN5(VAR29);
    VAR12->VAR30.FUN6((VAR31 *)VAR12->VAR26, (const VAR31 *)VAR8, VAR9 / 4);
    if (VAR9 & 3)
        memcpy(VAR12->VAR26 + (VAR9 & ~3), VAR8 + (VAR9 & ~3), VAR9 & 3);
    FUN7(&VAR14, VAR12->VAR26, VAR9 * 8);
    memset(VAR12->VAR32, 0, VAR2->VAR33 * VAR2->VAR34);
    for (VAR15 = !(VAR2->VAR35[1] & 2); VAR15 < 2; ++VAR15)
    {
        VAR16 = FUN8(&VAR14, 12);
        VAR17 = FUN8(&VAR14, 12);
        FUN9(VAR12, &VAR14, VAR16, 8, VAR15);
        FUN9(VAR12, &VAR14, VAR17, 4, VAR15);
    }
    VAR12->VAR36 = FUN8(&VAR14, 4);
    if (VAR12->VAR36 == 0)
        goto VAR37;
    if (VAR12->VAR32[0] == 0)
    {
        *(VAR38 *)VAR12->VAR19.VAR3[0] = FUN8(&VAR14, 15);
        VAR12->VAR32[0] = 1;
    }
    FUN10(VAR12, &VAR14);
    VAR18 = FUN8(&VAR14, 18);
    if (VAR2->VAR35[0] != 5)
        VAR18 += FUN8(&VAR14, 18);
    if (VAR18 == 0)
        goto VAR37;
    FUN11(&VAR12->VAR39, VAR12->VAR40, VAR12->VAR36, &VAR12->VAR41[0].VAR10, sizeof(VAR42), 1, &VAR12->VAR41[0].VAR43, sizeof(VAR42), 4, 0);
    FUN12(VAR12, &VAR14);
    FUN13(&VAR12->VAR39);
VAR37:
    *VAR4 = sizeof(VAR44);
    *(VAR44 *)VAR3 = VAR12->VAR19;
    return VAR9;
}