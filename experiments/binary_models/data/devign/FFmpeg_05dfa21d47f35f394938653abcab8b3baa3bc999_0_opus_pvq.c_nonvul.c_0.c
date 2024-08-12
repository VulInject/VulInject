static float FUN1(float *VAR1, int *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6 = 0;
    float VAR7 = 0.0f, VAR8 = 0.0f;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        VAR7 += FUN2(VAR1[VAR5]);
    VAR7 = VAR3 / (VAR7 + VAR9);
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR2[VAR5] = FUN3(VAR7 * VAR1[VAR5]);
        VAR6 += VAR2[VAR5] * VAR2[VAR5];
        VAR8 += VAR2[VAR5] * VAR1[VAR5];
        VAR3 -= FUN2(VAR2[VAR5]);
    }
    while (VAR3)
    {
        int VAR10 = 0, VAR11 = FUN4(VAR3);
        float VAR12 = 0.0f;
        float VAR13 = 1.0f;
        VAR6 += 1.0f;
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        {
            const int VAR14 = 1 ^ ((VAR2[VAR5] == 0) & (VAR11 < 0));
            const int VAR15 = VAR6 + 2 * VAR11 * FUN2(VAR2[VAR5]);
            float VAR16 = VAR8 + 1 * VAR11 * FUN2(VAR1[VAR5]);
            VAR16 = VAR16 * VAR16;
            if (VAR14 && (VAR13 * VAR16) > (VAR15 * VAR12))
            {
                VAR13 = VAR15;
                VAR12 = VAR16;
                VAR10 = VAR5;
            }
        }
        VAR3 -= VAR11;
        VAR11 *= FUN4(VAR1[VAR10]);
        VAR8 += 1 * VAR11 * VAR1[VAR10];
        VAR6 += 2 * VAR11 * VAR2[VAR10];
        VAR2[VAR10] += VAR11;
    }
    return (float)VAR6;
}