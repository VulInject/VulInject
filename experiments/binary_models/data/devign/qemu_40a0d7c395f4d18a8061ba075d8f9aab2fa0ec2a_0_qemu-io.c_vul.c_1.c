FUN1(VAR1 *VAR2, char **argv, int VAR3, int VAR4)
{
    VAR5 *VAR6 = calloc(VAR3, sizeof(VAR5));
    size_t VAR7 = 0;
    void *VAR8, *VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        char *VAR11 = argv[VAR10];
        long long VAR12;
        VAR12 = FUN2(VAR11);
        if (VAR12 < 0)
        {
            FUN3("", VAR11);
            return NULL;
        }
        if (VAR12 > VAR13)
        {
            FUN3("", VAR11);
            return NULL;
        }
        if (VAR12 & 0x1ff)
        {
            FUN3("", VAR12);
            return NULL;
        }
        VAR6[VAR10] = VAR12;
        VAR7 += VAR12;
    }
    FUN4(VAR2, VAR3);
    VAR8 = VAR9 = FUN5(VAR7, VAR4);
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        FUN6(VAR2, VAR9, VAR6[VAR10]);
        VAR9 += VAR6[VAR10];
    }
    free(VAR6);
    return VAR8;
}