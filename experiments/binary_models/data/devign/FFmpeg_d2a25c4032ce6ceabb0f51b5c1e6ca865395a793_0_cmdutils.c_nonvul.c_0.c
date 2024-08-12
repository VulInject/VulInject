static int FUN1(VAR1 **VAR2, VAR3 *VAR4, VAR1 **VAR5)
{
    const VAR6 *VAR7 = FUN2(VAR4->VAR8);
    VAR1 *VAR9;
    int VAR10, VAR11;
    int VAR12;
    int VAR13, VAR14;
    int VAR15 = 32;
    int VAR16 = VAR4->VAR17, VAR18 = VAR4->VAR19;
    if (!VAR7)
        return FUN3(VAR20);
    VAR12 = VAR7->VAR21[0].VAR22 + 1;
    VAR9 = FUN4(sizeof(*VAR9));
    if (!VAR9)
        return FUN3(VAR23);
    if (!(VAR4->VAR24 & VAR25))
    {
        VAR16 += 2 * VAR15;
        VAR18 += 2 * VAR15;
    }
    FUN5(VAR4, &VAR16, &VAR18);
    if ((VAR11 = FUN6(VAR9->VAR26, VAR9->VAR27, VAR16, VAR18, VAR4->VAR8, 32)) < 0)
    {
        FUN7(&VAR9);
        return VAR11;
    }
    FUN8(VAR4->VAR8, &VAR13, &VAR14);
    for (VAR10 = 0; VAR10 < FUN9(VAR9->VAR28); VAR10++)
    {
        const int VAR29 = VAR10 == 0 ? 0 : VAR13;
        const int VAR30 = VAR10 == 0 ? 0 : VAR14;
        if (VAR4->VAR24 & VAR25)
            VAR9->VAR28[VAR10] = VAR9->VAR26[VAR10];
        else if (VAR9->VAR26[VAR10])
            VAR9->VAR28[VAR10] = VAR9->VAR26[VAR10] + FUN10((VAR9->VAR27[VAR10] * VAR15 >> VAR30) + (VAR12 * VAR15 >> VAR29), 32);
    }
    VAR9->VAR16 = VAR4->VAR17;
    VAR9->VAR18 = VAR4->VAR19;
    VAR9->VAR8 = VAR4->VAR8;
    VAR9->VAR2 = VAR2;
    *VAR5 = VAR9;
    return 0;
}