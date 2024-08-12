static void FUN1(const double *VAR1, double *VAR2, int VAR3)
{
    int VAR4, VAR5;
    VAR2[0] = 1.0;
    VAR2[1] = -2 * VAR1[0];
    VAR1 -= 2;
    for (VAR4 = 2; VAR4 <= VAR3; VAR4++)
    {
        double VAR6 = -2 * VAR1[2 * VAR4];
        VAR2[VAR4] = VAR6 * VAR2[VAR4 - 1] + 2 * VAR2[VAR4 - 2];
        for (VAR5 = VAR4 - 1; VAR5 > 1; VAR5--)
            VAR2[VAR5] += VAR2[VAR5 - 1] * VAR6 + VAR2[VAR5 - 2];
        VAR2[1] += VAR6;
    }
}