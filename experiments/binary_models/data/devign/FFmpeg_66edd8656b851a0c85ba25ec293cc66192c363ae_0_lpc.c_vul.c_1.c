double FUN1(VAR1 *VAR2, const float *VAR3, int VAR4, int VAR5, double *VAR6)
{
    int VAR7;
    double signal = 0.0f, VAR8 = 0.0f;
    double VAR9[VAR10 + 1] = {0}, VAR11[VAR10 + 1] = {0};
    const double VAR12 = 0.5f, VAR13 = 1.0f - VAR12;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        double VAR14 = VAR12 - VAR13 * FUN2((2 * VAR15 * VAR7) / (VAR4 - 1));
        VAR2->VAR16[VAR7] = VAR14 * VAR3[VAR7];
    }
    VAR2->FUN3(VAR2->VAR16, VAR4, VAR5, VAR9);
    signal = VAR9[0];
    FUN4(VAR9, VAR5, VAR6, VAR11);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        VAR8 = (VAR8 + VAR11[VAR7]) / 2.0f;
    return signal / VAR8;
}