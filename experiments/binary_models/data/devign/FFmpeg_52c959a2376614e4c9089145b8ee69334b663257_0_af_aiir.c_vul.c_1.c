static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int *VAR6, double **VAR7, double **VAR8)
{
    char *VAR9, *VAR10, *VAR11, *VAR12 = NULL, *VAR13 = NULL;
    int VAR14, VAR15;
    VAR9 = VAR11 = FUN2(VAR5);
    if (!VAR9)
        return FUN3(VAR16);
    for (VAR14 = 0; VAR14 < VAR3; VAR14++)
    {
        if (!(VAR10 = FUN4(VAR9, "", &VAR13)))
            VAR10 = VAR12;
        VAR9 = NULL;
        FUN5(VAR10, &VAR6[VAR14]);
        VAR8[VAR14] = FUN6(VAR6[VAR14], sizeof(VAR8[VAR14]));
        VAR7[VAR14] = FUN6(VAR6[VAR14], sizeof(VAR7[VAR14]));
        if (!VAR7[VAR14] || !VAR8[VAR14])
            return FUN3(VAR16);
        VAR15 = FUN7(VAR2, VAR10, VAR6[VAR14], VAR7[VAR14]);
        if (VAR15 < 0)
            return VAR15;
        VAR12 = VAR10;
    }
    FUN8(&VAR11);
    return 0;
}