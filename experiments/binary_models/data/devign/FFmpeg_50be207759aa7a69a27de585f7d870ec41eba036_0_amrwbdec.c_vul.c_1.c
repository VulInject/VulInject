static void FUN1(float VAR1[VAR2])
{
    float VAR3[VAR4 - 2], VAR5;
    float *VAR6 = VAR3 - VAR4 + 1;
    float VAR7[3];
    float VAR8, VAR9;
    int VAR10, VAR11;
    VAR1[VAR2 - 1] = VAR1[VAR4 - 1];
    for (VAR10 = 0; VAR10 < VAR4 - 2; VAR10++)
        VAR3[VAR10] = VAR1[VAR10 + 1] - VAR1[VAR10];
    VAR5 = 0.0;
    for (VAR10 = 2; VAR10 < VAR4 - 2; VAR10++)
        VAR5 += VAR3[VAR10] * (1.0f / (VAR4 - 4));
    VAR11 = 0;
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        VAR7[VAR10] = FUN2(VAR3, VAR5, VAR10 + 2);
        if (VAR7[VAR10] > VAR7[VAR11])
            VAR11 = VAR10;
    }
    VAR11++;
    for (VAR10 = VAR4 - 1; VAR10 < VAR2 - 1; VAR10++)
        VAR1[VAR10] = VAR1[VAR10 - 1] + VAR1[VAR10 - 1 - VAR11] - VAR1[VAR10 - 2 - VAR11];
    VAR8 = 7965 + (VAR1[2] - VAR1[3] - VAR1[4]) / 6.0;
    VAR9 = 0.5 * (FUN3(VAR8, 7600) - VAR1[VAR4 - 2]) / (VAR1[VAR2 - 2] - VAR1[VAR4 - 2]);
    for (VAR10 = VAR4 - 1; VAR10 < VAR2 - 1; VAR10++)
        VAR6[VAR10] = VAR9 * (VAR1[VAR10] - VAR1[VAR10 - 1]);
    for (VAR10 = VAR4; VAR10 < VAR2 - 1; VAR10++)
        if (VAR6[VAR10] + VAR6[VAR10 - 1] < 5.0)
        {
            if (VAR6[VAR10] > VAR6[VAR10 - 1])
            {
                VAR6[VAR10 - 1] = 5.0 - VAR6[VAR10];
            }
            else
                VAR6[VAR10] = 5.0 - VAR6[VAR10 - 1];
        }
    for (VAR10 = VAR4 - 1; VAR10 < VAR2 - 1; VAR10++)
        VAR1[VAR10] = VAR1[VAR10 - 1] + VAR6[VAR10] * (1.0f / (1 << 15));
    for (VAR10 = 0; VAR10 < VAR2 - 1; VAR10++)
        VAR1[VAR10] *= 0.8;
}