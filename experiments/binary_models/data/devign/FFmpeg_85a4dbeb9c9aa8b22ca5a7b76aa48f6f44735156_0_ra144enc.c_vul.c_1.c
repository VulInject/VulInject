static int FUN1(const VAR1 *VAR2, float *VAR3, const float *VAR4, float *VAR5)
{
    int VAR6, VAR7;
    float VAR8, VAR9, VAR10, VAR11;
    float VAR12[VAR13];
    VAR9 = VAR10 = 0;
    for (VAR6 = VAR13 / 2; VAR6 <= VAR14; VAR6++)
    {
        FUN2(VAR12, VAR2, VAR6);
        FUN3(VAR3, VAR4, VAR12, NULL, NULL, VAR5, &VAR8, &VAR9);
        if (VAR8 > VAR10)
        {
            VAR10 = VAR8;
            VAR7 = VAR6;
            VAR11 = VAR9;
        }
    }
    if (!VAR10)
        return 0;
    FUN2(VAR12, VAR2, VAR7);
    FUN4(VAR3, VAR4, VAR12, VAR13, VAR15);
    for (VAR6 = 0; VAR6 < VAR13; VAR6++)
        VAR5[VAR6] -= VAR11 * VAR3[VAR6];
    return VAR7 - VAR13 / 2 + 1;
}