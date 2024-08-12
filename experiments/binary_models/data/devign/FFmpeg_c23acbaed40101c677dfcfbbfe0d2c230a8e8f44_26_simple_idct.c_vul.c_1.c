static inline void FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    const VAR1 *VAR14 = VAR15 + VAR16;
    VAR10 = VAR5[8 * 0];
    VAR11 = VAR5[8 * 1];
    VAR12 = VAR5[8 * 2];
    VAR13 = VAR5[8 * 3];
    VAR6 = (VAR10 + VAR12) * VAR17 + (1 << (VAR18 - 1));
    VAR8 = (VAR10 - VAR12) * VAR17 + (1 << (VAR18 - 1));
    VAR7 = VAR11 * VAR19 + VAR13 * VAR20;
    VAR9 = VAR11 * VAR20 - VAR13 * VAR19;
    VAR2[0] = VAR14[VAR2[0] + ((VAR6 + VAR7) >> VAR18)];
    VAR2 += VAR3;
    VAR2[0] = VAR14[VAR2[0] + ((VAR8 + VAR9) >> VAR18)];
    VAR2 += VAR3;
    VAR2[0] = VAR14[VAR2[0] + ((VAR8 - VAR9) >> VAR18)];
    VAR2 += VAR3;
    VAR2[0] = VAR14[VAR2[0] + ((VAR6 - VAR7) >> VAR18)];
}