static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR3 *VAR9 = FUN2(sizeof(*VAR9));
    int VAR10, VAR11;
    const int VAR12 = VAR13[VAR6->VAR14].VAR15[0].VAR16 + 1;
    int VAR17, VAR18;
    int VAR19 = 32;
    int VAR20 = VAR6->VAR21, VAR22 = VAR6->VAR23;
    if (!VAR9)
        return FUN3(VAR24);
    if (!(VAR6->VAR25 & VAR26))
    {
        VAR20 += 2 * VAR19;
        VAR22 += 2 * VAR19;
    }
    FUN4(VAR6, &VAR20, &VAR22);
    if ((VAR11 = FUN5(VAR9->VAR27, VAR9->VAR28, VAR20, VAR22, VAR6->VAR14, 32)) < 0)
    {
        FUN6(&VAR9);
        return VAR11;
    }
    memset(VAR9->VAR27[0], 128, VAR11);
    FUN7(VAR6->VAR14, &VAR17, &VAR18);
    for (VAR10 = 0; VAR10 < FUN8(VAR9->VAR29); VAR10++)
    {
        const int VAR30 = VAR10 == 0 ? 0 : VAR17;
        const int VAR31 = VAR10 == 0 ? 0 : VAR18;
        if (VAR6->VAR25 & VAR26)
            VAR9->VAR29[VAR10] = VAR9->VAR27[VAR10];
        else
            VAR9->VAR29[VAR10] = VAR9->VAR27[VAR10] + FUN9((VAR9->VAR28[VAR10] * VAR19 >> VAR31) + (VAR12 * VAR19 >> VAR30), 32);
    }
    VAR9->VAR20 = VAR6->VAR21;
    VAR9->VAR22 = VAR6->VAR23;
    VAR9->VAR14 = VAR6->VAR14;
    VAR9->VAR2 = VAR2;
    *VAR4 = VAR9;
    return 0;
}