static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR10, VAR11;
    int VAR12, VAR13, VAR14 = VAR15;
    double VAR16[VAR17][VAR18];
    const double *VAR19 = VAR7->VAR16 == 16 ? VAR20[VAR7->VAR21] : VAR22[VAR7->VAR21];
    float VAR23[VAR24 + VAR15 + 12];
    float VAR25[VAR18 + VAR15];
    float *VAR26;
    memcpy(VAR25, VAR7->VAR27, VAR7->VAR16 * sizeof(*VAR25));
    memcpy(VAR23, VAR7->VAR28, VAR7->VAR29 * sizeof(*VAR23));
    if (VAR7->VAR30 > 0)
    {
        VAR10 = &VAR11;
        FUN2(VAR10, VAR7->VAR31, VAR7->VAR30);
        VAR7->VAR30 = 0;
    }
    if (!FUN3(VAR10))
    {
        FUN4(VAR2, "");
        return VAR32;
    }
    if (FUN3(VAR10))
    {
        if ((VAR14 = FUN5(VAR10, 12)) > VAR15)
        {
            FUN6(VAR2, VAR33, "", VAR15, VAR14);
            return VAR34;
        }
    }
    if (VAR7->VAR35)
    {
        double VAR36[VAR18], VAR37[VAR18 * 2], VAR38[VAR18 * 2];
        for (VAR12 = 0; VAR12 < VAR7->VAR16; VAR12++)
            VAR36[VAR12] = VAR7->VAR36[VAR12] - VAR19[VAR12];
        if (VAR7->VAR16 == 10)
        {
            FUN7(VAR10, VAR16[2], VAR36, VAR37, VAR38, VAR7->VAR39);
        }
        else
            FUN8(VAR10, VAR16[2], VAR36, VAR37, VAR38, VAR7->VAR39);
        for (VAR12 = 0; VAR12 < VAR7->VAR16; VAR12++)
        {
            VAR16[0][VAR12] = VAR19[VAR12] + (VAR37[VAR12] - VAR38[VAR12 * 2]);
            VAR16[1][VAR12] = VAR19[VAR12] + (VAR37[VAR7->VAR16 + VAR12] - VAR38[VAR12 * 2 + 1]);
            VAR16[2][VAR12] += VAR19[VAR12];
        }
        for (VAR12 = 0; VAR12 < 3; VAR12++)
            FUN9(VAR16[VAR12], VAR7->VAR16);
    }
    VAR4->VAR40 = VAR15;
    if ((VAR13 = FUN10(VAR2, VAR4, 0)) < 0)
        return VAR13;
    VAR4->VAR40 = VAR14;
    VAR26 = (float *)VAR4->VAR41[0];
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        if (!VAR7->VAR35)
        {
            int VAR42;
            if (VAR7->VAR16 == 10)
            {
                FUN11(VAR10, VAR16[VAR12]);
            }
            else
                FUN12(VAR10, VAR16[VAR12]);
            for (VAR42 = 0; VAR42 < VAR7->VAR16; VAR42++)
                VAR16[VAR12][VAR42] += VAR19[VAR42];
            FUN9(VAR16[VAR12], VAR7->VAR16);
        }
        if ((VAR13 = FUN13(VAR2, VAR10, VAR12, &VAR26[VAR12 * VAR43], VAR16[VAR12], VAR12 == 0 ? VAR7->VAR36 : VAR16[VAR12 - 1], &VAR23[VAR7->VAR29 + VAR12 * VAR43], &VAR25[VAR7->VAR16 + VAR12 * VAR43])))
        {
            *VAR5 = 0;
            return VAR13;
        }
    }
    if (FUN3(VAR10))
    {
        VAR13 = FUN5(VAR10, 4);
        FUN14(VAR10, 10 * (VAR13 + 1));
    }
    *VAR5 = 1;
    memcpy(VAR7->VAR36, VAR16[2], VAR7->VAR16 * sizeof(*VAR7->VAR36));
    memcpy(VAR7->VAR27, &VAR25[VAR15], VAR7->VAR16 * sizeof(*VAR25));
    memcpy(VAR7->VAR28, &VAR23[VAR15], VAR7->VAR29 * sizeof(*VAR23));
    if (VAR7->VAR44)
        memmove(VAR7->VAR45, &VAR7->VAR45[VAR15], VAR7->VAR29 * sizeof(*VAR7->VAR45));
    return 0;
}