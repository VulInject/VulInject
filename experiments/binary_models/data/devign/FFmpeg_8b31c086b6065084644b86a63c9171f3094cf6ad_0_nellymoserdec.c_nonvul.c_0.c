static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    VAR18 = (VAR17 *)VAR3;
    if (VAR9 < VAR2->VAR19)
    {
        *VAR4 = 0;
        return VAR9;
    }
    if (VAR9 % 64)
    {
        FUN2(VAR2, VAR20, "", VAR9);
        *VAR4 = 0;
        return VAR9;
    }
    VAR16 = VAR21 * FUN3(VAR2->VAR22);
    VAR14 = FUN4(VAR9 / 64, *VAR4 / VAR16);
    if (VAR14 <= 0)
    {
        FUN2(VAR2, VAR20, "");
        return FUN5(VAR23);
    }
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        FUN6(VAR12, &VAR8[VAR15 * VAR24], VAR12->VAR25);
        VAR12->VAR26.FUN7(&VAR18[VAR15 * VAR21], VAR12->VAR25, VAR21);
    }
    *VAR4 = VAR14 * VAR16;
    return VAR9;
}