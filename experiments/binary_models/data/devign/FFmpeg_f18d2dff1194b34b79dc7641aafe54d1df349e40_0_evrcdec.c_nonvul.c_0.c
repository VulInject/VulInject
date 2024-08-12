static void FUN1(VAR1 *VAR2, float *VAR3, float VAR4)
{
    float *VAR5;
    int VAR6, VAR7, VAR8;
    int16_t VAR9;
    VAR6 = FUN2(VAR4);
    VAR9 = (VAR6 - VAR4 + 0.5) * 8.0 + 0.5;
    if (VAR9 == 8)
    {
        VAR9 = 0;
        VAR6--;
    }
    VAR5 = VAR3 - VAR6 - 8;
    VAR8 = VAR9 * (2 * 8 + 1);
    VAR3[0] = 0.0;
    for (VAR7 = 0; VAR7 < 2 * 8 + 1; VAR7++)
        VAR3[0] += VAR2->VAR10[VAR8 + VAR7] * VAR5[VAR7];
}