static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    if (VAR9 < VAR2->VAR18)
        return VAR9;
    VAR15 = VAR12->VAR19 * VAR12->VAR20 * FUN2(VAR2->VAR21);
    if (*VAR4 < VAR15)
    {
        FUN3(VAR2, VAR22, "");
        return FUN4(VAR23);
    }
    VAR12->VAR24[0].VAR10 = VAR2->VAR18;
    for (VAR14 = 1; VAR14 < VAR12->VAR25; VAR14++)
    {
        VAR12->VAR24[VAR14].VAR10 = 2 * VAR8[VAR2->VAR18 - VAR12->VAR25 + VAR14];
        VAR12->VAR24[0].VAR10 -= VAR12->VAR24[VAR14].VAR10 + 1;
        if (VAR12->VAR24[0].VAR10 < 0)
        {
            FUN3(VAR2, VAR26, "");
            return VAR27;
        }
    }
    for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
    {
        VAR12->VAR24[VAR14].VAR28 = (VAR12->VAR24[VAR14].VAR10 * 8) >> VAR12->VAR24[VAR14].VAR29;
        VAR12->VAR24[VAR14].VAR30 = VAR17;
        FUN3(VAR2, VAR26, "", VAR14, VAR12->VAR24[VAR14].VAR10, VAR12->VAR24[VAR14].VAR31, VAR16, VAR2->VAR18);
        FUN5(VAR12, &VAR12->VAR24[VAR14], VAR8 + VAR16, VAR3);
        VAR16 += VAR12->VAR24[VAR14].VAR10;
        VAR17 += VAR12->VAR24[VAR14].VAR32;
        FUN3(VAR2, VAR26, "", VAR14, VAR12->VAR24[VAR14].VAR10 * 8, FUN6(&VAR12->VAR33));
    }
    *VAR4 = VAR15;
    if (VAR2->VAR34 < 2)
        *VAR4 = 0;
    return VAR2->VAR18;
}