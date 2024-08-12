static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, int *VAR10)
{
    int VAR11, VAR12;
    if (FUN2(VAR4))
    {
        *VAR10 = 1;
        return 0;
    }
    memset(VAR9, 0, sizeof(*VAR9) * 64);
    VAR12 = FUN3(VAR4, 7);
    if (VAR12 > 64)
        return VAR13;
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
        VAR9[VAR14[VAR11]] = FUN4(VAR4) * VAR2->VAR15[VAR14[VAR11]];
    FUN5(VAR6, VAR7, VAR9);
    return 0;
}