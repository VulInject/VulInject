void FUN1(const VAR1 *VAR2, int VAR3, int VAR4, double *VAR5)
{
    int VAR6, VAR7;
    double VAR8[VAR3 + VAR4 + 1];
    double *VAR9 = VAR8 + VAR4;
    FUN2(VAR2, VAR3, VAR9);
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
        VAR9[VAR7 - VAR4] = 0.0;
    VAR9[VAR3] = 0.0;
    for (VAR7 = 0; VAR7 < VAR4; VAR7 += 2)
    {
        double VAR10 = 1.0, VAR11 = 1.0;
        for (VAR6 = VAR7; VAR6 < VAR3; VAR6++)
        {
            VAR10 += VAR9[VAR6] * VAR9[VAR6 - VAR7];
            VAR11 += VAR9[VAR6] * VAR9[VAR6 - VAR7 - 1];
        }
        VAR5[VAR7] = VAR10;
        VAR5[VAR7 + 1] = VAR11;
    }
    if (VAR7 == VAR4)
    {
        double VAR12 = 1.0;
        for (VAR6 = VAR7 - 1; VAR6 < VAR3; VAR6 += 2)
        {
            VAR12 += VAR9[VAR6] * VAR9[VAR6 - VAR7] + VAR9[VAR6 + 1] * VAR9[VAR6 - VAR7 + 1];
        }
        VAR5[VAR7] = VAR12;
    }
}