static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR14 *VAR15;
    if (VAR3 < 4)
    {
        VAR12 = VAR2->VAR16;
    }
    else
    {
        VAR12 = VAR2->VAR17;
    }
    if (VAR18)
        VAR12 = 8;
    VAR10 = VAR2->VAR19[VAR3];
    VAR15 = VAR2->VAR15[0] + VAR2->VAR20[VAR3];
    VAR7 = VAR15[-1];
    VAR8 = VAR15[-1 - VAR10];
    VAR9 = VAR15[-VAR10];
    if (VAR2->VAR21 && VAR3 != 3)
    {
        if (VAR3 != 2)
            VAR8 = VAR9 = 1024;
        if (VAR3 != 1 && VAR2->VAR22 == VAR2->VAR23)
            VAR8 = VAR7 = 1024;
    }
    if (VAR2->VAR22 == VAR2->VAR23 && VAR2->VAR24 == VAR2->VAR25 + 1)
    {
        if (VAR3 == 0 || VAR3 == 4 || VAR3 == 5)
            VAR8 = 1024;
    }
    if (FUN2(VAR7 - VAR8) < FUN2(VAR8 - VAR9))
    {
        VAR11 = VAR9;
        *VAR5 = 1;
    }
    else
    {
        VAR11 = VAR7;
        *VAR5 = 0;
    }
    VAR11 = FUN3((VAR11 + (VAR12 >> 1)), VAR12);
    if (VAR6)
    {
        VAR13 = VAR4 - VAR11;
    }
    else
    {
        VAR4 += VAR11;
        VAR13 = VAR4;
        if (VAR2->VAR26 >= 3)
        {
            if (VAR4 < 0)
            {
                FUN4(VAR2->VAR27, VAR28, "", VAR2->VAR22, VAR2->VAR24);
                return -1;
            }
            if (VAR4 * VAR12 > 2048 + VAR12)
            {
                FUN4(VAR2->VAR27, VAR28, "", VAR2->VAR22, VAR2->VAR24);
                return -1;
            }
        }
    }
    VAR4 *= VAR12;
    if (VAR4 & (~2047))
    {
        if (VAR4 < 0)
            VAR4 = 0;
        else if (!(VAR2->VAR29 & VAR30))
            VAR4 = 2047;
    }
    VAR15[0] = VAR4;
    return VAR13;
}