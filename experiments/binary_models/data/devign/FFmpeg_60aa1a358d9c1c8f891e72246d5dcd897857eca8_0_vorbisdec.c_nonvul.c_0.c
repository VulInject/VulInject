static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &(VAR12->VAR15);
    const float *VAR16[255];
    int VAR17, VAR18, VAR19;
    if (!VAR9)
        return 0;
    FUN2(NULL, "", VAR9);
    FUN3(VAR15, VAR8, VAR9 * 8);
    VAR18 = FUN4(VAR12);
    if (VAR18 <= 0)
    {
        *VAR4 = 0;
        return VAR9;
    }
    if (!VAR12->VAR20)
    {
        VAR12->VAR20 = 1;
        *VAR4 = 0;
        return VAR9;
    }
    FUN2(NULL, "", FUN5(VAR15) / 8, FUN5(VAR15) % 8, VAR18);
    VAR19 = VAR18 * VAR12->VAR21 * FUN6(VAR2->VAR22);
    if (*VAR4 < VAR19)
    {
        FUN7(VAR2, VAR23, "");
        return FUN8(VAR24);
    }
    if (VAR12->VAR21 > 8)
    {
        for (VAR17 = 0; VAR17 < VAR12->VAR21; VAR17++)
            VAR16[VAR17] = VAR12->VAR25 + VAR17 * VAR18;
    }
    else
    {
        for (VAR17 = 0; VAR17 < VAR12->VAR21; VAR17++)
            VAR16[VAR17] = VAR12->VAR25 + VAR18 * VAR26[VAR12->VAR21 - 1][VAR17];
    }
    if (VAR2->VAR22 == VAR27)
        VAR12->VAR28.FUN9(VAR3, VAR16, VAR18, VAR12->VAR21);
    else
        VAR12->VAR28.FUN10(VAR3, VAR16, VAR18, VAR12->VAR21);
    *VAR4 = VAR19;
    return VAR9;
}