static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    GetBitContext VAR18;
    float *VAR19 = VAR3;
    if (VAR9 < 212 * VAR12->VAR20)
    {
        FUN2(VAR12, VAR21, "");
        return -1;
    }
    VAR17 = VAR12->VAR20 * VAR22 * FUN3(VAR2->VAR23);
    if (*VAR4 < VAR17)
    {
        FUN2(VAR2, VAR21, "");
        return FUN4(VAR24);
    }
    for (VAR14 = 0; VAR14 < VAR12->VAR20; VAR14++)
    {
        VAR25 *VAR26 = &VAR12->VAR27[VAR14];
        FUN5(&VAR18, &VAR8[212 * VAR14], 212 * 8);
        VAR15 = FUN6(&VAR18, VAR26->VAR28);
        if (VAR15 < 0)
            return VAR15;
        VAR15 = FUN7(&VAR18, VAR26, VAR12->VAR29);
        if (VAR15 < 0)
            return VAR15;
        VAR15 = FUN8(VAR26, VAR12);
        if (VAR15 < 0)
            return VAR15;
        FUN9(VAR12, VAR26, VAR12->VAR30[VAR14]);
    }
    if (VAR12->VAR20 == 1)
    {
        memcpy(VAR19, VAR12->VAR30[0], VAR22 * 4);
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR22; VAR16++)
        {
            VAR19[VAR16 * 2] = VAR12->VAR30[0][VAR16];
            VAR19[VAR16 * 2 + 1] = VAR12->VAR30[1][VAR16];
        }
    }
    *VAR4 = VAR17;
    return VAR2->VAR31;
}