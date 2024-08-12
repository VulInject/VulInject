static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR13 *VAR14;
    VAR3 *VAR15;
    const VAR16 *VAR17;
    int VAR18, VAR19, VAR20;
    if (!VAR11->VAR21 || VAR6->VAR22)
        return FUN2(VAR8, VAR4);
    VAR14 = FUN3(VAR11->VAR23 * VAR11->VAR24);
    if (!VAR14)
    {
        VAR20 = FUN4(VAR25);
        goto VAR26;
    }
    VAR15 = FUN5(VAR4);
    if (!VAR15)
    {
        VAR20 = FUN4(VAR25);
        goto VAR26;
    }
    VAR17 = FUN6(VAR4, &VAR19, &VAR18);
    FUN7(VAR15, VAR14, VAR11->VAR24, VAR18);
    if (VAR17)
    {
        int VAR27, VAR28;
        for (VAR27 = 0; VAR27 < VAR11->VAR23; VAR27++)
            for (VAR28 = 0; VAR28 < VAR11->VAR24; VAR28++)
                VAR14->VAR29[VAR28 + VAR11->VAR24 * VAR27] = VAR11->VAR30[129 + ((VAR16)VAR17[VAR28 + VAR19 * VAR27])];
    }
    else
    {
        int VAR27, VAR28, VAR31 = VAR11->VAR30[0];
        for (VAR27 = 0; VAR27 < VAR11->VAR23; VAR27++)
            for (VAR28 = 0; VAR28 < VAR11->VAR24; VAR28++)
                VAR14->VAR29[VAR28 + VAR11->VAR24 * VAR27] = VAR31;
    }
    VAR20 = FUN2(VAR8, VAR15);
VAR26:
    FUN8(&VAR4);
    return VAR20;