static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    const int VAR11 = VAR9->VAR11;
    const int VAR12 = VAR4->VAR12;
    VAR3 *VAR13;
    int VAR14, VAR15;
    if (FUN2(VAR4))
    {
        VAR13 = VAR4;
    }
    else
    {
        VAR13 = FUN3(VAR9, VAR12);
        if (!VAR13)
            return FUN4(VAR16);
        FUN5(VAR13, VAR4);
    }
    for (VAR14 = 0; VAR14 < VAR11; VAR14++)
    {
        const double *VAR17 = (double *)VAR4->VAR18[VAR14];
        double *VAR19 = (double *)VAR13->VAR18[VAR14];
        VAR20 *VAR21 = &VAR6->VAR11[VAR14];
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            FUN6(VAR21, FUN7(VAR17[VAR15]));
            VAR19[VAR15] = FUN8(VAR17[VAR15] * FUN9(VAR6, VAR21->VAR22), -1, 1);
        }
    }
    if (VAR4 != VAR13)
        FUN10(&VAR4);
    return FUN11(VAR2->VAR23[0], VAR13);
}