static float *FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5)
{
    int VAR6, VAR7 = -1;
    float VAR8 = VAR9;
    assert(VAR2->VAR10);
    for (VAR6 = 0; VAR6 < VAR2->VAR11; VAR6++)
    {
        float *VAR12 = VAR2->VAR10 + VAR6 * VAR2->VAR13, VAR14 = VAR2->VAR15[VAR6];
        int VAR16;
        if (!VAR2->VAR17[VAR6])
            continue;
        for (VAR16 = 0; VAR16 < VAR2->VAR13; VAR16++)
            VAR14 -= VAR12[VAR16] * VAR5[VAR16];
        if (VAR8 > VAR14)
        {
            VAR7 = VAR6;
            VAR8 = VAR14;
        }
    }
    FUN2(VAR4, VAR2, VAR7);
    return &VAR2->VAR10[VAR7 * VAR2->VAR13];
}