FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR1 *VAR4, int VAR5, enum PixelFormat VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17)
{
    const int VAR18 = VAR19 << VAR14, VAR20 = VAR21 << VAR15, VAR22 = VAR23 << VAR16, VAR24 = VAR25 << VAR14, VAR26 = VAR27 << VAR15, VAR28 = VAR29 << VAR16, VAR30 = 257 << VAR17, VAR31 = ~(VAR11 | VAR13);
    int VAR32;
    VAR11 |= VAR11 << 1;
    VAR13 |= VAR13 << 1;
    VAR12 |= VAR12 << 1;
    for (VAR32 = 0; VAR32 < VAR5; VAR32++)
    {
        int VAR33 = FUN2(2 * VAR32 + 0) >> VAR10;
        int VAR34 = FUN2(2 * VAR32 + 1) >> VAR10;
        int VAR35, VAR36, VAR37 = (VAR33 & VAR31) + (VAR34 & VAR31);
        int VAR38 = VAR33 + VAR34 - VAR37;
        VAR35 = (VAR38 & VAR13) >> VAR9;
        if (VAR10 || VAR6 == VAR39 || VAR6 == VAR40 || VAR6 == VAR41 || VAR6 == VAR42)
        {
            VAR37 >>= VAR8;
        }
        else
        {
            VAR37 = (VAR37 & VAR12) >> VAR8;
        }
        VAR36 = (VAR38 & VAR11) >> VAR7;
        VAR2[VAR32] = (VAR18 * VAR36 + VAR20 * VAR37 + VAR22 * VAR35 + VAR30) >> (VAR17 + 1);
        VAR3[VAR32] = (VAR24 * VAR36 + VAR26 * VAR37 + VAR28 * VAR35 + VAR30) >> (VAR17 + 1);
    }
}