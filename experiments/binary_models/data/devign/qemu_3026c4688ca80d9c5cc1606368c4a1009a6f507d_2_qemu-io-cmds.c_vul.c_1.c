FUN1(VAR1 *VAR2, VAR3 *VAR4, char **argv, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR5);
    size_t VAR9 = 0;
    void *VAR10 = NULL;
    void *VAR11;
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
    {
        char *VAR13 = argv[VAR12];
        int64_t VAR14;
        VAR14 = FUN3(VAR13);
        if (VAR14 < 0)
        {
            FUN4(VAR14, VAR13);
            goto VAR15;
        }
        if (VAR14 > VAR16)
        {
            FUN5("", VAR13, (unsigned long long)VAR16);
            goto VAR15;
        }
        VAR8[VAR12] = VAR14;
        VAR9 += VAR14;
    }
    FUN6(VAR4, VAR5);
    VAR10 = VAR11 = FUN7(VAR2, VAR9, VAR6);
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
    {
        FUN8(VAR4, VAR11, VAR8[VAR12]);
        VAR11 += VAR8[VAR12];
    }
VAR15:
    FUN9(VAR8);
    return VAR10;
}