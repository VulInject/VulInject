static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, VAR8 *VAR9, VAR8 *VAR10, VAR8 *VAR11, VAR8 *VAR12, long VAR13, long VAR14)
{
    int VAR15;
    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
    {
        int VAR16 = (VAR5[VAR15] + 64) >> 7;
        if (VAR16 & 256)
        {
            if (VAR16 < 0)
                VAR16 = 0;
            else
                VAR16 = 255;
        }
        VAR9[VAR15] = VAR16;
    }
    if (VAR10)
        for (VAR15 = 0; VAR15 < VAR14; VAR15++)
        {
            int VAR17 = (VAR6[VAR15] + 64) >> 7;
            int VAR18 = (VAR6[VAR15 + VAR19] + 64) >> 7;
            if ((VAR17 | VAR18) & 256)
            {
                if (VAR17 < 0)
                    VAR17 = 0;
                else if (VAR17 > 255)
                    VAR17 = 255;
                if (VAR18 < 0)
                    VAR18 = 0;
                else if (VAR18 > 255)
                    VAR18 = 255;
            }
            VAR10[VAR15] = VAR17;
            VAR11[VAR15] = VAR18;
        }
    if (VAR20 && VAR12)
        for (VAR15 = 0; VAR15 < VAR13; VAR15++)
        {
            int VAR16 = (VAR7[VAR15] + 64) >> 7;
            VAR12[VAR15] = FUN2(VAR16);
        }
}