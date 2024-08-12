static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR4->VAR9;
    const VAR10 *VAR11 = VAR4->VAR11;
    int VAR12 = VAR4->VAR2->VAR12;
    int VAR13;
    GetBitContext VAR14;
    int VAR15, VAR16, VAR17;
    FUN2(&VAR14, VAR6, VAR7 * 8);
    VAR9->VAR18 = FUN3(&VAR14, VAR19);
    if (VAR9->VAR18 > 8)
    {
        FUN4(VAR2, VAR20, "");
        return VAR21;
    }
    VAR9->VAR22 = VAR23[VAR4->VAR9.VAR18];
    VAR13 = VAR11->VAR24[VAR9->VAR22].VAR13;
    if (VAR9->VAR22 != VAR25)
        FUN3(&VAR14, 2);
    FUN5(VAR4, &VAR14, VAR9->VAR26, VAR9->VAR22);
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
            for (VAR17 = 0; VAR17 < VAR11->VAR24[VAR9->VAR22].VAR27; VAR17++)
                VAR9->VAR28[VAR15][VAR16][VAR17] = FUN3(&VAR14, VAR11->VAR24[VAR9->VAR22].VAR29);
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
            VAR9->VAR30[VAR15][VAR16] = FUN6(&VAR14);
    if (VAR9->VAR22 == VAR31)
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
            VAR9->VAR32[VAR15] = FUN3(&VAR14, VAR33);
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR9->VAR32[VAR15] = FUN3(&VAR14, VAR33);
            for (VAR16 = 0; VAR16 < VAR13; VAR16++)
                VAR9->VAR34[VAR15 * VAR13 + VAR16] = FUN3(&VAR14, VAR35);
        }
    }
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
    {
        VAR9->VAR36[VAR15] = FUN3(&VAR14, VAR11->VAR37);
        VAR9->VAR38[VAR15] = FUN3(&VAR14, VAR11->VAR39);
        for (VAR16 = 0; VAR16 < VAR11->VAR40; VAR16++)
            VAR9->VAR41[VAR15][VAR16] = FUN3(&VAR14, VAR11->VAR42);
    }
    if (VAR9->VAR22 == VAR31)
    {
        FUN5(VAR4, &VAR14, VAR9->VAR43, 3);
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR9->VAR44[VAR15] = FUN3(&VAR14, VAR11->VAR45);
            VAR9->VAR46[VAR15] = FUN3(&VAR14, VAR11->VAR47);
        }
    }
    return 0;
}