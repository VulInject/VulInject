FUN1(VAR1 *VAR2, char **argv, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR3);
    size_t VAR7 = 0;
    void *VAR8 = NULL;
    void *VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        char *VAR11 = argv[VAR10];
        int64_t VAR12;
        VAR12 = FUN3(VAR11);
        if (VAR12 < 0)
        {
            FUN4("", VAR11);
            goto VAR13;
        }
        if (VAR12 > VAR14)
        {
            FUN4("", VAR11);
            goto VAR13;
        }
        if (VAR12 & 0x1ff)
        {
            FUN4("" VAR15 "", VAR12);
            goto VAR13;
        }
        VAR6[VAR10] = VAR12;
        VAR7 += VAR12;
    }
    FUN5(VAR2, VAR3);
    VAR8 = VAR9 = FUN6(VAR7, VAR4);
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        FUN7(VAR2, VAR9, VAR6[VAR10]);
        VAR9 += VAR6[VAR10];
    }
VAR13:
    FUN8(VAR6);
    return VAR8;
}