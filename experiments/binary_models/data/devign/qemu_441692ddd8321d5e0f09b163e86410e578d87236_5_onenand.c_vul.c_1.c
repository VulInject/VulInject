static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, void *VAR5)
{
    int VAR6 = 0;
    if (VAR4 > 0)
    {
        uint32_t VAR7 = (VAR8)VAR4 * 512;
        const VAR9 *VAR10 = (const VAR9 *)VAR5;
        VAR9 *VAR11 = 0;
        if (VAR2->VAR12)
        {
            VAR11 = FUN2(VAR7);
            if (!VAR11 || FUN3(VAR2->VAR12, VAR3, VAR11, VAR4) < 0)
            {
                VAR6 = 1;
            }
        }
        else
        {
            if (VAR3 + VAR4 > VAR2->VAR13)
            {
                VAR6 = 1;
            }
            else
            {
                VAR11 = (VAR9 *)VAR2->VAR14 + (VAR3 << 9);
            }
        }
        if (!VAR6)
        {
            uint32_t VAR15;
            for (VAR15 = 0; VAR15 < VAR7; VAR15++)
            {
                VAR11[VAR15] &= VAR10[VAR15];
            }
            if (VAR2->VAR12)
            {
                VAR6 = FUN4(VAR2->VAR12, VAR3, VAR11, VAR4) < 0;
            }
        }
        if (VAR11 && VAR2->VAR12)
        {
            FUN5(VAR11);
        }
    }
    return VAR6;
}