static int FUN1(int VAR1, const char *VAR2, const char *VAR3, VAR4 *VAR5)
{
    char *VAR6;
    int VAR7;
    double *VAR8;
    if (VAR1 >= VAR9 / sizeof(VAR10))
        return VAR11;
    if (FUN2(&VAR5->VAR12) < VAR1 * sizeof(VAR10))
        return VAR11;
    VAR8 = FUN3(VAR1 * sizeof(double));
    if (!VAR8)
        return FUN4(VAR13);
    for (VAR7 = 0; VAR7 < VAR1; VAR7++)
        VAR8[VAR7] = FUN5(&VAR5->VAR12, VAR5->VAR14);
    VAR6 = FUN6(VAR8, VAR1, VAR3);
    FUN7(&VAR8);
    if (!VAR6)
        return FUN4(VAR13);
    FUN8(&VAR5->VAR15.VAR16, VAR2, VAR6, VAR17);
    return 0;
}