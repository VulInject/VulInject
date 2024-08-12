static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    unsigned int VAR5 = VAR3 + 255;
    if (VAR5 >= 511)
    {
        int VAR6;
        if (VAR3 < 0)
        {
            VAR6 = FUN2(-2 * VAR3);
            VAR3--;
        }
        else
        {
            VAR6 = FUN2(2 * VAR3);
        }
        if (VAR4 == 0)
            FUN3(&VAR2->VAR7, VAR8[VAR6] + VAR6, (VAR9[VAR6] << VAR6) + (VAR3 & ((1 << VAR6) - 1)));
        else
            FUN3(&VAR2->VAR7, VAR10[VAR6] + VAR6, (VAR11[VAR6] << VAR6) + (VAR3 & ((1 << VAR6) - 1)));
    }
    else
    {
        if (VAR4 == 0)
            FUN3(&VAR2->VAR7, VAR12[VAR3 + 255] & 0xFF, VAR12[VAR3 + 255] >> 8);
        else
            FUN3(&VAR2->VAR7, VAR13[VAR3 + 255] & 0xFF, VAR13[VAR3 + 255] >> 8);
    }
}