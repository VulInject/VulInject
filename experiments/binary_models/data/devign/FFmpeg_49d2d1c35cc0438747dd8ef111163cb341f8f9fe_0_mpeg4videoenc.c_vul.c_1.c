static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR3 += 256;
    if (VAR4 < 4)
    {
        FUN2(VAR2, VAR5[VAR3], VAR6[VAR3]);
    }
    else
    {
        FUN2(VAR2, VAR7[VAR3], VAR8[VAR3]);
    }
    int VAR9, VAR10;
    VAR9 = 0;
    VAR10 = FUN3(VAR3);
    while (VAR10)
    {
        VAR10 >>= 1;
        VAR9++;
    }
    if (VAR4 < 4)
    {
        FUN2(&VAR2->VAR11, VAR12[VAR9][1], VAR12[VAR9][0]);
    }
    else
    {
        FUN2(&VAR2->VAR11, VAR13[VAR9][1], VAR13[VAR9][0]);
    }
    if (VAR9 > 0)
    {
        if (VAR3 < 0)
            VAR3 = (-VAR3) ^ ((1 << VAR9) - 1);
        FUN2(&VAR2->VAR11, VAR9, VAR3);
        if (VAR9 > 8)
            FUN2(&VAR2->VAR11, 1, 1);
    }