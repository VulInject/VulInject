FUN1(const VAR1 **VAR2, VAR3 **VAR4, int VAR5)
{
    int VAR6;
    int VAR7[VAR8];
    static VAR3 *VAR9 = NULL;
    memset(VAR4, 0, VAR8 * sizeof(VAR4[0]));
    memset(VAR7, 0, VAR8 * sizeof(VAR7[0]));
    free(VAR9);
    VAR9 = malloc(sizeof(*VAR9) * VAR5);
    for (VAR6 = VAR5 - 1; VAR6 >= 0; --VAR6)
    {
        int VAR10 = FUN2(VAR2[VAR6]->VAR11);
        VAR3 *VAR12 = &VAR9[VAR6];
        VAR12->VAR13 = VAR4[VAR10];
        VAR12->VAR14 = VAR2[VAR6];
        VAR4[VAR10] = VAR12;
        ++VAR7[VAR10];
    }
    {
        int VAR15 = VAR5, VAR16 = 0;
        int VAR17;
        for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
        {
            if (VAR7[VAR6] < VAR15)
                VAR15 = VAR7[VAR6];
            if (VAR7[VAR6] > VAR16)
                VAR16 = VAR7[VAR6];
            VAR17 += VAR7[VAR6];
        }
        FUN3("", VAR15, VAR16, (double)VAR17 / VAR8);
    }
}