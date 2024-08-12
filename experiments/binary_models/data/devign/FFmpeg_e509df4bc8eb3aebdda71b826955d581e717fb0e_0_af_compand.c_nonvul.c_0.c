static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    const int VAR11 = VAR9->VAR11;
    const int VAR12 = VAR4->VAR12;
    VAR3 *VAR13;
    int VAR14, VAR15;
    int VAR16;
    if (FUN2(VAR4))
    {
        VAR13 = VAR4;
    }
    else
    {
        VAR13 = FUN3(VAR9, VAR12);
        if (!VAR13)
        {
            FUN4(&VAR4);
            return FUN5(VAR17);
        }
        VAR16 = FUN6(VAR13, VAR4);
        if (VAR16 < 0)
        {
            FUN4(&VAR13);
            FUN4(&VAR4);
            return VAR16;
        }
    }
    for (VAR14 = 0; VAR14 < VAR11; VAR14++)
    {
        const double *VAR18 = (double *)VAR4->VAR19[VAR14];
        double *VAR20 = (double *)VAR13->VAR19[VAR14];
        VAR21 *VAR22 = &VAR6->VAR11[VAR14];
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            FUN7(VAR22, FUN8(VAR18[VAR15]));
            VAR20[VAR15] = FUN9(VAR18[VAR15] * FUN10(VAR6, VAR22->VAR23), -1, 1);
        }
    }
    if (VAR4 != VAR13)
        FUN4(&VAR4);
    return FUN11(VAR2->VAR24[0], VAR13);
}