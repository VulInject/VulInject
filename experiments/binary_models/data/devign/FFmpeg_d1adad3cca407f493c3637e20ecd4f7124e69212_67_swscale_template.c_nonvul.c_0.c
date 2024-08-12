static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, VAR8 *VAR9, VAR8 *VAR10, VAR8 *VAR11, VAR8 *VAR12, long VAR13, long VAR14)
{
    int VAR15;
    if (!(VAR3->VAR16 & VAR17))
    {
        long VAR18 = 4;
        const VAR4 *VAR19[4] = {VAR7 + VAR13, VAR5 + VAR13, VAR6 + VAR14, VAR6 + VAR20 + VAR14};
        VAR8 *VAR21[4] = {VAR12, VAR9, VAR10, VAR11};
        x86_reg VAR22[4] = {VAR13, VAR13, VAR14, VAR14};
        if (VAR3->VAR16 & VAR23)
        {
            while (VAR18--)
            {
                if (VAR21[VAR18])
                {
                    VAR24 volatile(VAR25
                                     :
                                     : ""(VAR19[VAR18]), ""(VAR21[VAR18] + VAR22[VAR18]), ""(-VAR22[VAR18])
                                     : "" VAR26);
                }
            }
        }
        else
        {
            while (VAR18--)
            {
                if (VAR21[VAR18])
                {
                    VAR24 volatile(VAR27
                                     :
                                     : ""(VAR19[VAR18]), ""(VAR21[VAR18] + VAR22[VAR18]), ""(-VAR22[VAR18])
                                     : "" VAR26);
                }
            }
        }
        return;
    }
    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
    {
        int VAR28 = (VAR5[VAR15] + 64) >> 7;
        if (VAR28 & 256)
        {
            if (VAR28 < 0)
                VAR28 = 0;
            else
                VAR28 = 255;
        }
        VAR9[VAR15] = VAR28;
    }
    if (VAR10)
        for (VAR15 = 0; VAR15 < VAR14; VAR15++)
        {
            int VAR29 = (VAR6[VAR15] + 64) >> 7;
            int VAR30 = (VAR6[VAR15 + VAR20] + 64) >> 7;
            if ((VAR29 | VAR30) & 256)
            {
                if (VAR29 < 0)
                    VAR29 = 0;
                else if (VAR29 > 255)
                    VAR29 = 255;
                if (VAR30 < 0)
                    VAR30 = 0;
                else if (VAR30 > 255)
                    VAR30 = 255;
            }
            VAR10[VAR15] = VAR29;
            VAR11[VAR15] = VAR30;
        }
    if (VAR31 && VAR12)
        for (VAR15 = 0; VAR15 < VAR13; VAR15++)
        {
            int VAR28 = (VAR7[VAR15] + 64) >> 7;
            VAR12[VAR15] = FUN2(VAR28);
        }
}