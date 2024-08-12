static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    FUN2(VAR18, VAR19, [VAR20 / 2]);
    if (VAR11 < VAR20 * VAR2->VAR21)
    {
        FUN3(VAR2, VAR22, "");
        return VAR23;
    }
    VAR8->VAR24 = VAR25;
    if ((VAR13 = FUN4(VAR2, VAR8, 0)) < 0)
        return VAR13;
    for (VAR14 = 0; VAR14 < VAR2->VAR21; VAR14++)
    {
        VAR16->VAR26 = (float *)VAR8->VAR27[VAR14];
        VAR16->VAR28.FUN5(VAR19, (const VAR18 *)VAR10, VAR20 / 2);
        FUN6(&VAR16->VAR29, (const VAR9 *)VAR19, VAR20 * 8);
        VAR10 += VAR20;
        if ((VAR13 = FUN7(VAR2, VAR16, VAR14)) < 0)
            return VAR13;
    }
    if (VAR2->VAR21 == 2)
    {
        VAR16->VAR30.FUN8((float *)VAR8->VAR27[0], (float *)VAR8->VAR27[1], VAR25);
    }
    *VAR4 = 1;
    return VAR20 * VAR2->VAR21;
}