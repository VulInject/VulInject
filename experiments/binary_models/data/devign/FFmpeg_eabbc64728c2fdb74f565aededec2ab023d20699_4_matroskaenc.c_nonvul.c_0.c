static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7, *VAR8 = VAR2->VAR8;
    ebml_master VAR9;
    int VAR10, VAR11, VAR12 = 0;
    VAR11 = FUN2(VAR4->VAR13, VAR14, FUN3(VAR8));
    if (VAR11 < 0)
        return VAR11;
    VAR11 = FUN4(VAR8, &VAR7, VAR4, &VAR9, VAR14, 0);
    if (VAR11 < 0)
        return VAR11;
    for (VAR10 = 0; VAR10 < VAR2->VAR15; VAR10++)
    {
        VAR16 *VAR17 = VAR2->VAR18[VAR10];
        VAR12 |= VAR17->VAR19 & VAR20;
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR15; VAR10++)
    {
        VAR11 = FUN5(VAR2, VAR4, VAR10, VAR7, VAR12);
        if (VAR11 < 0)
            return VAR11;
    }
    FUN6(VAR8, &VAR7, VAR4, VAR9);
    return 0;
}