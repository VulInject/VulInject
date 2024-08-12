static inline int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, op_pixels_abs_func VAR14, op_pixels_abs_func VAR15, op_pixels_abs_func VAR16, int VAR17)
{
    VAR18 *VAR19 = VAR2->VAR19[VAR2->VAR20] + VAR21;
    const int VAR22 = VAR2->VAR23;
    int VAR24, VAR25, VAR26, VAR27, VAR28;
    VAR29 *VAR30, *VAR31;
    if (VAR2->VAR32)
    {
        *VAR3 = 0;
        *VAR4 = 0;
        return VAR5;
    }
    else
        VAR26 = 16 * VAR2->VAR33 + 8 * (VAR17 & 1);
    VAR27 = 16 * VAR2->VAR34 + 8 * (VAR17 >> 1);
    VAR30 = VAR2->VAR35[0] + (VAR27 * VAR2->VAR36) + VAR26;
    VAR24 = *VAR3;
    VAR25 = *VAR4;
    VAR31 = VAR13 + ((VAR27 + VAR25) * VAR2->VAR36) + (VAR26 + VAR24);
    VAR28 = VAR5;
    if (VAR24 > VAR6 && VAR24 < VAR8 && VAR25 > VAR7 && VAR25 < VAR9)
    {
        int VAR37 = 0, VAR38 = 0;
        int VAR39, VAR40, VAR41;
        VAR24 <<= 1;
        VAR25 <<= 1;
        VAR40 = VAR10 + VAR24;
        VAR41 = VAR11 + VAR25;
        VAR31 -= VAR2->VAR36;
        FUN2(VAR42, -1, -1)
        FUN2(VAR43, 0, -1) FUN2(VAR42, +1, -1) VAR31 += VAR2->VAR36;
        FUN2(VAR44, -1, 0)
        FUN2(VAR44, +1, 0) FUN2(VAR42, -1, +1) FUN2(VAR43, 0, +1) FUN2(VAR42, +1, +1) VAR24 += VAR37;
        VAR25 += VAR38;
    }
    else
    {
        VAR24 <<= 1;
        VAR25 <<= 1;
    }
    *VAR3 = VAR24;
    *VAR4 = VAR25;
    return VAR28;
}