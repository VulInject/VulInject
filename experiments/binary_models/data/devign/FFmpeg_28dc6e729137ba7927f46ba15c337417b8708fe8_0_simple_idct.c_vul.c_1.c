static inline void FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR10 = VAR5[8 * 0];
    VAR11 = VAR5[8 * 2];
    VAR12 = VAR5[8 * 4];
    VAR13 = VAR5[8 * 6];
    VAR6 = ((VAR10 + VAR12) << (VAR14 - 1)) + (1 << (VAR15 - 1));
    VAR8 = ((VAR10 - VAR12) << (VAR14 - 1)) + (1 << (VAR15 - 1));
    VAR7 = VAR11 * VAR16 + VAR13 * VAR17;
    VAR9 = VAR11 * VAR17 - VAR13 * VAR16;
    VAR2[0] = FUN2((VAR6 + VAR7) >> VAR15);
    VAR2 += VAR3;
    VAR2[0] = FUN2((VAR8 + VAR9) >> VAR15);
    VAR2 += VAR3;
    VAR2[0] = FUN2((VAR8 - VAR9) >> VAR15);
    VAR2 += VAR3;
    VAR2[0] = FUN2((VAR6 - VAR7) >> VAR15);
}