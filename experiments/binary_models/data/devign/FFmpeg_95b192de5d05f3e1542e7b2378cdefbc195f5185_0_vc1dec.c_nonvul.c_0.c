static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, VAR8 **VAR9, int *VAR10)
{
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR8 *VAR16;
    int VAR17 = VAR2->VAR18 + VAR2->VAR19 * VAR2->VAR20;
    int VAR21, VAR22 = 0;
    int VAR23;
    VAR14 = VAR2->VAR24[VAR5];
    VAR16 = VAR2->VAR16[0] + VAR2->VAR25[VAR5];
    VAR13 = VAR16[-1];
    VAR12 = VAR16[-1 - VAR14];
    VAR11 = VAR16[-VAR14];
    VAR21 = VAR2->VAR26.VAR27.VAR28[VAR17];
    VAR23 = VAR2->VAR29[VAR21] - 1;
    if (VAR23 < 0)
        return 0;
    if (VAR7 && (VAR5 != 1 && VAR5 != 3))
    {
        VAR22 = VAR2->VAR26.VAR27.VAR28[VAR17 - 1];
        if (VAR22 && VAR22 != VAR21)
            VAR13 = (VAR13 * VAR2->VAR29[VAR22] * VAR30[VAR23] + 0x20000) >> 18;
    }
    if (VAR6 && (VAR5 != 2 && VAR5 != 3))
    {
        VAR22 = VAR2->VAR26.VAR27.VAR28[VAR17 - VAR2->VAR20];
        if (VAR22 && VAR22 != VAR21)
            VAR11 = (VAR11 * VAR2->VAR29[VAR22] * VAR30[VAR23] + 0x20000) >> 18;
    }
    if (VAR6 && VAR7 && (VAR5 != 3))
    {
        int VAR31 = VAR17;
        if (VAR5 != 1)
            VAR31--;
        if (VAR5 != 2)
            VAR31 -= VAR2->VAR20;
        VAR22 = VAR2->VAR26.VAR27.VAR28[VAR31];
        if (VAR22 && VAR22 != VAR21)
            VAR12 = (VAR12 * VAR2->VAR29[VAR22] * VAR30[VAR23] + 0x20000) >> 18;
    }
    if (VAR6 && VAR7)
    {
        if (FUN2(VAR11 - VAR12) <= FUN2(VAR12 - VAR13))
        {
            VAR15 = VAR13;
            *VAR10 = 1;
        }
        else
        {
            VAR15 = VAR11;
            *VAR10 = 0;
        }
    }
    else if (VAR6)
    {
        VAR15 = VAR11;
        *VAR10 = 0;
    }
    else if (VAR7)
    {
        VAR15 = VAR13;
        *VAR10 = 1;
    }
    else
    {
        VAR15 = 0;
        *VAR10 = 1;
    }
    *VAR9 = &VAR16[0];
    return VAR15;
}