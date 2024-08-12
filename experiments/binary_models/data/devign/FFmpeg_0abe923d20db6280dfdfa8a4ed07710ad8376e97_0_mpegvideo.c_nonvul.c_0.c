static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 **VAR6, VAR7 *VAR8, int VAR9, int VAR10)
{
    const int VAR11 = VAR2->VAR12->VAR11;
    const int VAR13 = FUN2(VAR11, 3);
    const int VAR14 = 8 >> VAR11;
    const int VAR15 = (2 << VAR11) - 1;
    const int VAR16 = VAR2->VAR16 >> VAR11 + 1;
    const int VAR17 = VAR2->VAR17 >> VAR11 + 1;
    int VAR18 = 0, VAR19, VAR20, VAR21, VAR22, VAR23;
    VAR3 *VAR24;
    if (VAR2->VAR25)
    {
        VAR9 /= 2;
        VAR10 /= 2;
    }
    VAR9 = FUN3(VAR9);
    VAR10 = FUN3(VAR10);
    VAR22 = VAR9 & VAR15;
    VAR23 = VAR10 & VAR15;
    VAR19 = VAR2->VAR26 * VAR14 + (VAR9 >> VAR11 + 1);
    VAR20 = VAR2->VAR27 * VAR14 + (VAR10 >> VAR11 + 1);
    VAR21 = VAR20 * VAR2->VAR28 + VAR19;
    VAR24 = VAR6[1] + VAR21;
    if (VAR2->VAR29 & VAR30)
    {
        if ((unsigned)VAR19 > FUN4(VAR16 - (!!VAR22) - VAR14, 0) || (unsigned)VAR20 > FUN4(VAR17 - (!!VAR23) - VAR14, 0))
        {
            VAR2->VAR31.FUN5(VAR2->VAR32, VAR24, VAR2->VAR28, 9, 9, VAR19, VAR20, VAR16, VAR17);
            VAR24 = VAR2->VAR32;
            VAR18 = 1;
        }
    }
    VAR22 = (VAR22 << 2) >> VAR11;
    VAR23 = (VAR23 << 2) >> VAR11;
    VAR8[VAR13](VAR4, VAR24, VAR2->VAR28, VAR14, VAR22, VAR23);
    VAR24 = VAR6[2] + VAR21;
    if (VAR18)
    {
        VAR2->VAR31.FUN5(VAR2->VAR32, VAR24, VAR2->VAR28, 9, 9, VAR19, VAR20, VAR16, VAR17);
        VAR24 = VAR2->VAR32;
    }
    VAR8[VAR13](VAR5, VAR24, VAR2->VAR28, VAR14, VAR22, VAR23);
}