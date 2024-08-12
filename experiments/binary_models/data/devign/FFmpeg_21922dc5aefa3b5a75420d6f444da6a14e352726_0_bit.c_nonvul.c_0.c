static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    PutBitContext VAR7;
    uint16_t VAR8[8 * VAR9 + 2];
    int VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR8;
    int VAR14, VAR15, VAR16;
    if (FUN2(VAR6))
        return VAR17;
    VAR11 = FUN3(VAR6);
    VAR10 = FUN3(VAR6) / 8;
    if (VAR10 > VAR9)
        return FUN4(VAR18);
    VAR16 = FUN5(VAR6, (VAR19 *)VAR8, (8 * VAR10) * sizeof(VAR12));
    if (VAR16 < 0)
        return VAR16;
    if (VAR16 != 8 * VAR10 * sizeof(VAR12))
        return FUN4(VAR18);
    FUN6(VAR4, VAR10);
    FUN7(&VAR7, VAR4->VAR20, VAR10);
    for (VAR15 = 0; VAR15 < VAR10; VAR15++)
        for (VAR14 = 0; VAR14 < 8; VAR14++)
            FUN8(&VAR7, 1, FUN9(VAR13++) == VAR21 ? 1 : 0);
    FUN10(&VAR7);
    VAR4->VAR22 = 1;
    return 0;
}