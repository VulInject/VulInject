static int FUN1(VAR1 *VAR2, float *VAR3, int *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14 = 480;
    double VAR15[VAR16][VAR17];
    const double *VAR18 = VAR6->VAR15 == 16 ? VAR19[VAR6->VAR20] : VAR21[VAR6->VAR20];
    float VAR22[VAR23 + VAR24 + 12];
    float VAR25[VAR17 + VAR24];
    memcpy(VAR25, VAR6->VAR26, VAR6->VAR15 * sizeof(*VAR25));
    memcpy(VAR22, VAR6->VAR27, VAR6->VAR28 * sizeof(*VAR22));
    if (VAR6->VAR29 > 0)
    {
        VAR9 = &VAR10;
        FUN2(VAR9, VAR6->VAR30, VAR6->VAR29);
        VAR6->VAR29 = 0;
    }
    if ((VAR12 = FUN3(VAR9, VAR6)) == 1)
    {
        *VAR4 = 0;
        return 1;
    }
    if (!FUN4(VAR9))
    {
        FUN5(VAR2, "", 1);
        return -1;
    }
    if (FUN4(VAR9))
    {
        if ((VAR14 = FUN6(VAR9, 12)) > 480)
        {
            FUN7(VAR2, VAR31, "", VAR14);
            return -1;
        }
    }
    if (VAR6->VAR32)
    {
        double VAR33[VAR17], VAR34[VAR17 * 2], VAR35[VAR17 * 2];
        for (VAR11 = 0; VAR11 < VAR6->VAR15; VAR11++)
            VAR33[VAR11] = VAR6->VAR33[VAR11] - VAR18[VAR11];
        if (VAR6->VAR15 == 10)
        {
            FUN8(VAR9, VAR15[2], VAR33, VAR34, VAR35, VAR6->VAR36);
        }
        else
            FUN9(VAR9, VAR15[2], VAR33, VAR34, VAR35, VAR6->VAR36);
        for (VAR11 = 0; VAR11 < VAR6->VAR15; VAR11++)
        {
            VAR15[0][VAR11] = VAR18[VAR11] + (VAR34[VAR11] - VAR35[VAR11 * 2]);
            VAR15[1][VAR11] = VAR18[VAR11] + (VAR34[VAR6->VAR15 + VAR11] - VAR35[VAR11 * 2 + 1]);
            VAR15[2][VAR11] += VAR18[VAR11];
        }
        for (VAR11 = 0; VAR11 < 3; VAR11++)
            FUN10(VAR15[VAR11], VAR6->VAR15);
    }
    VAR13 = VAR14 * FUN11(VAR2->VAR37);
    if (*VAR4 < VAR13)
    {
        FUN7(VAR2, VAR31, "", *VAR4, VAR13);
        return -1;
    }
    for (VAR11 = 0; VAR11 < 3; VAR11++)
    {
        if (!VAR6->VAR32)
        {
            int VAR38;
            if (VAR6->VAR15 == 10)
            {
                FUN12(VAR9, VAR15[VAR11]);
            }
            else
                FUN13(VAR9, VAR15[VAR11]);
            for (VAR38 = 0; VAR38 < VAR6->VAR15; VAR38++)
                VAR15[VAR11][VAR38] += VAR18[VAR38];
            FUN10(VAR15[VAR11], VAR6->VAR15);
        }
        if ((VAR12 = FUN14(VAR2, VAR9, VAR11, &VAR3[VAR11 * VAR39], VAR15[VAR11], VAR11 == 0 ? VAR6->VAR33 : VAR15[VAR11 - 1], &VAR22[VAR6->VAR28 + VAR11 * VAR39], &VAR25[VAR6->VAR15 + VAR11 * VAR39])))
        {
            *VAR4 = 0;
            return VAR12;
        }
    }
    if (FUN4(VAR9))
    {
        VAR12 = FUN6(VAR9, 4);
        FUN15(VAR9, 10 * (VAR12 + 1));
    }
    *VAR4 = VAR13;
    memcpy(VAR6->VAR33, VAR15[2], VAR6->VAR15 * sizeof(*VAR6->VAR33));
    memcpy(VAR6->VAR26, &VAR25[VAR24], VAR6->VAR15 * sizeof(*VAR25));
    memcpy(VAR6->VAR27, &VAR22[VAR24], VAR6->VAR28 * sizeof(*VAR22));
    if (VAR6->VAR40)
        memmove(VAR6->VAR41, &VAR6->VAR41[VAR24], VAR6->VAR28 * sizeof(*VAR6->VAR41));
    return 0;
}