static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, int VAR7)
{
    int VAR8;
    if (VAR2->VAR9 <= 8)
    {
        if (VAR6 < 32)
        {
            for (VAR8 = 0; VAR8 < VAR6; VAR8++)
            {
                const int VAR10 = VAR5[VAR8];
                VAR4[VAR8] = VAR10 - VAR7;
                VAR7 = VAR10;
            }
            return VAR7;
        }
        else
        {
            for (VAR8 = 0; VAR8 < 32; VAR8++)
            {
                const int VAR10 = VAR5[VAR8];
                VAR4[VAR8] = VAR10 - VAR7;
                VAR7 = VAR10;
            }
            VAR2->VAR11.FUN2(VAR4 + 32, VAR5 + 32, VAR5 + 31, VAR6 - 32);
            return VAR5[VAR6 - 1];
        }
    }
    else
    {
        const VAR12 *VAR13 = (const VAR12 *)VAR5;
        VAR12 *VAR14 = (VAR12 *)VAR4;
        if (VAR6 < 32)
        {
            for (VAR8 = 0; VAR8 < VAR6; VAR8++)
            {
                const int VAR10 = VAR13[VAR8];
                VAR14[VAR8] = VAR10 - VAR7;
                VAR7 = VAR10;
            }
            return VAR7;
        }
        else
        {
            for (VAR8 = 0; VAR8 < 32; VAR8++)
            {
                const int VAR10 = VAR13[VAR8];
                VAR14[VAR8] = VAR10 - VAR7;
                VAR7 = VAR10;
            }
            VAR2->VAR15.FUN3(VAR14 + 32, VAR13 + 32, VAR13 + 31, VAR2->VAR16 - 1, VAR6 - 32);
            return VAR13[VAR6 - 1];
        }
    }
}