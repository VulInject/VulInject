FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR1 *VAR4, int VAR5, enum PixelFormat VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17)
{
    const int VAR18 = VAR19 << VAR14, VAR20 = VAR21 << VAR15, VAR22 = VAR23 << VAR16, VAR24 = VAR25 << VAR14, VAR26 = VAR27 << VAR15, VAR28 = VAR29 << VAR16, VAR30 = 257 << (VAR17 - 1);
    int VAR31;
    for (VAR31 = 0; VAR31 < VAR5; VAR31++)
    {
        int VAR32 = FUN2(VAR31) >> VAR10;
        int VAR33 = (VAR32 & VAR13) >> VAR9;
        int VAR34 = (VAR32 & VAR12) >> VAR8;
        int VAR35 = (VAR32 & VAR11) >> VAR7;
        VAR2[VAR31] = (VAR18 * VAR35 + VAR20 * VAR34 + VAR22 * VAR33 + VAR30) >> VAR17;
        VAR3[VAR31] = (VAR24 * VAR35 + VAR26 * VAR34 + VAR28 * VAR33 + VAR30) >> VAR17;
    }
}