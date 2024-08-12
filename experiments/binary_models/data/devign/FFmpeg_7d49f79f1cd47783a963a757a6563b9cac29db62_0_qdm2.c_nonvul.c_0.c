static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16, VAR17;
    if (!VAR8)
        return 0;
    if (VAR9 < VAR12->VAR18)
        return -1;
    VAR17 = 16 * VAR12->VAR19 * VAR12->VAR20 * FUN2(VAR2->VAR21);
    if (*VAR4 < VAR17)
    {
        FUN3(VAR2, VAR22, "");
        return FUN4(VAR23);
    }
    FUN3(VAR2, VAR24, "", VAR9, VAR8, VAR12->VAR18, VAR3, *VAR4);
    for (VAR16 = 0; VAR16 < 16; VAR16++)
    {
        if (FUN5(VAR12, VAR8, VAR15) < 0)
            return -1;
        VAR15 += VAR12->VAR19 * VAR12->VAR20;
    }
    *VAR4 = VAR17;
    return VAR12->VAR18;
}