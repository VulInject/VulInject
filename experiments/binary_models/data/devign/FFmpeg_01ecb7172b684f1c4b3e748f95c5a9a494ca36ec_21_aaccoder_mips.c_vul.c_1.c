static float FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, const float *VAR6, int VAR7, int VAR8, int VAR9, const float VAR10, const float VAR11, int *VAR12)
{
    int VAR13;
    float VAR14 = 0;
    for (VAR13 = 0; VAR13 < VAR7; VAR13 += 4)
    {
        VAR14 += VAR5[VAR13] * VAR5[VAR13];
        VAR14 += VAR5[VAR13 + 1] * VAR5[VAR13 + 1];
        VAR14 += VAR5[VAR13 + 2] * VAR5[VAR13 + 2];
        VAR14 += VAR5[VAR13 + 3] * VAR5[VAR13 + 3];
    }
    if (VAR12)
        *VAR12 = 0;
    return VAR14 * VAR10;
}