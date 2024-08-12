static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12 = (const VAR11 *)VAR6->VAR13[0];
    short VAR14[VAR15][VAR16];
    unsigned char VAR17[VAR15][VAR16];
    int VAR18, VAR19, VAR20;
    for (VAR19 = 0; VAR19 < VAR9->VAR21; VAR19++)
    {
        FUN2(VAR9, VAR19, VAR12 + VAR19, VAR9->VAR21);
    }
    for (VAR19 = 0; VAR19 < VAR9->VAR21; VAR19++)
    {
        FUN3(VAR9, VAR9->VAR22[VAR19], VAR9->VAR23[VAR19], VAR9->VAR24[VAR19], VAR9->VAR25);
    }
    for (VAR19 = 0; VAR19 < VAR9->VAR21; VAR19++)
    {
        FUN4(VAR9, VAR14[VAR19]);
    }
    FUN5(VAR9, VAR14, VAR17, &VAR18);
    if ((VAR20 = FUN6(VAR4, VAR26)))
    {
        FUN7(VAR2, VAR27, "");
        return VAR20;
    }
    FUN8(&VAR9->VAR28, VAR4->VAR13, VAR4->VAR29);
    FUN9(VAR9, VAR17, VAR18);
    if (VAR6->VAR30 != VAR31)
        VAR4->VAR30 = VAR6->VAR30 - FUN10(VAR2, VAR2->VAR32);
    VAR4->VAR29 = FUN11(&VAR9->VAR28) / 8;
    *VAR7 = 1;
    return 0;
}