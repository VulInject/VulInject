static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR5 *const VAR11 = VAR2->VAR12;
    int VAR13, VAR14;
    if (!VAR4->VAR15 && (VAR14 = FUN2(VAR4, VAR9->VAR16 * VAR9->VAR17 * VAR18 * 3 + VAR19)) < 0)
    {
        FUN3(VAR2, VAR20, "");
        return VAR14;
    }
    if (VAR2->VAR21 != VAR22)
    {
        FUN3(VAR2, VAR20, "");
        return -1;
    }
    if (!VAR9->VAR23->VAR15[0])
    {
        VAR14 = FUN4(VAR2, VAR9->VAR23, 0);
        if (VAR14 < 0)
            return VAR14;
    }
    if (!VAR9->VAR24->VAR15[0])
    {
        VAR14 = FUN4(VAR2, VAR9->VAR24, 0);
        if (VAR14 < 0)
            return VAR14;
    }
    if (!VAR9->VAR25)
    {
        VAR9->VAR25 = FUN5(VAR9->VAR23->VAR26[0] * 16 * 2);
        if (!VAR9->VAR25)
            return FUN6(VAR27);
    }
    FUN7(VAR5 *, VAR9->VAR23, VAR9->VAR24);
    FUN8(&VAR9->VAR28, VAR4->VAR15, VAR4->VAR29);
    VAR11->VAR30 = VAR2->VAR31 && VAR2->VAR32 % VAR2->VAR31 ? VAR33 : VAR34;
    VAR11->VAR35 = VAR11->VAR30 == VAR34;
    VAR11->VAR36 = VAR6->VAR36;
    FUN9(VAR9, VAR11->VAR30);
    for (VAR13 = 0; VAR13 < 3; VAR13++)
        if (FUN10(VAR9, VAR13, VAR6->VAR15[VAR13], VAR9->VAR24->VAR15[VAR13], VAR9->VAR23->VAR15[VAR13], VAR9->VAR37 / (VAR13 ? 4 : 1), VAR9->VAR38 / (VAR13 ? 4 : 1), VAR6->VAR26[VAR13], VAR9->VAR23->VAR26[VAR13]) < 0)
        {
            int VAR39;
            for (VAR39 = 0; VAR39 < VAR13; VAR39++)
            {
                FUN11(&VAR9->VAR40[VAR39]);
                FUN11(&VAR9->VAR41[VAR39]);
            }
            FUN11(&VAR9->VAR25);
            return -1;
        }
    while (FUN12(&VAR9->VAR28) & 31)
        FUN13(&VAR9->VAR28, 1, 0);
    FUN14(&VAR9->VAR28);
    VAR4->VAR29 = FUN12(&VAR9->VAR28) / 8;
    if (VAR11->VAR30 == VAR34)
        VAR4->VAR42 |= VAR43;
    *VAR7 = 1;
    return 0;
}