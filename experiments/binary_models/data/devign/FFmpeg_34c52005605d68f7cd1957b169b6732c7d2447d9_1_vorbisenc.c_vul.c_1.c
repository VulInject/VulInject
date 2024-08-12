static int FUN1(VAR1 *VAR2, float **VAR3, int VAR4)
{
    int VAR5;
    const float *VAR6 = VAR2->VAR6[0];
    int VAR7 = 1 << (VAR2->VAR8[0] - 1);
    float VAR9 = (float)(1 << VAR2->VAR8[0]) / 4.0;
    VAR10 *VAR11 = VAR2->VAR11;
    if (!VAR2->VAR12 && !VAR4)
        return 0;
    if (VAR2->VAR12)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
            memcpy(VAR2->VAR4 + VAR5 * VAR7 * 2, VAR2->VAR14 + VAR5 * VAR7, sizeof(float) * VAR7);
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
            memset(VAR2->VAR4 + VAR5 * VAR7 * 2, 0, sizeof(float) * VAR7);
    }
    if (VAR4)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
        {
            float *VAR15 = VAR2->VAR4 + VAR5 * VAR7 * 2 + VAR7;
            VAR11->FUN2(VAR15, VAR3[VAR5], VAR6, VAR4);
            VAR11->FUN3(VAR15, VAR15, 1 / VAR9, VAR4);
        }
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
            memset(VAR2->VAR4 + VAR5 * VAR7 * 2 + VAR7, 0, sizeof(float) * VAR7);
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
        VAR2->VAR16[0].FUN4(&VAR2->VAR16[0], VAR2->VAR17 + VAR5 * VAR7, VAR2->VAR4 + VAR5 * VAR7 * 2);
    if (VAR4)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
        {
            float *VAR15 = VAR2->VAR14 + VAR5 * VAR7;
            VAR11->FUN5(VAR15, VAR3[VAR5], VAR6, VAR4);
            VAR11->FUN3(VAR15, VAR15, 1 / VAR9, VAR4);
        }
        VAR2->VAR12 = 1;
    }
    else
    {
        VAR2->VAR12 = 0;
    }
    return 1;
}