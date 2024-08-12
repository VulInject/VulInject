static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11)
{
    int VAR12 = 0;
    int VAR13 = 0;
    VAR6 += VAR10 >> 1;
    VAR7 += VAR11 >> 1;
    VAR6 = FUN2(VAR6, -16, VAR2->VAR14);
    if (VAR6 != VAR2->VAR14)
        VAR12 |= VAR10 & 1;
    VAR7 = FUN2(VAR7, -16, VAR2->VAR15);
    if (VAR7 != VAR2->VAR15)
        VAR12 |= (VAR11 & 1) << 1;
    VAR5 += VAR7 * VAR2->VAR16 + VAR6;
    if (VAR2->VAR17)
    {
        if ((unsigned)VAR6 > FUN3(VAR2->VAR18 - (VAR10 & 1) - 8, 0) || (unsigned)VAR7 > FUN3(VAR2->VAR19 - (VAR11 & 1) - 8, 0))
        {
            VAR2->VAR20.FUN4(VAR2->VAR21.VAR22, VAR5, VAR2->VAR16, VAR2->VAR16, 9, 9, VAR6, VAR7, VAR2->VAR18, VAR2->VAR19);
            VAR5 = VAR2->VAR21.VAR22;
            VAR13 = 1;
        }
    }
    VAR9[VAR12](VAR4, VAR5, VAR2->VAR16, 8);
    return VAR13;
}