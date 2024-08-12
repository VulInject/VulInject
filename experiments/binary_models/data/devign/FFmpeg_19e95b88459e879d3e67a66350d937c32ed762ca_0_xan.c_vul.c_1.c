static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13;
    int VAR14 = VAR2->VAR15->VAR14;
    unsigned char *VAR16, *VAR17;
    VAR16 = VAR2->VAR18.VAR19[0];
    VAR17 = VAR2->VAR20.VAR19[0];
    VAR8 = VAR2->VAR18.VAR21[0];
    VAR9 = VAR8 - VAR14;
    VAR10 = VAR4 * VAR8 + VAR3;
    VAR12 = VAR3;
    VAR11 = (VAR4 + VAR7) * VAR8 + VAR3 + VAR6;
    VAR13 = VAR3 + VAR6;
    while (VAR5 && (VAR10 < VAR2->VAR22))
    {
        int VAR23 = FUN2(VAR5, VAR14 - VAR12, VAR14 - VAR13);
        memcpy(VAR16 + VAR10, VAR17 + VAR11, VAR23);
        VAR5 -= VAR23;
        VAR10 += VAR23;
        VAR11 += VAR23;
        VAR12 += VAR23;
        VAR13 += VAR23;
        if (VAR12 >= VAR14)
        {
            VAR10 += VAR9;
            VAR12 = 0;
        }
        if (VAR13 >= VAR14)
        {
            VAR11 += VAR9;
            VAR13 = 0;
        }
    }