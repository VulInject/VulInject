static int FUN1(VAR1 *VAR2, signed short *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    const float *VAR8 = VAR2->VAR8[0];
    int VAR9 = 1 << (VAR2->VAR10[0] - 1);
    float VAR11 = (float)(1 << VAR2->VAR10[0]) / 4.;
    if (!VAR2->VAR12 && !VAR4)
        return 0;
    if (VAR2->VAR12)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
        {
            memcpy(VAR2->VAR4 + VAR7 * VAR9 * 2, VAR2->VAR14 + VAR7 * VAR9, sizeof(float) * VAR9);
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
        {
            memset(VAR2->VAR4 + VAR7 * VAR9 * 2, 0, sizeof(float) * VAR9);
        }
    }
    if (VAR4)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
        {
            float *VAR15 = VAR2->VAR4 + VAR7 * VAR9 * 2 + VAR9;
            VAR6 = VAR7;
            for (VAR5 = 0; VAR5 < VAR4; VAR5++, VAR6 += VAR2->VAR13)
                VAR15[VAR5] = VAR3[VAR6] / 32768. * VAR8[VAR9 - VAR5] / VAR11;
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
        {
            memset(VAR2->VAR4 + VAR7 * VAR9 * 2 + VAR9, 0, sizeof(float) * VAR9);
        }
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
    {
        FUN2(&VAR2->VAR16[0], VAR2->VAR17 + VAR7 * VAR9, VAR2->VAR4 + VAR7 * VAR9 * 2, VAR2->VAR18);
    }
    if (VAR4)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
        {
            float *VAR15 = VAR2->VAR14 + VAR7 * VAR9;
            VAR6 = VAR7;
            for (VAR5 = 0; VAR5 < VAR4; VAR5++, VAR6 += VAR2->VAR13)
                VAR15[VAR5] = VAR3[VAR6] / 32768. * VAR8[VAR5] / VAR11;
        }
        VAR2->VAR12 = 1;
    }
    else
    {
        VAR2->VAR12 = 0;
    }
    return 1;
}