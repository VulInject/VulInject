static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR4->VAR9;
    const VAR10 *VAR11 = VAR4->VAR11;
    int VAR12 = VAR4->VAR2->VAR12;
    int VAR13;
    GetBitContext VAR14;
    int VAR15, VAR16, VAR17;
    FUN2(&VAR14, VAR6, VAR7 * 8);
    FUN3(&VAR14, FUN4(&VAR14, 8));
    VAR9->VAR18 = FUN4(&VAR14, VAR19);
    if (VAR9->VAR18 > 8)
    {
        FUN5(VAR2, VAR20, "");
        return VAR21;
    }
    VAR9->VAR22 = VAR23[VAR4->VAR9.VAR18];
    VAR13 = VAR11->VAR24[VAR9->VAR22].VAR13;
    FUN6(VAR4, &VAR14, VAR9->VAR25, VAR9->VAR22);
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
            for (VAR17 = 0; VAR17 < VAR11->VAR24[VAR9->VAR22].VAR26; VAR17++)
                VAR9->VAR27[VAR15][VAR16][VAR17] = FUN4(&VAR14, VAR11->VAR24[VAR9->VAR22].VAR28);
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
            VAR9->VAR29[VAR15][VAR16] = FUN7(&VAR14);
    if (VAR9->VAR22 == VAR30)
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
            VAR9->VAR31[VAR15] = FUN4(&VAR14, VAR32);
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR9->VAR31[VAR15] = FUN4(&VAR14, VAR32);
            for (VAR16 = 0; VAR16 < VAR13; VAR16++)
                VAR9->VAR33[VAR15 * VAR13 + VAR16] = FUN4(&VAR14, VAR34);
        }
    }
    for (VAR15 = 0; VAR15 < VAR12; VAR15++)
    {
        VAR9->VAR35[VAR15] = FUN4(&VAR14, VAR11->VAR36);
        VAR9->VAR37[VAR15] = FUN4(&VAR14, VAR11->VAR38);
        for (VAR16 = 0; VAR16 < VAR11->VAR39; VAR16++)
            VAR9->VAR40[VAR15][VAR16] = FUN4(&VAR14, VAR11->VAR41);
    }
    if (VAR9->VAR22 == VAR30)
    {
        FUN6(VAR4, &VAR14, VAR9->VAR42, 3);
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR9->VAR43[VAR15] = FUN4(&VAR14, VAR11->VAR44);
            VAR9->VAR45[VAR15] = FUN4(&VAR14, VAR11->VAR46);
        }
    }
    return 0;
}