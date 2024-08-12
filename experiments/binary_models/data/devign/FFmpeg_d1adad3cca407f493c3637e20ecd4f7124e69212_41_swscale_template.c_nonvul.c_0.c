static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, const VAR2 *VAR5, const VAR2 *VAR6, long VAR7, VAR8 *VAR9)
{
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        int VAR11 = VAR5[3 * VAR10 + 0];
        int VAR12 = VAR5[3 * VAR10 + 1];
        int VAR13 = VAR5[3 * VAR10 + 2];
        VAR3[VAR10] = (VAR14 * VAR13 + VAR15 * VAR12 + VAR16 * VAR11 + (257 << (VAR17 - 1))) >> VAR17;
        VAR4[VAR10] = (VAR18 * VAR13 + VAR19 * VAR12 + VAR20 * VAR11 + (257 << (VAR17 - 1))) >> VAR17;
    }
    assert(VAR5 == VAR6);
}