static void FUN1(VAR1 *VAR2, double *VAR3, int *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9 = *VAR4;
    int *VAR10 = VAR2->VAR11[VAR5][VAR6];
    float *VAR12 = VAR2->VAR13[VAR5][VAR6];
    float VAR14[VAR15] = {0.0f}, VAR16[VAR15] = {0.0f};
    if (!VAR9)
        return;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        VAR10[VAR7] = FUN2(VAR3[VAR7], VAR17, 16);
        VAR12[VAR7] = VAR17[VAR10[VAR7]];
    }
    for (VAR7 = VAR9 - 1; VAR7 > -1; VAR7--)
    {
        VAR12[VAR7] = (FUN3(VAR12[VAR7]) > 0.1f) ? VAR12[VAR7] : 0.0f;
        if (VAR12[VAR7] != 0.0)
        {
            VAR9 = VAR7;
            break;
        }
    }
    VAR16[0] = 1.0f;
    for (VAR7 = 1; VAR7 <= VAR9; VAR7++)
    {
        for (VAR8 = 1; VAR8 < VAR7; VAR8++)
        {
            VAR14[VAR8] = VAR16[VAR8] + VAR12[VAR7] * VAR16[VAR7 - VAR8];
        }
        for (VAR8 = 1; VAR8 <= VAR7; VAR8++)
        {
            VAR16[VAR8] = VAR14[VAR8];
        }
        VAR16[VAR7] = VAR12[VAR7 - 1];
    }
    *VAR4 = VAR9;
    memcpy(VAR12, VAR16, VAR15 * sizeof(float));
}