static int FUN1(VAR1 *VAR2, int VAR3, const float *VAR4, float *VAR5, int VAR6)
{
    int VAR7;
    float VAR8 = 0, VAR9;
    const float *VAR10 = &VAR4[-FUN2(VAR2->VAR11, VAR3 - 3)], *VAR12 = &VAR4[-FUN3(VAR2->VAR13, VAR3 + 3)], *VAR14;
    do
    {
        VAR9 = FUN4(VAR4, VAR10, VAR6);
        if (VAR9 > VAR8)
        {
            VAR8 = VAR9;
            VAR14 = VAR10;
        }
    } while (--VAR10 >= VAR12);
    if (VAR8 <= 0)
        return -1;
    VAR9 = FUN4(VAR14, VAR14, VAR6);
    if (VAR9 <= 0)
        return -1;
    if (VAR8 <= VAR9)
    {
        VAR9 = VAR9 / (VAR9 + 0.6 * VAR8);
    }
    else
        VAR9 = 0.625;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
        VAR5[VAR7] = VAR14[VAR7] + VAR9 * (VAR4[VAR7] - VAR14[VAR7]);
    return 0;
}