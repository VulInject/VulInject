static void FUN1(float *VAR1, int *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    float VAR6 = 0.0f, VAR7 = 0.0f, VAR8 = 0.0f;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        VAR6 += FUN2(VAR1[VAR5]);
    VAR6 = VAR3 / VAR6;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR2[VAR5] = FUN3(VAR6 * VAR1[VAR5]);
        VAR7 += VAR2[VAR5] * VAR2[VAR5];
        VAR8 += VAR2[VAR5] * VAR1[VAR5];
        VAR3 -= FUN2(VAR2[VAR5]);
    }
    while (VAR3)
    {
        int VAR9 = 0, VAR10 = FUN4(VAR3);
        float VAR11 = 1.0f, VAR12 = 0.0f;
        VAR7 += 1.0f;
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        {
            const int VAR13 = 1 ^ ((VAR2[VAR5] == 0) & (VAR10 < 0));
            float VAR14 = VAR8 + 1 * VAR10 * FUN2(VAR1[VAR5]);
            float VAR15 = VAR7 + 2 * VAR10 * FUN2(VAR2[VAR5]);
            VAR14 = VAR14 * VAR14;
            if (VAR13 && (VAR11 * VAR14) > (VAR15 * VAR12))
            {
                VAR11 = VAR15;
                VAR12 = VAR14;
                VAR9 = VAR5;
            }
        }
        VAR3 -= VAR10;
        VAR10 *= FUN4(VAR1[VAR9]);
        VAR8 += 1 * VAR10 * VAR1[VAR9];
        VAR7 += 2 * VAR10 * VAR2[VAR9];
        VAR2[VAR9] += VAR10;
    }
}