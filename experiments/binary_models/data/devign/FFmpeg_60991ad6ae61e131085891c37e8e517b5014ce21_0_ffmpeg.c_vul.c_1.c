static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7 = FUN2(sizeof(*VAR7));
    int VAR8, VAR9;
    const int VAR10 = VAR11[VAR2->VAR12].VAR13[0].VAR14 + 1;
    int VAR15, VAR16;
    int VAR17 = 32;
    int VAR18 = VAR2->VAR19, VAR20 = VAR2->VAR21;
    if (!VAR7)
        return FUN3(VAR22);
    if (!(VAR2->VAR23 & VAR24))
    {
        VAR18 += 2 * VAR17;
        VAR20 += 2 * VAR17;
    }
    FUN4(VAR2, &VAR18, &VAR20);
    if ((VAR9 = FUN5(VAR7->VAR25, VAR7->VAR26, VAR18, VAR20, VAR2->VAR12, 32)) < 0)
    {
        FUN6(&VAR7);
        return VAR9;
    }
    memset(VAR7->VAR25[0], 128, VAR9);
    FUN7(VAR2->VAR12, &VAR15, &VAR16);
    for (VAR8 = 0; VAR8 < FUN8(VAR7->VAR27); VAR8++)
    {
        const int VAR28 = VAR8 == 0 ? 0 : VAR15;
        const int VAR29 = VAR8 == 0 ? 0 : VAR16;
        if (VAR2->VAR23 & VAR24)
            VAR7->VAR27[VAR8] = VAR7->VAR25[VAR8];
        else
            VAR7->VAR27[VAR8] = VAR7->VAR25[VAR8] + FUN9((VAR7->VAR26[VAR8] * VAR17 >> VAR29) + (VAR10 * VAR17 >> VAR28), 32);
    }
    VAR7->VAR18 = VAR2->VAR19;
    VAR7->VAR20 = VAR2->VAR21;
    VAR7->VAR12 = VAR2->VAR12;
    VAR7->VAR4 = VAR4;
    *VAR6 = VAR7;
    return 0;
}