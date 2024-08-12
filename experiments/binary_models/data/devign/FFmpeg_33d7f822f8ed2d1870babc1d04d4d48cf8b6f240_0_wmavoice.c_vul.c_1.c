static void FUN1(float *VAR1, const float *VAR2, const float *VAR3, int VAR4, float VAR5, float *VAR6)
{
    int VAR7;
    float VAR8 = 0.0, VAR9 = 0.0, VAR10;
    float VAR11 = *VAR6;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR8 += FUN2(VAR3[VAR7]);
        VAR9 += FUN2(VAR2[VAR7]);
    }
    VAR10 = (1.0 - VAR5) * VAR8 / VAR9;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR11 = VAR5 * VAR11 + VAR10;
        VAR1[VAR7] = VAR2[VAR7] * VAR11;
    }
    *VAR6 = VAR11;
}