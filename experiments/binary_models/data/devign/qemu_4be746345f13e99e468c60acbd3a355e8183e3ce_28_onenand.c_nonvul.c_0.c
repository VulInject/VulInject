static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, void *VAR5)
{
    int VAR6 = 0;
    if (VAR4 > 0)
    {
        const VAR7 *VAR8 = (const VAR7 *)VAR5;
        VAR7 *VAR9 = 0, *VAR10 = 0;
        if (VAR2->VAR11)
        {
            VAR9 = FUN2(512);
            if (!VAR9 || FUN3(VAR2->VAR11, VAR2->VAR12 + (VAR3 >> 5), VAR9, 1) < 0)
            {
                VAR6 = 1;
            }
            else
            {
                VAR10 = VAR9 + ((VAR3 & 31) << 4);
            }
        }
        else
        {
            if (VAR3 + VAR4 > VAR2->VAR12)
            {
                VAR6 = 1;
            }
            else
            {
                VAR10 = VAR2->VAR13 + (VAR2->VAR12 << 9) + (VAR3 << 4);
            }
        }
        if (!VAR6)
        {
            uint32_t VAR14;
            for (VAR14 = 0; VAR14 < (VAR4 << 4); VAR14++)
            {
                VAR10[VAR14] &= VAR8[VAR14];
            }
            if (VAR2->VAR11)
            {
                VAR6 = FUN4(VAR2->VAR11, VAR2->VAR12 + (VAR3 >> 5), VAR9, 1) < 0;
            }
        }
        FUN5(VAR9);
    }
    return VAR6;
}