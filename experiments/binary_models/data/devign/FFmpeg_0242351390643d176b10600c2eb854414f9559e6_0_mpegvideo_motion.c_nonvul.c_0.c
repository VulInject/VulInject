static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, VAR3 **VAR10, FUN2 (*VAR11)[4], FUN3 (*VAR12)[16], int VAR13, int VAR14, int VAR15)
{
    VAR3 *VAR16, *VAR17, *VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    ptrdiff_t VAR28, VAR29;
    VAR19 = ((VAR14 & 3) << 2) | (VAR13 & 3);
    VAR23 = VAR2->VAR30 * 16 + (VAR13 >> 2);
    VAR24 = VAR2->VAR31 * (16 >> VAR7) + (VAR14 >> 2);
    VAR27 = VAR2->VAR27 >> VAR7;
    VAR28 = VAR2->VAR28 << VAR7;
    VAR29 = VAR2->VAR29 << VAR7;
    if (VAR7)
    {
        VAR21 = VAR13 / 2;
        VAR22 = VAR14 >> 1;
    }
    else if (VAR2->VAR32 & VAR33)
    {
        static const int VAR34[8] = {0, 0, 1, 1, 0, 0, 0, 1};
        VAR21 = (VAR13 >> 1) + VAR34[VAR13 & 7];
        VAR22 = (VAR14 >> 1) + VAR34[VAR14 & 7];
    }
    else if (VAR2->VAR32 & VAR35)
    {
        VAR21 = (VAR13 >> 1) | (VAR13 & 1);
        VAR22 = (VAR14 >> 1) | (VAR14 & 1);
    }
    else
    {
        VAR21 = VAR13 / 2;
        VAR22 = VAR14 / 2;
    }
    VAR21 = (VAR21 >> 1) | (VAR21 & 1);
    VAR22 = (VAR22 >> 1) | (VAR22 & 1);
    VAR20 = (VAR21 & 1) | ((VAR22 & 1) << 1);
    VAR21 >>= 1;
    VAR22 >>= 1;
    VAR25 = VAR2->VAR30 * 8 + VAR21;
    VAR26 = VAR2->VAR31 * (8 >> VAR7) + VAR22;
    VAR16 = VAR10[0] + VAR24 * VAR28 + VAR23;
    VAR17 = VAR10[1] + VAR26 * VAR29 + VAR25;
    VAR18 = VAR10[2] + VAR26 * VAR29 + VAR25;
    if ((unsigned)VAR23 > FUN4(VAR2->VAR36 - (VAR13 & 3) - 16, 0) || (unsigned)VAR24 > FUN4(VAR27 - (VAR14 & 3) - VAR15, 0))
    {
        VAR2->VAR37.FUN5(VAR2->VAR38.VAR39, VAR16, VAR2->VAR28, VAR2->VAR28, 17, 17 + VAR7, VAR23, VAR24 * (1 << VAR7), VAR2->VAR36, VAR2->VAR27);
        VAR16 = VAR2->VAR38.VAR39;
        if (!VAR40 || !(VAR2->VAR41->VAR42 & VAR43))
        {
            VAR3 *VAR44 = VAR2->VAR38.VAR39 + 18 * VAR2->VAR28;
            VAR2->VAR37.FUN5(VAR44, VAR17, VAR2->VAR29, VAR2->VAR29, 9, 9 + VAR7, VAR25, VAR26 * (1 << VAR7), VAR2->VAR36 >> 1, VAR2->VAR27 >> 1);
            VAR2->VAR37.FUN5(VAR44 + 16, VAR18, VAR2->VAR29, VAR2->VAR29, 9, 9 + VAR7, VAR25, VAR26 * (1 << VAR7), VAR2->VAR36 >> 1, VAR2->VAR27 >> 1);
            VAR17 = VAR44;
            VAR18 = VAR44 + 16;
        }
    }
    if (!VAR7)
        VAR12[0][VAR19](VAR4, VAR16, VAR28);
    else
    {
        if (VAR8)
        {
            VAR4 += VAR2->VAR28;
            VAR5 += VAR2->VAR29;
            VAR6 += VAR2->VAR29;
        }
        if (VAR9)
        {
            VAR16 += VAR2->VAR28;
            VAR17 += VAR2->VAR29;
            VAR18 += VAR2->VAR29;
        }
        VAR12[1][VAR19](VAR4, VAR16, VAR28);
        VAR12[1][VAR19](VAR4 + 8, VAR16 + 8, VAR28);
    }
    if (!VAR40 || !(VAR2->VAR41->VAR42 & VAR43))
    {
        VAR11[1][VAR20](VAR6, VAR18, VAR29, VAR15 >> 1);
        VAR11[1][VAR20](VAR5, VAR17, VAR29, VAR15 >> 1);
    }
}