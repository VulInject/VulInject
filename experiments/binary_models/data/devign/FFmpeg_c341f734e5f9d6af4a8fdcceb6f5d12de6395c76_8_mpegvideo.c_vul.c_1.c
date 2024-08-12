static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, int VAR15, int VAR16, VAR17 *VAR18, int VAR19, int VAR20)
{
    const int VAR21 = VAR2->VAR22->VAR21;
    const int VAR23 = FUN2(VAR21, 3);
    const int VAR24 = (2 << VAR21) - 1;
    int VAR25 = 0;
    int VAR26, VAR27;
    if (VAR2->VAR28)
    {
        VAR19 /= 2;
        VAR20 /= 2;
    }
    VAR26 = VAR19 & VAR24;
    VAR27 = VAR20 & VAR24;
    VAR8 += VAR19 >> VAR21 + 1;
    VAR9 += VAR20 >> VAR21 + 1;
    VAR5 += VAR9 * VAR12 + VAR8;
    if ((unsigned)VAR8 > FUN3(VAR13 - (!!VAR26) - VAR15, 0) || (unsigned)VAR9 > FUN3((VAR14 >> VAR6) - (!!VAR27) - VAR16, 0))
    {
        VAR2->VAR29.FUN4(VAR2->VAR30, VAR5, VAR2->VAR31, VAR15 + 1, (VAR16 + 1) << VAR6, VAR8, VAR9 << VAR6, VAR13, VAR14);
        VAR5 = VAR2->VAR30;
        VAR25 = 1;
    }
    VAR26 = (VAR26 << 2) >> VAR21;
    VAR27 = (VAR27 << 2) >> VAR21;
    if (VAR7)
        VAR5 += VAR2->VAR31;
    VAR18[VAR23](VAR4, VAR5, VAR12, VAR16, VAR26, VAR27);
    return VAR25;
}