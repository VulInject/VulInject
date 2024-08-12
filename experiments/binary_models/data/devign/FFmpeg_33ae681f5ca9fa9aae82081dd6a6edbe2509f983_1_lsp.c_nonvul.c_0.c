void FUN1(const double *VAR1, float *VAR2)
{
    double VAR3[6], VAR4[6];
    int VAR5;
    FUN2(VAR1, VAR3, 5);
    FUN2(VAR1 + 1, VAR4, 5);
    for (VAR5 = 4; VAR5 >= 0; VAR5--)
    {
        double VAR6 = VAR3[VAR5 + 1] + VAR3[VAR5];
        double VAR7 = VAR4[VAR5 + 1] - VAR4[VAR5];
        VAR2[VAR5] = 0.5 * (VAR6 + VAR7);
        VAR2[9 - VAR5] = 0.5 * (VAR6 - VAR7);
    }
}